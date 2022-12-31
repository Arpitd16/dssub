#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int a[], int l, int h) {
    int pivaot = a[l];
    int i = l, j = h;
    do{
        do{
            i++;
        } while (a[i] <= pivaot);
        do{
            j--;
        } while (a[j] > pivaot);
        if (i < j){
            swap(&a[i], &a[j]);
        }
    } while (i < j);
    swap(&a[l], &a[j]);
    return j;
}
void quicksort(int a[], int l, int h){
    int j;
    if (l < h){
        j = partition(a, l, h);
        quicksort(a, l, j);
        quicksort(a, j + 1, h);
    }
}
int main(){
    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
    quicksort(a, 0, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("\nName: DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d",14);
  time_t t;
  time(&t);
  printf("\nTime : %s",ctime(&t));
    return 0;
}
