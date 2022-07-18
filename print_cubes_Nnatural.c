/* WAP to print cubes of first N natural numbers */

#include<stdio.h>
int main() {

    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    // Performing repetation upto n value entered by user
    // and printing cubes of N natural numbers
    for(i = 1; i <= n; i++) {
        printf("%d ", i*i*i);
    }

    return 0;
}