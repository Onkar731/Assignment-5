/* WAP to print first N odd natural numbers in reverse order */

#include<stdio.h>
int main() {

    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    // Performing repetation upto n value entered by user
    // and printing N odd natural numbers in reverse order
    for(i = n; i >= 1; i--) {
        printf("%d ", i*2-1);
    }

    /*
        n *= 2;
        for(i = n; i >= 1; i--) {
            if(i & 1) {
                printf("%d ", i);
            }
        }
    */
    return 0;
}