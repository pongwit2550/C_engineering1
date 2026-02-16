#include <stdio.h>

int main(void) {
    int i;
    int x[6];
    //ส่วนของการรับเข้าในแต่ละเอลิเมนต์ของ array x
    for(i = 0; i <6;i++){
        printf("x[%d]: ",i);
        scanf("%d",&x[i]); 
    }
   //ส่วนของการสลับค่า
    for(i = 0; i<3;i++){
       
    }
    printf("results \n");
            // แสดงผลลัพธ์ 
    for(int i =0; i<6;i++){
        printf("x[%d] = %d\n",i,x[i]);
    }

    return 0;
}