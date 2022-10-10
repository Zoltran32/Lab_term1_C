#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 16

int get_decimal_number_length(int number)
{
    int digits_ammount = 0;
    while(number > 0)
    {
        number /= 10;
        digits_ammount++;
    }
    return digits_ammount;
}

void print_cell(int number, int cell_size)
{
    int number_size = get_decimal_number_length(number);
    int remain_size = cell_size - number_size - 2;
    while(remain_size > 0)
    {
        printf(" ");
        remain_size--;
    }
    printf(" %d ", number);
}

void print_line(int line_length)
{
    for(int i = 0; i < (line_length + 2); i++)
        printf("-");
    printf("\n");
}

int main()
{
    //Task 1
    //Print square matrix
    //Arrays are not allowed
    //Pseudo - graphic surrounding is optional

    int cell_size = get_decimal_number_length(MATRIX_SIZE) + 2; //Cell size with 2 spaces/ Example | 1  | 16 |
    int line_length = MATRIX_SIZE * (cell_size + 1);

    print_line(line_length);

    for(int i = 1; i <= MATRIX_SIZE; i++)
    {
        for(int j = 1; j <= MATRIX_SIZE; j++)
        {
            printf("|");
            print_cell(j, cell_size);
        }
        printf("|\n");
        print_line(line_length);
    }

    //Task 2
    //You have some money as integer. Task is give exchange with minimum amount of coins of value 3 and 5.
    //Consider amount of coins for exchange as limitless.
    int money_count = 100;
    money_count %= 5;
    money_count %= 3;
    if(money_count == 0)
        printf("Exchange is possible.\n");
    else
        printf("Exchange is not possible.\n");

    //Task 3
    //(Was not represented on lab but is useful for tasks representation)
    //Make console choose for tasks on "main screen" and separate "screens" for each task
    //Return to main screen is optional
    //Exit program from main screen is optional
    //Making this system available for further usage is highly recommended

    return 0;
}
