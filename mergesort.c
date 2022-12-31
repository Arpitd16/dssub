#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h){
        if (a[i] < a[j])
            B[k++] = a[i++];
        else
            B[k++] = a[j++];
    }
    for (; i <= mid; i++)
        B[k++] = a[i];
    for (; j <= h; j++)
        B[k++] = a[j];
    for (i = l; i <= h; i++)
        a[i] = B[i];
}
void imergesort(int a[], int n)
{
    int p, l, h, mid, i;
    for (p = 2; p <= n; p = p * 2){
        for (i = 0; i + p - 1 <n; i = i + p){
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(a, l, mid, h);
        }
    }
    if (p / 2 < n)
        merge(a, 0, p / 2-1, n-1);
}
int main()
{
    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
    imergesort(a, n);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("\nName: DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d",2);
  time_t t;
  time(&t);
  printf("\nTime : %s",ctime(&t));
   return 0;
}