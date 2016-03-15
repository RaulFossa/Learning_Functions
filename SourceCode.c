/*
This is a simple program written in C. This program uses standard 
functions. It is written entirely inside the main function!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Function Declarations
int multiply (int number, int random_num);
int raisedPow (int number, int random_num);
int sqr (int random_num);


int main( void )
{
    // Local variable declarations
    int number;
    int random_num;
    int product;
    int root;
    int range;
    // a. Prompt the user to enter a number
    printf("Please enter a number: ");

    // b. Read number
    scanf("%d", &number);

    // c. Display number
    printf("You entered %d\n", number);

    // d. Get a random number and scale to range 3..37
    srand(time(NULL));
    range = (37 - 3) + 1;
    random_num = rand() % range + 3;

    // e. Display random number
    printf("Your random number is %d\n", random_num);

    // f. Set product to number * random number
    product = multiply (number, random_num);

    // g. Display product
    printf("Product of %d times %d is %d\n", number, random_num, product);

    // h. Display number raised to power of random number
    printf("Number raised to the power of the random is %.1f\n",
           pow(number, random_num));

    // i. Set root to square root of random number
    root = sqrt(random_num);
    printf("The square root of the random munber is %f\n",
            sqrt(random_num));

    // j. Display ceiling of random number
    printf("The ceiling of the random number is %f\n",
            ceil(random_num));

    // k. Display floor of product
    printf("The floor of the product is %f\n",
            floor(product));

    // exit success
    return 0;
    }   // main

int multiply (int number, int random_num)
{
    return number * random_num;
    }

int raisedPow (int number, int random_num)
{
    return pow(number, random_num);
    // warning: implicit conversion turns floating-point number into
    // integer: 'double' to 'int'.I get a warning but it works!
    }

int sqr (int random_num)
{
    return sqrt(random_num);
    }
