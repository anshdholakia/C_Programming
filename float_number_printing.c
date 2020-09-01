// float_number_printing.c
#include<stdio.h>
#define a 3.14

int main()
{   
    const float b=7.334;
    printf("\a%f",b); 
    // b=4345; // it will show an error as you cannot change constant value
    // a=2; // it will show error as the variable is already defined above and is open during pre-processing
    // printf("%.4f\n",b); //when I type 0.4%f before \n it creates 4 digits after the decimal point.
    // printf("%8f\n",b); //when I type 8%f before \n it creates 8 digits for the characters.
    return 0;
}
