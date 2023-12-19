#include <stdio.h>

int binarySearch(int list[], int size, int target);

int main() {  
  int list[] = {1,2,3,4,5,6,7,8,9,10};
  int target = 10;
  // Calculate the size of the array
  // Sizeof dertemines the size based on the type information at compile time.
  // It doesn't perform any form of iteration or traversal through an array;
  int size = sizeof(list) / sizeof(list[0]);  
  int result = binarySearch(list, size, target);
  if (result == -1)
      printf("The target: %d was not found.",target);    
  else
      printf("The target value is in the array position  : %d",result);    
  return 0;

}

// Binary search is a fast search algorithm with run-time complexity of Ο(log n).
int binarySearch(int list[], int size, int target) {
    int first = 0, last = size - 1;
    
    // to avoid the case where the target is not in the list, the list needs to be sorted.
    if(target < list[first] || target > list[last]) return -1;

    while (first <= last) {
        int mid = (first + last) / 2;
        printf("mid = %d\n",mid);
        if (list[mid] == target) {
            return mid;
        } else if (list[mid] < target) {
            first = mid + 1;
            printf("first = %d\n",first);
        } else {
            last = mid - 1;
            printf("last = %d\n",last);
        }
    }
    return -1;
}

