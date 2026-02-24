#include <stdio.h>
#include <string.h> // จำเป็นต้องใช้สำหรับ strcmp

int main(void) {   
    char pass[9];
    int is_correct = 0; // ใช้ 0 แทน false, 1 แทน true

    printf("Enter New Pass: ");
    scanf("%8s", pass); // ป้องกัน Buffer Overflow โดยรับไม่เกิน 8 ตัว

    // ใช้ strcmp เทียบข้อความ (คืนค่า 0 แปลว่าเหมือนกัน)
    if (strcmp(pass, "aabbccd") == 0) {
        printf("Pass corrected!\n");
        is_correct = 1;
    } else {
        printf("Incorrect! You have 3 attempts.\n");
        
        // วนลูปให้โอกาสกรอกใหม่ 3 ครั้ง
        for (int i = 1; i <= 3; i++) {
            printf("Attempt %d - Enter Pass: ", i);
            scanf("%8s", pass);
            
            if (strcmp(pass, "aabbccd") == 0) {
                printf("Pass corrected!\n");
                is_correct = 1;
                break; // ออกจาก loop เมื่อถูก
            }
        }
    }

    if (!is_correct) {
        printf("Access Denied.\n");
    }

    return 0;
}
