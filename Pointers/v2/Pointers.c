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
//TIME FOR SIZE 20 @ 8000000 ITERATIONS, Pointer Method: 5.055000 sec
//-------DEFINED VARIABLES-----
#define SIZE 20
#define ITERATIONS 8000000
//----------------------------

//-----Prototypes-----
void pointerMethod();
void banner(double val);
//-------------------


//===========MAIN=================
int main(void){

    pointerMethod();
    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void pointerMethod(){
    int subArr[SIZE][SIZE];
    int i, j, a, b;
    clock_t begin, finish;
    double totalTime;

    begin = clock();

    /*for(i = 0; i < ITERATIONS; i++){
        a = i % SIZE;
        b = (i * 3) % SIZE;
        *(*(subArr + a) + b) = a + b;
    }*/

    for (i = 0; i < ITERATIONS; i++) {
        for (a = 0; a < SIZE; a++) {
            for (b = 0; b < SIZE; b++) {
                *(*(subArr + a) + b) = a + b;    
            }
        }
    }
    
    finish = clock();
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC);
    banner(totalTime);
}

void banner(double val){
    printf("\n----POINTER ARRAY PROCESSING---\n");
    printf("Pointer Method: %f sec\n", val);
    printf("---------------------------------\n\n");
}

