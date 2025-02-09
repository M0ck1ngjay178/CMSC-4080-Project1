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
#define ITERATIONS 2000000
//----------------------------

//-----Prototypes-----
void subscriptMethod();
void banner(double val);
//-------------------


//===========MAIN=================
int main(void){

    subscriptMethod();
    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void subscriptMethod(){
    int subArr[SIZE][SIZE];
    int i, j, a, b;
    clock_t begin, finish;
    double totalTime;

    begin = clock();

    for(i = 0; i < ITERATIONS; i++){
        a = i % SIZE;
        b = (i * 3) % SIZE;
        subArr[a][b]+=a+b;
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

