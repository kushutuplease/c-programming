#include <stdio.h>
int main() {
    int og,n,res=0,rem=0;
    printf("enter the number to check whether entered no. is a palindrome: ");
    scanf("%d", &n);
    og=n;


    while(n!=0) {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    
    if (og==res) {
        printf("the number you entered is a palindrome.\n");
    }
    else {
        printf("entered no. is not a palindrome.\n");
    }
    



    return 0;
}