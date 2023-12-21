#include <assert.h>

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(list) / sizeof(list[0]);

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

    // Test case 5: Target value is greater than the last element in the list
    int target5 = 15;
    int result5 = recursiveBinarySearch(list, size, target5);
    assert(result5 == -1);

    // Test case 6: Target value is smaller than the first element in the list
    int target6 = 0;
    int result6 = recursiveBinarySearch(list, size, target6);
    assert(result6 == -1);

    printf("All test cases passed!\n");

    return 0;
}