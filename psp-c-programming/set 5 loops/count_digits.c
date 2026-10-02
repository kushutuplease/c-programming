#include <stdio.h>
//counting the number of digits in a number
int main() {
    int og,n,count=1;
    printf("enter the number you want to count the digits of: ");
    scanf("%d", &n);
    og=n;
    //count=sizeof(n); ??
    while(n!=0) {
        if (n/10!=0){
            count+=1;
            n=n/10;
        }
        else {break;}
    }

    printf("the number of digits in %d is %d\n", og, count);



    return 0;
}