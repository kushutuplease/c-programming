#include <stdio.h>
int main() {
    //i=1,n=5
    int n,i,fac=1;
    printf("enter the number whose factorial you want: ");
    scanf("%d", &n);
    i=n;
    while(i!=0) {
        fac*=i;
        i-=1;

    }
    printf("the factorial of %d is %d", n, fac);





    return 0;
}