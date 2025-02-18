//---------HEADER--------------
//CMSC-4080-STRUCTURES-ASSIGNMENT6
//MARGO BONAL, DUE: WED 2/19/25
//----------------------------

//---------LIBRARIES---------
#include <stdio.h>
//--------------------------

int fun(int *a);//fun prototype of type int


int main (void){

    int a, b; //initialize integer variables for a and b
    a = 10;  //set a to 10

    b = a + fun(&a); //call fun() from the right
    printf("\n\n---------------RIGHT----------------\n");
    printf("With the function call on the right, ");
    printf(" b is: %d\n", b);                               //display the calculated result stored in b
    printf("\n-------------------------------------\n\n");

    a = 10;  //set a back to 10
    b = fun(&a) + a;    //call fun() from the left
    printf("\n\n----------------LEFT------------------\n");
    printf("With the function call on the left, ");
    printf(" b is: %d\n", b);                               //display the calculated result stored in b
    printf("\n-------------------------------------\n\n");

    return 0;   //return 0 upon exit
}//end main

int fun(int *a){    //fun function, implemets 2way parameters or pass-by-reference
    *a +=10;        //pass value of a, perform calculation
    return 3;       //retun any value 
}
