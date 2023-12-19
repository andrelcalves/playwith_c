#include <stdio.h>

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
    return 0;
}

// This example will return the list index of the target value if it exists in the list, else it will return -1.
int recursiveBinarySearch(int list[], int size, int target) {   
    
    printf("size = %d\n",size);
    printf("target = %d\n",target);
    printf("list[size-1] = %d\n",list[size-1]);

    if (target == list[size-1]) return size-1;
    
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
