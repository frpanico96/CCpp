/* converts miles and yards in kilometers
    Francesco Panico
    June, 26, 2021
*/

#include <stdio.h>

#define MULTIPLIER 1.609
#define DIVIDER 1760.0


int main(void){
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = MULTIPLIER * (miles + yards / DIVIDER);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}