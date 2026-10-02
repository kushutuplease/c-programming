#include <stdio.h>
int main() {
//n(n+1)/2 
    int n,sum=0,i=1;
    printf("enter the number upto which the sum of odd and even numbers you want: ");
    scanf("%d", &n);

    i=1;
    while(i<=n) {
        sum+=i;
        i+=2;
    }
    printf("sum of odd no. upto %d is: %d\n", n,sum);

    sum=0;
    i=2;
    while(i<=n) {
        sum+=i;
        i+=2;
    }
    printf("sum of even no. upto %d is: %d\n", n,sum);




    return 0;
}