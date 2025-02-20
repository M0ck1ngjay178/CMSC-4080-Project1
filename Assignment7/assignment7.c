//---------HEADER--------------
//CMSC-4080-STRUCTURES-ASSIGNMENT6
//MARGO BONAL, DUE: FRI 2/21/25
//----------------------------

//---------LIBRARIES---------
#include <stdio.h>
#include <stdbool.h>
//--------------------------

//-----------------Prototypes--------------------
void menu(void);
void welcome(void);
void mathCheck(void);
//-----------------End Prototypes-----------------

int main(void){

    int choose;
    bool look = true;
    welcome();
    
    while(look){
        menu();
        //printf("Enter Choice: ");
        scanf("%d", &choose);

        switch(choose){

            case 1:
                
                break;
            case 2:
                break;
            case 3:
                mathCheck();
                break;
            case 4:
                printf("Exiting ...");
                return 0;
            default:
                printf("!!!Invalid choice!!! Enter New Choice: ");
                //break;
        }

    }

    return 0;
}

//-----------------Function Bodies--------------------
void menu(void){
    printf("\n--------MENU--------\n");
    printf("1. ");
    printf("2  ");
    printf("3. Test Division By Zero\n");
    printf("4. Exit\n");
    printf(" -Choose Option: \n");
    printf("----------------------\n");
}

void welcome(void){
    printf("\n------------------------------------------------\n");
    printf("--WELCOME TO THE SHORT-CIRCUT EVALUATION PROGRAM--\n");
    printf("--------------------------------------------------\n");
}
void mathCheck(void){
   int a, b;
   //if( a && (b/13-1)){
    //.....
    if( a && (10/ b)){
        printf("Both Variables were evaluated as True!");
    }else{
        printf("Short-Circuit! Didnt divide by zero!");
    }
}

//-----------------End Function Bodies----------------
