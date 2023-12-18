#include <stdio.h>

/* 
    Returns the index position of the target if found, else returns -1
    When pass an array to a function in C, it decays into a pointer, 
    and you lose information about its size so it need
    to pass the size as parameter. 
*/

int linearSearch(int listofNumbers[], int size, int target); 

int  linearSearch(int listofNumbers[], int size, int target){
            
    for(int i=0;i<size;i++){
        if (listofNumbers[i] == target) return i;
    }    
    return -1;
}    

int main(){
    
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 100;

    // Calculate the size of the array
    // Sizeof dertemines the size based on the type information at compile time.
    // It doesn't perform any form of iteration or traversal through an array;
    int size = sizeof(list) / sizeof(list[0]);  

    int result = linearSearch(list, size, target);
    if (result == -1)
        printf("The target: %d was not found.",target);    
    else
        printf("The target value is in the array position  : %d",result);    
    return 0;
}

