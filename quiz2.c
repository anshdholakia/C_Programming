#include<stdio.h>

int main(int argc, char const *argv[])
{
    float d;
    int i,a;
    printf("Welcome to conversion program\n");
    while (1)
    {   
        printf("Enter 1 for kms to miles\n 2 for inches to foot\n 3 cms to inches\n 4 for pound to kgs\n 5 for inches to meters\n");
        scanf("%d\n",&i);
        printf("Enter your number:\n");
        scanf("%f\n",&d);
        if(i==1){
            printf("%f\n",d*0.621);
        }
        else if (i==2)
            {printf("%f\n",d*0.833);
        }
        else if (i==3)
            {printf("%f\n",d*0.39);
        }
        else if (i==4)
        {
            printf("%f\n",d*0.45);
        }
        else if (i==5)
        {
            printf("%f\n",d*0.0254);
        }
        else{
            printf("Invalid input\n");

        }
        printf("Enter 1 for restart and 2 for exiting\n");
        scanf("%d",&a);
        if(a==1){
            continue;
        }
        else if(a==2){
            printf("Exited");
        }
    }
    
   
    
    
    

    return 0;
}