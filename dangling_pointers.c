#include<stdio.h>
#include<stdlib.h>

int Dangle(){
    int a=34;
    int b=24;
    int sum=a+b;
    return sum;


}

int main()
{

    // case 1: deallocation of a memory block
    int *ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1]=36;
    ptr[2]=64;
    ptr[3]=5;
    free(ptr); //ptr is now a dangling pointer

    //case 2:function returning locla variable address
    int * ptra=Dangle(); // ptra is a dangling pointer as scope of sum is local

    //case 3: If a variable is out of scope
    int *ptrb;
    {int a=24;
     int b=12;
    }

    return 0;
}