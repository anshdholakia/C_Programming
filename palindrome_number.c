#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrom(int n)
{

    int b, num = n;
    while (num != 0)
    {
        b = b * 10 + num % 10;
        num = num / 10;
    }
    if (b == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check if it is palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrom(number))
    {
        printf("Yes, it is a palindrom\n");
    }
    else
    {
        printf("No, it is not a palindrom\n");
    }

    return 0;
}