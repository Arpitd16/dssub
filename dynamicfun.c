//Dynamic memory -->
#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
int main()
{
    //Use of realloc
//     int n;
// printf("Enter the size of the new array you want to create\n");
//     scanf("%d", &n);
//     int *ptr = (int *)realloc(ptr ,  n*sizeof(int));
//     for (int i = 0; i < n; i++){
// printf("Enter the new value no %d of this array\n",i);
//        scanf("%d", &ptr[i]);}
//     for (int i = 0; i < n; i++){
// printf("The new value at %d of this array is %d\n",i, ptr[i]);}
//     free(ptr);    
printf("\nName: DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d",2);
  time_t t;
  time(&t);
  printf("\nTime : %s",ctime(&t));
//  //Use of malloc
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create\n");
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value no %d of this array\n",i);
//        scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array is %d\n",i, ptr[i]);
//     }

    //Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n ,  sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);
    }
    return 0;
}


