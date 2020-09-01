#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    float r = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    return r;
}
float AreaofCircle(int x1, int y1, int x2, int y2,float (*fPtr)(int,int,int,int))
{
    
    float a = pow((*fPtr)(x1,y2,x2,y2), 2);
    return a;
    free(fPtr);
}
int main()
{
    int x, y, p, q;
    printf("Enter x1\n");
    scanf("%d", &x);
    printf("Enter y1\n");
    scanf("%d", &y);
    printf("Enter x2\n");
    scanf("%d", &p);
    printf("Enter y2\n");
    scanf("%d", &q);
    printf("The Area of the distance taking radius of the circle as the distance between the point is: %f\n", AreaofCircle(x, y, p, q,Edistance));

    return 0;
}