#include<stdio.h>
// for user input we will use printf and scanf functions
// this program will take two numbers as input and print their sum
int main() {
    int a,b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a, b, a+b);
    return 0;
}
// End of the program