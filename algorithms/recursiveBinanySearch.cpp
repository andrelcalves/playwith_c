#include <stdio.h>
#include <cassert>

int recursiveBinarySearch(int list[], int size, int target);

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 1;
    // Calculate the size of the array
    // Sizeof dertemines the size based on the type information at compile time.
    // It doesn't perform any form of iteration or traversal through an array;
    int size = sizeof(list) / sizeof(list[0]); 
    int result = recursiveBinarySearch(list, size, target);
    if (result == -1)
        printf("The target: %d was not found.",target);    
    else
        printf("The target value is in the array position  : %d",result);    
    
    // Test case 1: Target value exists in the list
    int target1 = 5;
    int result1 = recursiveBinarySearch(list, size, target1);
    assert(result1 == 4);
    // Test case 2: Target value does not exist in the list
    int target2 = 11;
    int result2 = recursiveBinarySearch(list, size, target2);
    assert(result2 == -1);
    // Test case 3: Target value is the first element in the list
    int target3 = 1;
    int result3 = recursiveBinarySearch(list, size, target3);
    assert(result3 == 0);
    // Test case 4: Target value is the last element in the list
    int target4 = 10;
    int result4 = recursiveBinarySearch(list, size, target4);
    assert(result4 == 9);
    // Test case 5: Target value is greater than the last element
    int target5 = 15;
    int result5 = recursiveBinarySearch(list, size, target5);
    assert(result5 == -1);
    // Test case 6: Target value is smaller than the first elemen
    int target6 = 0;
    int result6 = recursiveBinarySearch(list, size, target6);
    assert(result6 == -1);
    printf("All test cases passed!\n");
        
    return 0;

}

// This example will return the list index of the target value if it exists in the list, else it will return -1.
// Different from the binary search, this recursive binary don't make use of variables to keep track
// of the first and last index of the list. Instead, we create new lists every time with a subset of value
// from the original list. This is not a good approach because it will consume a lot of memory.
// So it's run in logarithmic time O(log n)
// BTW, C compilers doesn't implement tail recursion optimization, which means that the compiler
// will optimize the recursive function to avoid the creation of new lists every time. In that case of using C is better to use interative binary search.
int recursiveBinarySearch(int list[], int size, int target) {   
    
    printf("size = %d\n",size);
    printf("target = %d\n",target);
    printf("list[size-1] = %d\n",list[size-1]);

    // it's always important to write a stop condition at the begginer of a recurive function.
    if (target == list[size-1]) return size-1;

    // to avoid the case where the target is not in the list, the list needs to be sorted.
    if (target < list[size-1] || target > list[0]) {
        if (size >= 1) {
            int mid = size / 2;            
            if (target <= list[mid]) {
                return recursiveBinarySearch(list, mid, target);
            } else if (target > list[mid]) {
                return recursiveBinarySearch(list + mid + 1, size - mid - 1, target);
            }    
        }
    }
    return -1;   
}
