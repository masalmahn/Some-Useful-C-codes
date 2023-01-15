#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,ten=0,twenty=0,fifty=0,hundred=0;
    printf("Please Enter The Amount Of Your Money: ");
    scanf("%d",&x);
    if (x % 10 == 0) {
        ten = x/10;
        twenty = x/20;
        fifty = x/50;
        hundred = x/100;
        printf("You Have %d of ten banknotes, %d of twenty banknotes, %d of fifty banknotes, %d of hundred banknotes",ten,twenty,fifty,hundred);
    } else {
        printf("please Write amount which multiples with 10");
    }



    return 0;
}
