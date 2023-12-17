#include <stdio.h>
// This code is for draft and test only
/*
data types

chat    (1 byte)  | %c     
int     (4 bytes) | %d
float   (4 bytes) | %f
double  (8 bytes) | %lf

to print bytes use %zu
*/


void funcHelloWorld(const char *hello);
void funcUserInputData(void);

int main(){
    funcHelloWorld("Hello, world!\n");

    return 0;
}

void funcHelloWorld(const char *hello){
    int x;
    
    while(*hello){
        printf("%c", *hello);
        hello++;
    }

    for(x=0; x<10; x++){
      printf("%d", x);      
    }

    double y;
    y = 5.5e6;

    printf("\n %lf",y);

    //the char type in fact is stored as integer so if you print with %d u can see the value of the caracter as showing below
    char letterA = 'a';
    printf("\nletter a = %d",letterA);

    //get the size of the variables in bytes
    int age = 44;
    double number = 5.5;
    printf("\nint size in bytes = %zu",sizeof(age));
    printf("\nnumber size in bytes = %zu \n",sizeof(number));

    funcUserInputData();
}

void funcUserInputData(void){
    // get date from user interaction
    int age;
    printf("Enter age value: ");
    scanf("%d",&age);
    printf("Age =%d",age);

    // get more than one value
    char gender;
    printf("Enter your age than you gender: ");
    scanf("%d %c",&age, &gender);

    printf("\nYou have %d years old and is a %c", age, gender);
}



