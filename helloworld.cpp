#include <stdio.h>

/*
data types

chat    (1 byte)  | %c     
int     (4 bytes) | %d
float   (4 bytes) | %f
double  (8 bytes) | %lf
*/


void fprinttest(const char *hello);

int main(){
    fprinttest("Hello, world!\n");
    return 0;
}

void fprinttest(const char *hello){
    int x;
    
    while(*hello){
        printf("%c", *hello);
        hello++;
    }

    for(x=0; x<10; x++){
      printf("%d", x);      
    }

}



