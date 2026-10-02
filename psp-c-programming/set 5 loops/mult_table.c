#include <stdio.h>
int main() {
//n(n+1)/2
    int n,i=1;
    printf("enter the number of whose multiplication table you want: ");
    scanf("%d", &n);

    while(i<=10) {
        printf("%d x %d = %d\n", n,i,n*i);
        i++;
    }



    return 0;
}