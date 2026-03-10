#include <stdio.h>
#include <math.h>
#define Pi 3.14;

float R = 6.5;
int MinIn3(int x,int y,int z){
    return (x <= y && x <= z) ? x : (y <= x && y <= z) ? y : z;
}

float Circle_Line(float r){
    
   float cirline = 2*r*Pi;
   return cirline;
}
float Circle_Area(float r){

   float area = (powf(r,2))*Pi;
   return area;

}
float Can_Skin(float r, float h)
{

    float skincan = (2*r*h)*Pi;
    return skincan;

}
/*


void PrintArray (int v[], int num){

}
*/


float powfloat(float num1, int num2){
    float pow = powf(num1,num2);
    return pow;
}
int main()
{
    
    float num_1 ;
    int num_2;
    printf("Enter float number (ทศนิยมเท่านั้น) : ");
    scanf("%f",&num_1);
    printf("Enter pow number : ");
    scanf("%d",&num_2);
    
    if (num_2 < 0 ){
        num_2 = num_2 * -1;
    }
    
    printf("Pow float : %.2f", powfloat(num_1,num_2));
    
    
    
    /*int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3th number : ");
    scanf("%d",&c);
    printf("Minimum is %d\n",MinIn3(a,b,c));
    */
    
    return 0;
}



