/* Calculate sin of a number between 0 and 1 non inclusive
    Francesco Panico
    July, 14, 2021*/
#include<stdio.h>
#include<math.h>

int main(void){
    double x;
    printf("Enter a value between 0 and 1(non inclusive): ");
    scanf("%lf", &x);
    if(x >= 0 && x < 1){
        printf("Sin of entered value is: %lf\n", sin(x));
    } else {
        printf("Incorrect input value\n");
    }
    return 0;
}