#include <stdio.h>
#include <time.h>

int main() {
  int c, first, last, middle, n, search, array[100];
  printf("How Many Element You Want To Add:");
  scanf("%d", &n);

  printf("Enter %d Integer Elements\n", n);

  for (c = 0; c < n; c++)
    scanf("%d",  &array[c]);

  printf("Enter Value to Find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle + 1);
      break;
    } else
      last = middle - 1;

    middle = (first + last) / 2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
    printf("\nName: DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d",17);
  time_t t;
  time(&t);
  printf("\nTime : %s",ctime(&t));

}