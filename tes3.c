#include <stdio.h>
int main(void)
{
  int  i,j,k;
  printf("Enter i = ");
  scanf("%d",&i);
  printf("Enter j = ");
  scanf("%d",&j);
  k =  i - (j + i) % 2 + 4;
  printf("%d \n",k);
  k =  i++  +  --j;
  printf("%d %d %d\n",i,j,k);
  k =  i % j;
  printf("%d %d %d\n",i,j,k);
  return 0;
