#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int chance;
int computer=0;
int human=0;
char name[300];
int i;


int random(int n){
    srand(time(NULL));
    return rand() % n;
}

int choice(int i){
    
    char decision[30];
    char *ptrz=decision;
    while (i<3)
    {
        printf("%s your chance:\n",name);
        scanf("%c",decision);
      
       if (&ptrz=='r'){
           if (random(2)==1)
           {
               printf("Computer chose paper\n");
               printf("Computer won!");
               i++;
               computer++;
           }
           else if (random(2)==2)
           {
               printf("Computer chose scissor\n");
               printf("Human won\n");
               i++;
               human++;
           }  
           else if (random(2)==0)
           {
               printf("Computer chose rock\n");
               printf("It is a tie\n");
           }
          
            
       }
       else if (&ptrz=='s'){
           if (random(2)==0)
           {
               printf("Computer chose rock\n");
               printf("Computer won!");
               i++;
               computer++;
           }
           else if (random(2)==2)
           {
               printf("Computer chose paper\n");
               printf("Human won\n");
               i++;
               human++;
           }  
           else if (random(2)==1)
           {
               printf("Computer chose scissor\n");
               printf("It is a tie\n");
           }
          
            
       }
       else if (&ptrz=='p'){
           if (random(2)==2)
           {
               printf("Computer chose scissor\n");
               printf("Computer won!");
               i++;
               computer++;
           }
           else if (random(2)==0)
           {
               printf("Computer chose rock\n");
               printf("Human won\n");
               i++;
               human++;
           }  
           else if (random(2)==1)
           {
               printf("Computer chose paper\n");
               printf("It is a tie\n");
           }
           
       }
       
    }

    return human;
    return computer;
    
    
    

}




int main()
{
   
    printf("\t\t\t\tWelcome to Rock,Paper,Scissor Game\t\t\t\n");
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Enter 0 to continue\n");
    scanf("%d",&i);
    printf("Press r for rock, p for paper, and s for scissors\n");
    choice(0);
    printf("Your score:%d\n",human);
    if (human>computer)
    {
        printf("You won\n");
    }
    else if (human<computer)
    {
        printf("You lost\n");
    }
    
    
    


    
    return 0;
}