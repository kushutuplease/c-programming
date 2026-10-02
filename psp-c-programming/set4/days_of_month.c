#include <stdio.h>
int main() {
    int n;
    printf("enter the number of month (1-12): ");
    scanf("%d", &n);

    if (n>0 && n<=12) {
        if (n==4||n==6||n==9||n==11) {
            printf("days = 30\n");
        }
        else if (n==2) {
            printf("days = 28 (29 if leap year)\n");
        }
        else {
            printf("days = 31\n");
        }
    }
    else {
        printf("please enter a number in the range 1 to 12 only.");
    }


    
    



    return 0;
}