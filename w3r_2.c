// Write a C program to check whether three given integer values are in the range 20..50 inclusive.
// Return true if 1 or more of them are in the said range otherwise return false

// #include<stdio.h>
// #include<stdlib.h>
// int func(int x,int y,int z){
//     return (20<=x && x<=50) || (20<=y && y<=50) || (20<=z && z<=50);    
// }
// int main()
// {
//     printf("%d",func(51,5,51));
//     return 0;
// }



// Write a C program to compute the sum of the three given integers.
// However, if any of the values is in the range 10..20 inclusive then that value counts as 0, except 13 and 17.
// #include<stdio.h>
// #include<stdlib.h>
// int func(int x,int y,int z){
//     int result=x+y+z;
//     if ((x>=10 && x<=20) || (y>=10 && y<=20) || (z>=10 && z<=20))
//     {
//         if ((x==13 || x==17) || (y==13 || y==17) || (z==13 || z==17))
//         {
//             return result;
//         }
//         else{
//             return 0;
//         }
        
//     }
//     else
//     {
//         return result;
//     }
    
// }
// int main()
// {
//     printf("%d",func(13,21,80));
//     return 0;
// }




// Write a C program to compute the sum of the elements of a given  array of integers.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i,a=0;
//     printf("Enter the number of array elements\n");
//     scanf("%d",&i); 
//     int arr[i];
//     while (a<i)
//     {
//         printf("Enter the %d element:\n",a+1);
//         scanf("%d",&arr[a]);
//         a++;
//     }
//     a=0;
//     int sum=0;
//     while (a<i)
//     {
//         sum+=arr[a];
//         a++;
        
//     }
//     printf("The sum of the elements if %d",sum);
    

    
//     return 0;
// }




// 
// #include <stdio.h>
// #include <stdlib.h>
// int main(void){ 
//     int arr_size;
//     int a1[] = {10, 20, 30, 40};
//     arr_size = sizeof(a1)/sizeof(a1[0]);
//     printf("Elements in original array are: ");  
//     print_array(a1, arr_size);
//     int result[arr_size];
//     for (int i = 0; i < arr_size; i++)
//          {
//            result[i] = a1[(i + 1) % arr_size];
//          }
//     printf("\nElements in new array are: ");  
//     print_array(result, arr_size);
//     }         
//  print_array(int parray[], int size)
//   {
//    int i;      
//    for( i=0; i<size-1; i++)  
//     {  
//         printf("%d, ", parray[i]);  
//     } 
//    printf("%d ", parray[i]);  
//    printf("\n");   
//   }




// Write a C program to create a new array taking the elements after
// the element value 5 from a given array of integers.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[]={1,2,3,4,2,5,6,4,56,3,9,230,1203};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int a=0,r=0;
//     int rse[]={};
//     for (int i = 0; i < size; i++)
//     {
//         if (a>=1 || r==1)
//         {
//             rse[a-1]=arr[i];
//             a++;
//         }

//         else if (arr[i]==5)
//         {
//             a++;
//             r=1;
//         }
        
        
//     }
//     for (int i = 0; i < a-1; i++)
//     {
//         printf("The value of %d element of resulting array is %d\n",i+1,arr[i]);
//     }
    
    

//     return 0;
// }




// Write a C program to create a new array after replacing
// all the values 5 with 0 shifting all zeros to right direction.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[]={2,1,2,1,0,1,0,102,10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int pos=size;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==0)
//         {
//             arr[i]=arr[pos];
//             arr[pos]=0;
//             pos--;
//         }
        
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d, ",arr[i]);
//     }
    
    

//     return 0;
// }