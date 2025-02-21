//---------HEADER--------------
//CMSC-4080-STRUCTURES-ASSIGNMENT7
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
int check(void);
void test_check(void);
void slideThirtyTwo (void);
//-----------------End Prototypes-----------------

int main(void){

    int choose;
    bool look = true;
    welcome();
    
    while(look){
        menu();
        //valid check input
        if (scanf("%d", &choose) != 1) {  // Check if input is valid
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch(choose){

            case 1:
            test_check();
                break;
            case 2:
                slideThirtyTwo();
                break;
            case 3:
                mathCheck();
                break;
            case 4:
                printf("Exiting ...");
                return 0;
            default:
                printf("!!!Invalid choice!!! Enter New Choice: ");
        }

    }

    return 0;
}

//-----------------Function Bodies--------------------
void menu(void){
    printf("\n--------MENU--------\n");
    printf("1. Logical And Test\n");
    printf("2. Equation From Slide 31\n");
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
//test division by zero
void mathCheck(void){
   int a = 0, b =0;
  
    if( a && (10/ b)){
        printf("Both Variables were evaluated as True!");
    }else{
        printf("Short-Circuit! Didnt divide by zero!\n");
        printf("Equation: %d && (10/ %d)\n", a,b);
    }
}


int check(void){
    printf("this is check function and shouldnt print is short circuit works!!");
    return 1;
}

//test logical and
void test_check(void){
    int x = 0;
    if(x && check()){
        printf("Both Evaluated");
    }else{
        printf("Short Circuit Worked!!\n");
        printf("Equation Evaluated: %d && check()", x);
    }
}


void slideThirtyTwo (void){
    int x = 0, y = 0;
    int end;

    //test original equation
    end = 13 * x * (y / 13 - 1);
    printf("Original Equation result: %d (test if division occurred)\n", end);

    //now test if short-circuit is evaluated
    if (x != 0 && (end = 13 * x * (y / 13 - 1))) {
        printf("Short-circuit version result: %d\n", end);
    } else {
        printf("Short-circuiting prevented evaluation!\n");
        printf("Equation Evaluated:  13 * %d * (%d / 13 - 1) \n", x,y);
    }

} 
//-----------------End Function Bodies----------------
