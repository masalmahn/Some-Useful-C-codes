// 1 num from key if all digits are same this number is karabuk number

#include <stdio.h>

int main() {
    int num,digit1=0,digit2=0,i=0;
    printf("Please Enter The Number to check if it's Karabuk Number: ");
    scanf("%d",&num);
    digit1= num % 10;
    num = num / 10;
    while (num > i) {
        digit2 = num % 10;
        num = num / 10;
        if (digit1 == digit2) {
            continue;
        } else {
            printf("Your Number Isn't Karabuk Number");
            break;
        }

    }
    if (digit1 == digit2) {
        printf("Your Number Is Karabuk Number");
    }
    return 0;
}
