/* FAHRENHEIT TO CELSIUS
    Francesco Panico
    June, 26, 2021
*/
#include<stdio.h>

#define SUBTRACTOR 32
#define DIVIDER 1.8

int main(void){
    int fahrenheit, celsius;
    printf("Please enter fahrenheit as an integer:");
    scanf("%d",&fahrenheit);
    celsius = (fahrenheit - SUBTRACTOR)/DIVIDER;
    printf("\n %d fahrenheit is %d celsius\n", fahrenheit, celsius);
    return 0;
}
