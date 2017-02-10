//Caleb Elliott
//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
//void swap(int*,int*);
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
    printf("Before: \n");
    printValues();
    sort();
    printf("After: \n");
    printValues();

    return (0);
}//End main

void sort(){
    int i,j, hold, count=0;
    for (i = 0; i < (MAX); i++)//for loop for place i
    {
        j = i;
        while (j > 0 && values[j] < values[j-1])//for loop for place j
        {
          hold = values [j];
          values [j] = values[j-1];
          values[j-1] = hold;
          j--;
          //count++;// counts the sort
          printValues();
        }
    }
    //printf("count: %d\n", count);// prints the count
}

/*void swap(int *x, int *y){//swaps the two pointers
    //printf("I got to swap");
    int hold;
    hold = *x;
    //printf("Hold: %d \n", hold);
    //printf("*x: %d \n", *x);
    //printf("x: %d \n", x);

    *x = *y;
    *y = hold;
}*/


void printValues(){//prints the array
    int i,j;
    for (i = 0; i < (MAX); i++)
    {
        printf("%d ", values[i]);

    }
    printf("\n");

}

