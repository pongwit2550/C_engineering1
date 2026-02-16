#include <stdio.h>


void program_3(void){
    int i;
    int x[6];
    int tmp ;
    //ส่วนของการรับเข้าในแต่ละเอลิเมนต์ของ array x
    for(i = 0; i <6;i++){
        printf("x[%d]: ",i);
        scanf("%d",&x[i]); 
    }
   //ส่วนของการสลับค่า
    for(i = 0; i<3;i++){
       tmp = x[i];
       x[i] = x[5-i];
       x[5-i] = tmp;
    }
    printf("results \n");
            // แสดงผลลัพธ์ 
    for( i =0; i<6; i++){
        printf("x[%d] = %d\n",i,x[i]);
    }
}


void program_4(){
    int tmp[7][2];
    char *day[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    char *level[2] = {
        "High",
        "Low"
    };
    int Max;
    int Min;
    float sumh;
    float suml;
    int j;
    int i;

    //ส่วนของการรับเข้าในแต่ละเอลิเมนต์ของ array x
    for(i = 0; i <7;i++){
        for (j = 0; j < 2; j++)
        {
            printf("%s Temp %s : ",level[j], day[i]);
            scanf("%d",&tmp[i][j]);             
        }
    }
    Max = tmp[0][0]; // กำหนดค่าเริ่มต้นเป็นค่าแรกใน array
    Min = tmp[0][0];

    for(i = 0; i < 7; i++){
        for(j = 0; j < 2; j++){
            if(tmp[i][j] > Max) Max = tmp[i][j];
            if(tmp[i][j] < Min) Min = tmp[i][j];
        }
    }
   
    for (int i = 0; i < 7; i++)
    {
        /* code */
        sumh += tmp[i][0];
        suml += tmp[i][1];
    }
    
        printf("Min Temp : %d C\n",Min);
        printf("Max Temp : %d C\n",Max);
        printf("Average high temp : %.2f C\n", sumh/7);
        printf("Average Low temp : %.2f C\n", suml/7);
}

int main(void) {
   
    program_4();
    return 0;
}

