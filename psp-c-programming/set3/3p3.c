//to print the last digit of a given number
#include <stdio.h>
int main() {
    int a,b;
    printf("enter a number : ");
    scanf("%d", &a);
    b=a%10;
    printf("the last digit is %d", b);
    return 0;
}