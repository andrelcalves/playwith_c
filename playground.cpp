/* 
    This source code serves as a playground for learning and experimentation purposes.
    Feel free to modify, experiment, and explore different concepts here. 
    Comments and annotations are provided to aid understanding.
    Remember, this is a safe environment for testing and learning!

    C data types remainder

    chat    (1 byte)  | %c     
    int     (4 bytes) | %d
    float   (4 bytes) | %f
    double  (8 bytes) | %lf

    to print bytes use %zu
*/

#include <stdio.h>

void funcHelloWorld(const char *hello);
void funcDataTypes(void);
void funcUserInputData(void);
void funcArithemeticOperators(void);

int main(){
    funcHelloWorld("Hello, world!\n");
    funcDataTypes();
    funcUserInputData();
    funcArithemeticOperators();
    return 0;
}

void funcHelloWorld(const char *hello){
      
    while(*hello){
        printf("%c", *hello);
        hello++;
    }
}
void funcDataTypes(void){

    int x;
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
void funcArithemeticOperators(void){
    /*
    + Addition
    - Subtraction
    * Mutiplication
    / Division
    % Remainder (ex: 1/12 = -8/4 the result is 4)
    ++ Increment (increments by 1)
    -- Decrement (decrements by 1)

    to print only a specif numbers of cases in fload or double use as example %.1f %.2f 
    */
    
    int x = 12;
    int result = x + 8;
    printf("\n %d",result);

    float y = 34.556;
    printf("\n %.2f",y + 16.555) ;

    // remainder
    /*
    12/8   12  |_ 8
    rest-> *4*   1
    */
    printf("\n result of remainder: %d", x % 8);

    /* ++ -- oprators, when it cames after the value firts is move to the other variable than the operations occurs as example below*/
    int a = 12;
    int b = a++;
    printf("\n a = %d and b = %d",a,b);

    a = 12;
    b = ++a;
    printf("\n a = %d and b = %d",a,b);

}


