/* Circle and Area
    Francesco Panico
    June, 26, 2021
*/

#include<stdio.h>

#define PI 3.14159

int main(void){
    double area=0.0, radius=0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = radius * radius * PI;
    printf("radius of %lf meters; area is %lf sq. meters \n", radius, area);
    return 0;
}