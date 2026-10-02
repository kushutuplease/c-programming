#include <stdio.h>
int main() {
    int og,n,i=1;
    printf("enter the number that you want to get the factors of: ");
    scanf("%d", &n);
    og=n;

    printf("factors of %d: \n", og);
    while(i<=n) {
        if (n%i==0) {
            printf("%d\n",i);
            i++;
        }
        else {
            i++;
        }
    }


    return 0;
}