/* Fundamental Types Declaration and Assignment
    Francesco Panico
    July, 13, 2021*/

#include <stdio.h>

int main(void){
    int a = 5, b = 7, c = 6; /*declare and initialize*/
    double average = 0.0;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    average = (a + b + c)/3.0; /*conversion to int if 3*/
    printf("average = %lf\n", average);
    return 0;
}