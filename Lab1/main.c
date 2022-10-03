#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 16

int getDecimalNumberLength(int number)
{
    int digitsAmmount = 0;
    while(number > 0)
    {
        number /= 10;
        digitsAmmount++;
    }
    return digitsAmmount;
}

void printCell(int number, int cell_size)
{
    int number_size = getDecimalNumberLength(number);
    if(number_size < (cell_size - 2))
        printf(" ");
    printf(" %d ", number);
}

void printLine(int lineLength)
{
    for(int i = 0; i < (lineLength + 2); i++)
        printf("-");
    printf("\n");
}

int main()
{
    //Task 1
    //Print square "matrix"
    //Arrays usage is not allowded
    //Pseudo - graphic surrounding is optional

    int cell_size = getDecimalNumberLength(MATRIX_SIZE) + 2; //Cell size with 2 spaces/ Example | 1  | 16 |
    int lineLength = MATRIX_SIZE * (cell_size + 1);

    printLine(lineLength);

    for(int i = 1; i <= MATRIX_SIZE; i++)
    {
        for(int j = 1; j <= MATRIX_SIZE; j++)
        {
            printf("|");
            printCell(j, cell_size);
        }
        printf("|\n");
        printLine(lineLength);
    }

    //Task 2
    //You have some money as integer. Task is give exchange with minimum amount of coins of value 3 and 5.
    //Consider amount of coins for exchange as limitless.

    //Task 3
    //(Was not represented on lab but is useful for tasks representation)
    //Make console choose for tasks on "main screen" and seperate "screens" for each task
    //Return to main screen is optional
    //Exit program from main screen is optional
    //Making this system avalable for further usage is highly recomended

    return 0;
}
