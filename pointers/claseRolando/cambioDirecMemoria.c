#include <stdio.h>
#include <stdlib.h>

void swap_values(int *pnt1, int *pnt2)
{
  int temp;
  
  temp = *pnt1;
  
  *pnt1 = *pnt2;
  
  *pnt2 = temp;
}

void swap_address(int **pnt3, int **pnt4)
{
  int *temp1;
  
  temp1 = *pnt3;
  
  *pnt3 = *pnt4;
  
  *pnt4 = temp1;
  
}

int main()
{
  int a = 3, b = 2;
  
  int *ptx, *pty;
  
  int **pnta, **pntb;
  
  ptx = &a;
  pty = &b;
  
  pnta = &ptx;
  pntb = &pty;
  
  printf("num desde ptr1 (puntero)%d\n", *(ptx));
  printf("num desde ptr1 (puntero)%d\n", *(pty));
  swap_values(&a, &b);
  swap_address(pnta, pntb);
  printf("num origen %d\n", num);
  printf("num desde ptr2 (puntero a puntero) %d\n", *(pnta));
  printf("num desde ptr2 (puntero a puntero) %d\n", *(pntb));
  
  return (0);
}