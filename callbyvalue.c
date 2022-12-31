#include <stdio.h>
#include <time.h>
// Call by value  ----->
void fun(int a, int b)
{
  a = 10;
  b = 20;
}
// Call by reference  ----->
void fun1(int *a, int *b)
{
  *a = 10;
  *b = 20;
}
int main()
{
  int a = 9;
  int b = 8;
  fun(a,b);
  printf("a: %d b:%d\n",a,b);
  fun1(&a, &b);
  printf("a:%d b:%d\n",a,b);
  
  
  printf("\nName:DHAMELIYA ARPIT MUKESHBHAI\n");
  printf("En. No. : 210130107036 \n");
  printf("Practical No. : %d", 1);
  time_t t;
  time(&t);
  printf("\nTime : %s", ctime(&t));
  return 0;
}