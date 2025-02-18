//---------HEADER--------------
//CMSC-4080-STRUCTURES-ASSIGNMENT6
//MARGO BONAL, DUE: WED 2/12/25
//----------------------------

//---------LIBRARIES---------
#include <stdio.h>
//--------------------------

int fun(int *a);

//int a, b;

int main (void){

    int a, b;
    a = 10;

    b = a + fun(&a);
    printf("\n\n---------------RIGHT----------------\n");
    printf("With the function call on the right, ");
    printf(" b is: %d\n", b);
    printf("\n-------------------------------------\n\n");

    a = 10;
    b = fun(&a) + a;
    printf("\n\n----------------LEFT------------------\n");
    printf("With the function call on the left, ");
    printf(" b is: %d\n", b);
    printf("\n-------------------------------------\n\n");


    return 0;
}

int fun(int *a){
    *a +=10;
    return 40;
}
