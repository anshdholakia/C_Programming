#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("The file name is %s\n",__FILE__);
    printf("Todays date is %s\n",__DATE__);
    printf("Time now is %s\n",__TIME__);
    printf("Line number is %d\n",__LINE__);
    printf("ASCI: %d\n",__STDC__);
    return 0;
}