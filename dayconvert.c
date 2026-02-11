/*
#include <stdio.h>

int main(){
    int day , minutes ,hours , seconds = 0;

    printf("Enter number of days: ");
    scanf("%d", &day);

    hours = day * 24 ;
    minutes = hours * 60;
    seconds = minutes * 60 ;

    printf("day %d", day);
    printf("hours %d", hours);
    printf("minutes %d", minutes);
    printf("seconds %d", seconds);
    return 0;
}
*/

#include <stdio.h>
int main(void)
{
  int i,j;
  printf("Enter i = ");
  scanf("%d",&i);
  printf("Enter j = ");
  scanf("%d",&j);
  j +=  i;
  printf("%d %d\n",i,j);
  j -=  i;
  printf("%d %d\n",i,j);
  j *=  i;
  printf("%d %d\n",i,j);
  j /=  i;
  printf("%d %d\n",i,j);
  return 0;
}