/* converts miles and yards in kilometers
    improved version
    Francesco Panico
    June, 26, 2021
*/

#include <stdio.h>

#define MULTIPLIER 1.609
#define DIVIDER 1760.0

int main(void){
    int miles, yards;
    double kilometers;

    printf("Please enter miles and yards as Integers: ");
    scanf("%d%d", &miles, &yards);
    kilometers = MULTIPLIER * (miles + yards / DIVIDER);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}