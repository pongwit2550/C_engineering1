#include <stdio.h>

int main(){
    float F ,C = 0;
    printf("Enter temperature in Fahrenheit:  ");
    scanf("%f", &F);

    C = ((F-32)*5)/9;

    printf("Temperature in Celsius =  %.2f", C);

    return 0;
}
