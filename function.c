#include<stdio.h>
int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(){
    int a,b,c;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    c = sum(a,b);
    printf("%d\n",c);
    return 0;
}