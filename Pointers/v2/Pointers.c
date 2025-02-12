//---------HEADER--------------
//CMSC-4080-STRUCTURES-PROJECT1
//MARGO BONAL, DUE: WED 2/12/25
//----------------------------

//---------LIBRARIES---------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//-------------------------

//-------SOURCE-----
//https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
//https://www.geeksforgeeks.org/difference-between-stack-allocated-and-heap-allocated-arrays/
//-------------------

//-------DEFINED VARIABLES-----
#define SIZE 20
#define ITERATIONS 9000000
//----------------------------

//-----Prototypes-----
void pointerMethod();
void banner(double val);
//-------------------


//===========MAIN=================
int main(void){

    pointerMethod();//call pointer method
    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void pointerMethod(){
    int subArr[SIZE][SIZE];//2D array
    int i, j, a, b;   //initialize all variables
    clock_t begin, finish;//initialize timers
    double totalTime;//double for total time

    begin = clock();//start timer


    for (i = 0; i < ITERATIONS; i++) {//loop for defined iteration
        for (a = 0; a < SIZE; a++) {//index through all rows
            for (b = 0; b < SIZE; b++) {//index through all columns
                *(*(subArr + a) + b) = a + b;     //pointer arithmetic method
            }
        }
    }
    
    finish = clock();//end timer
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC);//perform total time calculation
    banner(totalTime);
}

void banner(double val) {  
    printf("\n----POINTER ARRAY PROCESSING---\n");
    printf("Pointer Method: %.4f sec\n", val);
    printf("Iterations: %d\n", ITERATIONS);  
    printf("2D Array Size: [%d] x [%d]\n", SIZE, SIZE);
    printf("---------------------------------\n\n");
}

