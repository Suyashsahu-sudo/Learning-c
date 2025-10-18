#include<stdio.h>
/*   In this code we will take a input from a user and run a "for" loop for that tast,
     the tast is that we will give user the multipliction table of that certain integer.
 */
// Beginning of the code
int main(){
    //assigning "a" as a integer
    int a;
    // take input from the user
    printf("Enter the number you want the table of: ");
    scanf("%d", &a);
    printf("The table of %d is,\n", a);
    //Then run a for loop 
    /* In this loop, you can see I take "i" to assign the certain range, you can take any alphabet to do it. */
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
    return 0;
    //End of the code
}
//Guide for beginner
//If you are not able to understand the loop copy the code and try to run it on your own machine 