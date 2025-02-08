//---------LIBRARIES---------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//-------------------------

//-------SOURCE-----
//https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
//-------------------

//-------DEFINED VARIABLES-----
#define SIZE 8000
//----------------------------

//-----Prototypes-----
void pointerMethod();
void freeArray(int **arr, int size);
int **allocateArr(int size);
//-------------------


//===========MAIN=================
int main(void){

    pointerMethod(); //call PointerMethod function for processing
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

    begin = clock();                        //start clock

    for(i = 0; i < SIZE; i++){              //outer for loop to count i up till SIZE, incrementing i
        for(j=0; j < SIZE; j++){            //inner for loop to count j up till SIZE, incrementing j
            *(*(subArr + i) + j) = i + j;   //perform artithmatic using pointer arithmatic
        }
    }
    finish = clock();                                   //end clock, store finishing time
    totalTime =((double)(finish-begin)/CLOCKS_PER_SEC); //perform total time calculation
    printf("Pointer Method: %f sec\n", totalTime);      //display overall stats 
    freeArray(subArr, SIZE);                            //deallocate array
}
//----------ALLOCATE-------------
int **allocateArr(int size) {                           //function to create array
    int **arr = (int **)malloc(size * sizeof(int *));   //initalize array
    if (!arr) {                                         //check if array doenst exist
        printf("Error in Allocation");                  //diplay error msg
        exit(EXIT_FAILURE);                             //exit proccess
    }
    
    for (int i = 0; i < size; i++) {                    //outer for loop to count i up till SIZE, incrementing i
        arr[i] = (int *)malloc(size * sizeof(int));     //allocte for an array of size, and assign to arr[i]
        if (!arr[i]) {                                  //check if array allocation failed
            printf("Error in Allocation");              //diplay error msg
            exit(EXIT_FAILURE);                         //exit proccess
        }
    }
    return arr;                                         //return value of array
}

//-----------free memory------------
void freeArray(int **arr, int size) {                   //function to deallocate memory
    for (int i = 0; i < size; i++) {                    //outer for loop to count i up till SIZE, incrementing i
        free(arr[i]);                                   //call free
    }
    free(arr);                                          //call free
}


