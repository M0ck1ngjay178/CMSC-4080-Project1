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

void main(void){

    int choose;
    bool look = true;
    welcome();
    while(look){
    
        menu();

        scanf("Enter Choice: %d", &choose);

        switch(choose){

            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("!!!Invalid choice!!! Enter New Choice: ");
        }

    }

    
    
    return 0;
}

//-----------------Function Bodies--------------------
void menu(void){
    printf("\n--------MENU--------\n");
    printf("--------------------\n");
}

void welcome(void){
    printf("\n------------------------------------------------\n");
    printf("--WELCOME TO THE SHORT-CIRCUT EVALUATION PROGRAM--\n");
    printf("--------------------------------------------------\n");
}
void mathCheck(void){
   int a, b;
   if( a && (b/13-1)){
    
   }

}
//-----------------End Function Bodies----------------
