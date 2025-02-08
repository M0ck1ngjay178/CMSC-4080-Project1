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
void pointerMethod();
void freeArray(int **arr, int size);
int **allocateArr(int size);
//-------------------


//===========MAIN=================
int main(void){

    pointerMethod(); //call PointerMetod function for processing
    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void pointerMethod(){
    //int subArr[SIZE][SIZE];
    int **subArr = allocateArr(SIZE);   // call allocation function to build array
    int i, j;                           //declare variables for loop counters
    clock_t begin, finish;              //initialize timer variables
    double totalTime;                   //double variable to store total calculated time

    begin = clock();                    //start clock

    for(i = 0; i < SIZE; i++){          //outer for loop to count i up till SIZE, incrementing i
        for(j=0; j < SIZE; j++){        //inner for loop to count j up till SIZE, incrementing j
            subArr[i][j] = i+j;         //perform artithmatic using subscripts
        }
    }
    finish = clock();                                   //end clock, store finishing time
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC); //perform total time calculation
    printf("Pointer Method: %f sec\n", totalTime);      //display overall stats 
    freeArray(subArr, SIZE);                            //deallocat array
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


/*
//===========MAIN=================
int main(void){

    pointerMethod();

    return 0;
}
//===========END MAIN=================

//---------------FUNCTON BODIES--------------------------
void pointerMethod(){
    int subArr[SIZE][SIZE];
    int i, j;
    clock_t begin, finish;
    double totalTime;

    begin = clock();

    for(i = 0; i < SIZE; i++){
        for(j=0; j < SIZE; j++){
            *(*(subArr+i)+j)=i+j;
            //printf("This is the Contents: ", subArr);
        }
    }
    finish = clock();
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC);
    printf("Pointer Method: %f sec\n", totalTime);
}
//-------------------------------------------------------------------
*/