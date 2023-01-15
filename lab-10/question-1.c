#include <stdio.h>

const N=8;

int main() {
    float avarageA[N], result;
    int i;

    printf("Please Enter Your Arrays Numbers: ");
    for (i=0 ; i<N ; i++) {
        scanf("%f",&avarageA[i]);
        result += avarageA[i];
    }
    result = result / N;
    printf("%f",result);

    return 0;
}
