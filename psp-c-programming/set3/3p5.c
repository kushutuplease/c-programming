//to reverse a number
#include <stdio.h>
int main() {
    int res=0,rem=0,n;
    printf("enter a number : ");
    scanf("%d", &n);
    while (n!=0) {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }

    printf("the reverse of the number is %d", res);



    return 0;
}