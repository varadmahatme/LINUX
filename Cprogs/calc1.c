#include <stdio.h>
 
int add(double a, double b) {
    return a + b;
}
 

 
int zero(double a, double b) {
    return 0.0;
}
 
int calculator(int a, int b, char option) {
    int result = 0.0;
    int (*funct_ptr)(int, int);
    if (option == 'A')
        funct_ptr = add;
    
        funct_ptr = zero;
    result = funct_ptr(a, b);
    return result;
}
 
int main() {
    printf("%lf\n", calculator(10, 5, 'A'));
    
    return 0;
}
