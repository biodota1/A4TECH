#include<stdio.h>
#include<stdlib.h>

struct matrix{
    char name[20];
    int row;
    int column;
    int *values;
};

typedef struct matrix Matrix;

int main{
    int selection;

    do{
        printf("Matrix Calculator Menu: \n");
        printf("\n[1]Define Matrix: ");
        printf("\n[2]Calculate Matrix: ");
        printf("\n[3]Delete Matrix ");
        printf("\n[4]Exit Program" );

        printf("Enter your choice: ");

        switch(selection){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;

        }while (selection!=4);





    }
}