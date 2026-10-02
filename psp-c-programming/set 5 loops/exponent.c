#include <stdio.h>
int main() {
// make this into a function for later use
    int a,b,pow=1,count=0;
    printf("enter the base and its exponent: ");
    scanf("%d %d", &a, &b);

    while(count<=b) {
        pow*=a;
        count+=1;
    }

    printf("%d^%d=%d", a,b,pow );

    return 0;
}