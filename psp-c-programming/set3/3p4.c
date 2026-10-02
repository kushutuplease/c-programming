//printing the first digit of a 3 digit number- try for n digits
#include <stdio.h>
int main() {
    int a,b;
    printf("enter a 3 digit number : ");
    scanf("%d", &a);
    
    if (a>=100 && a<=999) {
        b=a/100;
        printf("the first digit is %d", b);
    }

    else {
        printf("please enter a 3 digit number");
    }
    
    
    return 0;
}