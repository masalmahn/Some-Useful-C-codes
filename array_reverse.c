#include <stdio.h>

const N = 10;

int main() {
    int i ,j,temp = 0, num;
    int arr[N] ;

    for (i = 0; i < N;i++) {
        printf("Enter Array's Element [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (i= 0, j= N-1 ; i<N/2 , j>=N/2 ; i++, j--) {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Your Array's Reverse Elements: \n");
    for (i = 0; i < N;i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
