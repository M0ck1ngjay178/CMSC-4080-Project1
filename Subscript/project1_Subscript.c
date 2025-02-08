//---------LIBRARIES---------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//-------------------------

//-------SOURCE-----
//https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
//-------------------

//-------DEFINED VARIABLES-----
#define SIZE 5000
//----------------------------

//-----Prototypes-----
void subcriptMethod();
void freeArray(int **arr, int size);
int **allocateArr(int size);
//-------------------


//===========MAIN=================
int main(void){

    subcriptMethod();
    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void subcriptMethod(){
    //int subArr[SIZE][SIZE];
    int **subArr = allocateArr(SIZE);
    int i, j;
    clock_t begin, finish;
    double totalTime;

    begin = clock();

    for(i = 0; i < SIZE; i++){
        for(j=0; j < SIZE; j++){
            subArr[i][j] = i+j;
            //printf("This is the Contents: ", subArr);
        }
    }
    finish = clock();
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC);
    printf("Subscript Method: %f sec\n", totalTime);
    freeArray(subArr, SIZE);
}


//----------ALLOCATE-------------
int **allocateArr(int size) {
    int **arr = (int **)malloc(size * sizeof(int *));
    if (!arr) {
        printf("Error in Allocation");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = (int *)malloc(size * sizeof(int));
        if (!arr[i]) {
            printf("Error in Allocation");
            exit(EXIT_FAILURE);
        }
    }
    return arr;
}

//-----------free memory------------
void freeArray(int **arr, int size) {
    for (int i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);
}
//-------------------------------------------------------------------
