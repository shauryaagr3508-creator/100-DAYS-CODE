/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main(){

    float pi=3.14, r1=7 ,r2=3;
    printf("Area=%f, Circumference=%f\n", pi*r1*r1, 2*pi*r1);
    printf("Area=%f, Circumference=%f\n", pi*r2*r2, 2*pi*r2);
return 0;
}