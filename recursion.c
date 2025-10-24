#include <stdio.h>
int factorial(int Number)
{
    if (Number == 1 || Number == 0)
    {
        return 1;
    }
    else
    {
        return (Number * factorial(Number - 1));
    }
}
int main()
{
    int a;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &a);
    printf("The factorial of %d id %d\n", a, factorial(a));
    return 0;
}