#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

int main(){
   program1();
   program2();
   program3();
   program4();
   program5();
   program6();
   program7();
   
   return 0;
}


int program1(){
   printf("Program 1 \n");
   float Sum = 0;
   for (int i=1;i<=100;i++){
      Sum = Sum + powf(i,2.0);
   }

   printf("Sum of 1 squares to 100 squares is %.2f\n",Sum);
   printf("\n please Enter to exit this programe........");
   getchar();
   
}

int program2(){
   //program 2
   int Num = 0,product = 0;
   printf("Program 2 \n");
   printf("Enter Number: ");
   scanf("%d", &Num);
   for (int i = 1; i <= 12; i++)
   {
      /* code */
      product = Num * i;
      printf("%d X %d = %d\n",Num,i,product);
   }
   getchar();
   
}

int program3(){
   printf("Program 3 \n");

   int row ;
   int col ;
   printf("Enter rows : ");
   scanf("%d", &row);
   printf("Enter cols : ");
   scanf("%d", &col);

   // printf("%d",row);
   // printf("%d",col);
   for (int i = 1;i <= row; i++ ){
      /* code */
      printf("\n");
      for(int j = 1; j <= col; j++ ){
        printf(" * ");
      }
   }
   getchar();
}

int program4(){
   printf("\nProgram 4 \n");
   printf(" Multiplication Table \n");
   printf("  ");
   int pd = 0;
   for(int j = 1;j<=12;j++){
      printf(" ");
      printf("%5d",j);
   }
   printf("\n");
   printf("-------------------------------------------------------------------------------\n");
   
   for(int i = 1; i<= 12;i++){
    
      if (i < 10)
      {
         printf("  ");
      }else{
         printf(" ");
      }
      
      printf("%d|",i);
      
      for(int k = 1; k <= 12; k++){
         pd = k*i;
         printf("%5d", pd);
         printf(" ");
      }
      
      printf("\n");
   }
   getchar();
}

int program5(){
   printf("Program 5 \n");
   int  i = 1;
   float sum = 0 ;
   while (i <= 100)
   {
     sum += powf(i,2.0);
    // printf("%d", i);
     i++;
   }
   
   printf("Sum is %.2f\n",sum);
   getchar();
}

int program6(){
   printf("Program 6 \n");

   int i = 0;
   int sum = 0;
   int num, tmp;

   printf("Cardinal Number: ");
   scanf("%d",&num);
   while(i < num){
      i++;
      printf("No. %d : ",i);
      scanf("%d", &tmp);
      printf("\n");
      
      sum += tmp;
   }

   printf("Sum is %d\n",sum);
   printf("Total : %f\n",(double)sum/num);
   getchar();
}

int program7(){
   printf("Program 7 \n");

   int choice,sec;

   printf("Select program in choice!: \n");
   printf("1) Time Counter \n");
   printf("2) Time CountDown \n");

   printf("Example : \n");
   printf("Plese Enter your choice: 1 \n");
   printf("*****************************\n");
   printf("Plese Enter your choice: ");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      printf("Wecome to Time counter program!\n");
      printf("Enter Your Second : ");
      scanf("%d", &sec);
      Time_counter(sec);
      break;
   case 2:
      printf("Wecome to Time Coundown program!\n");
      printf("Enter Your Second : ");
      scanf("%d", &sec);

      Time_countdown(sec);
      break;
   
   default:
      printf("Choice not Null Please open this program agrain!!!");
      break;
   }

    
}
//function นับถอยหลัง
void Time_countdown(int sec){
   while (sec > 0)
   {
      printf("Time : %d \n", sec);
      fflush(stdout);
      sleep(1);
      sec--;
   }
   printf("Time Out!!!!!");
   
}
//function จับเวลา
void Time_counter(sec){
  for(int i = 0; i < sec; i++){
      printf("Time : %d \n", i);
      fflush(stdout);
      sleep(1);
   }
   printf("Time Out!!!!!");
}