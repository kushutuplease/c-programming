#include <stdio.h>
int main() {

// bitwise and or left shit and right shift

int a,b,res;
a=5;
b=2;

/*
res = a&b;
printf("5&2 is: %d\n", res);
res = a|b;
printf("5|2 is: %d\n", res);
res = a<<b;
printf("5<<2 is: %d\n", res);
res = a>>b;
printf("5>>2 is: %d\n", res);
*/

// left shift works by sending x amounts of digit to the left and then adding zero to the spots left empty after the jump
// 0101 ls by 2 means send the last 2 digits 01 as it is before 0 making it 0 1 0 1 _ _ then add two 0's
res= ~a;
printf("~5 is: %d\n", res);

// 5 = 00000101

/*~5 = 11111010 --> this is the result. but we have to store and display this and now is when the process of 
representing a signed number using 2's compliment starts and hence why we reverse this again to find 1's compliment
first and dont consider the first ~5 to be a step in this process, thats just the true result */

// 1's compliment of result is 00000101 
// 2's compliment is 00000110 which is 6 but we write -6 for negative number.

// why 8 bit when int is 32 bits?

/* second explanation - unnecessary
after complimenting 5 we find out that the first digit of the 8 bit representation is 1. 
this means its a negative number. now to store a negative number we use 2's compliment. 
for 2's compliment we find 1's compliment by reversing each digit (gives us back the same 5 we started with)
and then we add 1 to this making it 2's compliment. what's also important is to remember that since 
we are representing a negative number that we found out using 1 and 0 on first bits place 
the number wont just be 6 rather itll be -6 
*/

return 0;
}