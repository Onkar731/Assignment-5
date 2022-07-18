/* WAP to print a table of N */

#include<stdio.h>
int main() {

    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    // printing table of value entered by the user
    for(i = 1; i <= 10; i++) {
        printf("%d\n", i*n);
    }

    return 0;
}