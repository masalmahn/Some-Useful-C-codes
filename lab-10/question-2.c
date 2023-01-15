#include <stdio.h>

const N=10;

int main() {
    int i=0, dizi[N], num=0, stop=0;


    while(num != -1 && i < N ) {
        printf("please Enter Number: ");
        scanf("%d",&num);
        dizi[i] = num;
        i++;
        stop++;
    }
    for (i=0 ; i<stop ; i++) {
        printf("Your Array's number's square is %d \n" ,dizi[i]*dizi[i]);
    }

    return 0;
}
