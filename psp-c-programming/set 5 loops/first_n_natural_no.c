#include <stdio.h>
int main() {
    int i=1,n;
    printf("enter n for first n natural numbers: ");
    scanf("%d", &n);

    if (n>0) {
        while(i<=n) {
        printf("%d\n",i);
        i++;
    }
}
    else {
        printf("please enter a valid value for n.");
    }
    

    




    return 0;
}