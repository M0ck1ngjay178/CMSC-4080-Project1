//---------LIBRARIES---------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//-------------------------

#define SIZE 900
//-----Prototypes-----
void subcriptMethod();
//-------------------


//===========MAIN=================
int main(void){

    subcriptMethod();

    return 0;
}
//===========END MAIN=================


void subcriptMethod(){
    int subArr[SIZE][SIZE];
    int i, j;
    clock_t begin, finish;
    double totalTime;

    begin = clock();

    for(i = 0; i < SIZE; i++){
        for(j=0; j < SIZE; j++){
            subArr[i][j] = i+j;
        }
    }
    finish = clock();
    totalTime =((double)(begin-finish)/CLOCKS_PER_SEC);
    printf("Subscript Method: %f sec\n", totalTime);
}

