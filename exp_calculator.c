// CS2211a 2020
// Assignment number: 2
// Your name: Julia Anantchenko
// Your student number: 251097696
// Your UWO User Name: janantch
// Date Completed: Oct 6 2020

#include <stdio.h>

// recursive function for exponent calculation
float exponent(float b, int exp) {

    // if the exponent is 1, the base is the answer
    if (exp == 1)
        return b;

    // if the exponent is 0, the answer is 1
    else if (exp == 0)
        return 1;

    // if the exponent is positive, splits it and calls the function again to get the exponent to 1
    else if (exp > 0) {

        // if even
        if (exp%2 == 0)
            return (exponent(b, exp/2) * exponent(b, exp/2));

        // if odd
        else if (exp%2 == 1)
            return (exponent(b, (exp-1)/2) * exponent(b, (exp-1)/2) * b);        
    }

    // if the exponent is negative
    else {
        return 1/exponent(b, 0-exp);
    }
}

int main(void) 
{
    // variables
    float base, answer;
    int exp;

    // do while loop to continue until the user enters 0
    do {

        // prompts and receives base input
        printf("\nWhat is the base?\n");
        scanf("%f", &base);

        // exits if the base is 0
        if (base == 0) 
            return 0;

        // prompts and receives exponent input
        printf("\nWhat is the exponent?\n");
        scanf("%d", &exp);

        // prints the result
        answer = exponent(base, exp);
        printf("\nAnswer: %f\n", answer);

    } while (base != 0);
}

