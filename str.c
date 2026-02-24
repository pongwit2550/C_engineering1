#include <stdio.h>
#include <string.h> 

int main(void) {   
    char pass[9];
    int is_correct = 0; 

    printf("Enter New Pass: ");
    scanf("%8s", pass); 

    
    if (strcmp(pass, "aabbccd") == 0) {
        printf("Pass corrected!\n");
        is_correct = 1;
    } else {
        printf("Incorrect! You have 3 attempts.\n");
        
        
        for (int i = 1; i <= 3; i++) {
            printf("Attempt %d - Enter Pass: ", i);
            scanf("%8s", pass);
            
            if (strcmp(pass, "aabbccd") == 0) {
                printf("Pass corrected!\n");
                is_correct = 1;
                i = 0;
            }
        }
    }
    
    if (!is_correct) {
        printf("Access Denied.\n");
    }

    printf("close program......");

    return 0;
}
