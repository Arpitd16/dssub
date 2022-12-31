#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int a[], int n){
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++){
        flag = 0;
        for (j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main(){
    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
    bubblesort(a, n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nName: DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d",16);
  time_t t;
  time(&t);
  printf("\nTime : %s",ctime(&t));
    return 0;

}