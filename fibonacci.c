#include<stdio.h>

int fib_recursive(int n){
    if (n==0 || n==1){     
        return n;
    }
    else{
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
}

int fib_iterative(int n){
    int a=0;
    int b=1;
    for (int i = 0; i==n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
    
}

int main()
{   int num;
    printf("Enter the number you want fibonacci series of:");
    scanf("%d\n",&num);
    printf("%d\n",fib_recursive(num));
    printf("%d\n",fib_iterative(num));
    
}

    