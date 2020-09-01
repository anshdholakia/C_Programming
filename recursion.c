// factorial of a number in recursion
#include<stdio.h>

int main()
{
  int i,a;
  printf("Enter the number:\n");
  scanf("%d",&i);


  if(i>1){
      while(i>1)
    {
      goto function;


    function:
        a=i-1; 
        i=i*a;
        continue;
    }

    printf("%d",i);

  }
  else if(i=1){
    printf("1");
  }
  else if(i=0){
    printf("1");
  }
  else{printf("Invlaid number please try again");}
  

}
