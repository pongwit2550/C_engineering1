#include <stdio.h>

int main()
{    
    double L_1 , L_2, squre, height = 0;

    printf("Enter height: ");
    scanf("%lf", &height);

    printf("\nEnter L1: ");
    scanf("%lf", &L_1);

    printf("\nEnter L2: ");
    scanf("%lf", &L_2);
    
    //sum = L_1 + L_2;
    squre = 0.5*(height*(L_1 + L_2));

    printf("สี่เหลี่ยมคางหมู : %lf", squre);


    return 0;
}
