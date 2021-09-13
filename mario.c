#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declaring variables
    int height;
    int row;
    int column;
    int space;

    //getting a number between 1 through 8 from user
    do
    {
        height = get_int("Enter height (between 1 to 8): ");
    }
    while (height < 1 || height > 8);

    //loop for spacing to give the illusion that it is indented to the right
    //& loop for the hashtags of left half pyramid
    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        for (column = 0; column <= row; column++)
        {
            printf("#");
        }

        //two spaces in between the half pyraminds
        printf("  ");

        //right half pyramid
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}