#include <stdio.h>
int main(){

    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a,&b);

    int choice = 0;
    printf("Pick a number from the menu\n");
    printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("%d+%d = %d", a,b,a+b);
            break;
        case 2:
            printf("%d-%d = %d", a,b,a-b);
            break;
        case 3:
            printf("%d*%d = %d", a,b,a*b);
            break;
        case 4:
            printf("%d/%d = %d", a,b,a/b);
            break;
        case 5:
            printf("%d(mod)%d = %d", a,b,a%b);
            break;
    }
}