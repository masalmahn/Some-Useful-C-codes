#include <stdio.h>

int main() {
    int firstNum;
    int secondNum;
    printf("Enter First Number :");
    scanf("%d",&firstNum);
    printf("Enter Second Number :");
    scanf("%d",&secondNum);
    int sum = firstNum + secondNum;
    printf("Your Sum is: %d",sum);
    return 0;
}
