#include <stdio.h>

int main() {
    int choice;
    int price = 0;
    int money, change;

    // แสดงเมนู
    printf("Menu\n");
    printf("1. winter\n");
    printf("2. summer\n");
    printf("3. spring\n");
    printf("4. rainy\n");

    // รับค่าตัวเลือกฤดูกาล
    printf("Enter Seasonal travel : ");
    scanf("%d", &choice);

    // ใช้ switch-case ในการกำหนดราคา
    switch(choice) {
        case 1:
            price = 20000; // กำหนดราคาตามฤดู
            break;
        case 2:
            price = 18000;
            break;
        case 3:
            price = 15000;
            break;
        case 4:
            price = 15000;
            break;
        default:
            printf("Invalid selection!\n");
            return 0; // จบโปรแกรมทันทีถ้าเลือกผิด
    }

    // แสดงราคาตั๋ว
    printf("ticket price is %d baht\n", price);

    // รับเงินจากผู้ใช้
    printf("Enter money : ");
    scanf("%d", &money);

    // คำนวณเงินทอน
    if (money >= price) {
        change = money - price;
        printf("Change: %d\n", change);
        printf("Have a good trip\n");
    } else {
        printf("Sorry, you don't have enough money.\n");
    }

    return 0;
}