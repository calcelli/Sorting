//Caleb Elliott
//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*,int*);
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
int count = 0;

int main(){
    printf("Before: \n");
    printValues();
    sort();
    printf("After: \n");
    printValues();
    //printf("count: %d", count);// prints the count

    return (0);
}//End main

void sort(){
    int i,j;
    for (i = 0; i < (MAX-1); i++)//for loop for place i
    {
        for (j = 0; j <(MAX-1); j++)//for loop for place j
        {
        if (values[j] > values[j+1])
        {//compares spot i to spot j
          //printf("j: %d \n", values +j);
          //printf("*j: %d \n\n", *(values +j));
          swap(values+j, values+j+1);//call swap
          printValues();

        }
    }
}
}
void swap(int *x, int *y){//swaps the two pointers
    //printf("I got to swap");
    int hold;
    hold = *x;
    //printf("Hold: %d \n", hold);
    //printf("*x: %d \n", *x);
    //printf("x: %d \n", x);

    *x = *y;
    *y = hold;
}


void printValues(){//prints the array
    int i,j;
    for (i = 0; i < (MAX); i++)
    {
        printf("%d ", values[i]);

    }
    printf("\n");
    //count++; //how many times a line is printed
}

