/* WAP to print first N natural numbers */

#include<stdio.h>
int main() {

    int n,i;

    printf("Enter a number : ");
    scanf("%d", &n);

    // Performing repetation upto n value entered by user and printing natural no.
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}