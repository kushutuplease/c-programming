#include <stdio.h>
int main() {
    int og,n,res=0,rem=0;
    printf("enter the number you want to reverse: ");
    scanf("%d", &n);
    og=n;

    while(n!=0) {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }

    printf("the reverse of %d is %d", og,res);



    return 0;
}