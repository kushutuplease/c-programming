#include <stdio.h>
int main() {
/* 1. printing ascii value of chars using %d- will it give a data type error or will it print the ascii value?
    char ch = 'a';
    printf("ascii value of a is %d\n",ch);
*/


/* 2. to use operations on chars
    ch+=1;
    printf("ascii value of a+1 is %d and the character a changes to %c",ch, ch);

*/

/* to make a program that makes ascii table */

    char ch='A';
    while (ch<='z') {
        printf("%c \t %d\n", ch, ch);
        ch+=1;
    }

    return 0;

// you can use this to do questions like check vowels to make sure entered character is always just alphabets using the ascii value system
}

/* 
ASCII TABLE: 

A - 65 .... Z -  90

[        91
\        92
]        93
^        94
_        95
`        96

a - 97 .... z - 122

*/