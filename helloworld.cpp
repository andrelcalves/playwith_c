#include <stdio.h>

void fprinttest(void){
    int x;
    printf("Hello, world!\n");
    
    for(x=0; x<10; x++){
      printf("%d", x);      
    }

}

int main(){
    fprinttest();
    return 0;
}

