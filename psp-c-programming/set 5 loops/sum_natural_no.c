#include <stdio.h>
int main() {
//n(n+1)/2
    int n,sum=0,i=1;
    printf("enter the number upto which the sum you want: ");
    scanf("%d", &n);

    while(i<=n) {
        sum+=i;
        i++;
    }
    printf("sum of %d natural no. is: %d", n,sum);



    return 0;
}