#include<stdio.h>
int main()
{   int i,a,b,j;
    while (1)
    {
        printf("Enter 0 for straight triangle pattern and 1 for reverse triangle pattern\n");
        scanf("%d",&a);
        printf("Enter number of rows you want in the triangle\n");
        scanf ("%d",&b);
        if (a==0)
        {
            for (i=0;i<b;i++)
            {
                for(j=i;j>=0;j--)
                {
                    printf("*");
                }

                printf("\n");
            }
        
        
        }

        else if (a==1)
        {
            for (i=0;i<b;i++)
            {
                for(j=i;j<b;j++)
                {
                    printf("*");
                }

                printf("\n");
            }
        }

        else{
            printf("Wrong input please try again\n");
            continue;
        }
    
    }
    
    
  
}