#include <stdio.h>
#include <math.h>

int main(){

    double h, r , area  = 0 ;

    printf("Enter Height: ");
    scanf("%lf", &h);


    printf("Enter r: ");
    scanf("%lf", &r);

    
    r = pow(r, 2);
    area = 0.33 * 3.14 * ( r * h);
    
    printf("circle cone area : %.2lf " , area);
    return 0;
}
