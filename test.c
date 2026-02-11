#include <stdio.h>
int main() 
{
        int numA , numB, numC = 0;

        printf("Enter Your Number A: ");
        scanf("%d", &numA);
        printf("ค่าเดิมA:%d", numA,"\n");
        printf("\nEnter Your Number B: ");
        scanf("%d", &numB);
        printf("ค่าเดิมB:%d", numB, "\n");
        
        numC = numA;
        numA = numB;
        numB = numC;

        printf("\n*****************");
        printf("\nค่่าAที่สลับแล้ว: %d", numA);
        printf("\nค่าBที่สลับแล้ว: %d", numB);
        


	return 0;
}