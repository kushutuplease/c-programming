#include <stdio.h>
int main() {
    int val;
    printf("please enter a number: ");
    scanf("%d", &val);
    if (val>0) {
        printf("the number is positive\n");
    } else if (val<0) {
        printf("the number is negative\n");
    } else {
        printf("the number is zero\n");
    }
}