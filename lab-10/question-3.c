#include <stdio.h>

const N = 5;

int main() {
    int num, digitsA[N], i, digit, temp, stop=0;

    printf("Please Enter Your Number: ");
    scanf("%d",&num);
    temp = num;
    while (temp > 0) {
        temp = temp / 10;
        i++;
        stop++;
    }
    if (i > N) {
        printf("\nYour Number's digits Are More Than 5\n");
    }   else {
            for (int j=0 ; j<N ; j++) {
                digit = num % 10;
                num = num / 10;
                digitsA[j] = digit;
            }
            for (int t=0; t<stop ; t++) {
                printf("Array's Elements are %d \n",digitsA[t]);
            }
    }
    return 0;
}
