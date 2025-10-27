#include<stdio.h>
int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int a[3];
    printf("Enter your first number: ");
    scanf("%d", &a[1]);
    printf("Enter your second number: ");
    scanf("%d", &a[2]);
    a[3] = sum(a[1],a[2]);
    printf("The sum of %d and %d is %d",a[1], a[2], a[3]);
    return 0;
}