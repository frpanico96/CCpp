/*Fundamental Types sizeof operator
    Francesco Panico
    July, 13, 2021*/

#include<stdio.h>

int main(void){
    printf("on my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes. \n", sizeof(char)); //Char is one byte because it represents ASCII table
    printf("float is %lu bytes. \n", sizeof(float));
    printf("double is %lu bytes. \n", sizeof(double));
    printf("long double is %lu bytes. \n", sizeof(long double));
}
