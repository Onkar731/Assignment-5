/* WAP to print first N even natural numbers */

#include<stdio.h>
int main() {

    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    // Performing repetation upto n value entered by user
    // and printing N even natural numbers
    for(i = 1; i <= n; i++) {
        printf("%d ", i*2);
    }
    
    /*
        n *= 2;
        for(i = 2; i <= n; i+=2) {
            printf("%d ", i);
        }
    */
    return 0;
}