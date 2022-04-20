#include <stdio.h>
 
double add(double a, double b) {
    return a + b;
}
 
double sub (double a, double b) {
    return a - b;
}
 
double mul(double a, double b) {
    return a * b;
}
 
double div (double a, double b) {
    return a / b;
}
 
double zero(double a, double b) {
    return 0.0;
}
 
double calculator(double a, double b, char option) {
    double result = 0.0;
    double (*funct_ptr)(double, double);
    if (option == 'A')
        funct_ptr = add;
    else if (option == 'S')
        funct_ptr = sub;
    else if (option == 'M')
        funct_ptr = mul;
    else if (option == 'D')
        funct_ptr = div;
    else
        funct_ptr = zero;
    result = funct_ptr(a, b);
    return result;
}
 
int main() {
double i,j;
char k;
printf("Enter the 2 nos to perform operations");
scanf("%lf",&i);
scanf("%lf",&j);
printf("Enter the operation you want to perform A,S,M,D");
scanf(" %c",&k);

if(k=='A')
{
    printf("%lf\n", calculator(i, j, 'A'));
 }
  
if(k=='S')
{
    printf("%lf\n", calculator(i, j, 'S'));
 }

if(k=='M')
{
    printf("%lf\n", calculator(i, j, 'M'));
 }

if(k=='D')
{
    printf("%lf\n", calculator(i, j, 'D'));
 }

    return 0;
}