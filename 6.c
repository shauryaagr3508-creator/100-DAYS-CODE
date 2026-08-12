/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/




#include<stdio.h>
int main() {

printf("Enter two numbers: ");
    int a, b, c , d, e, f;
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;
    printf("After swap: %d %d\n", a, b);
    scanf("%d %d", &d, &e);
    f = d;
    d = e;
    e = f;

    printf("After swap: %d %d\n", d, e);
     return 0;


}