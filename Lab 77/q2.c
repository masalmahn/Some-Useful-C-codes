#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, x=0;
    printf("Enter Your First Number: ");
    scanf("%d",&a);
    printf("Enter Your Second Number: ");
    scanf("%d",&b);
    x = b;
    b = a;
    a = x;
    printf("Your Numbers Are %d, %d", a,b);
    return 0;
}
