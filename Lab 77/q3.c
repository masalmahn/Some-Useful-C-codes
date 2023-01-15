#include <stdio.h>
#include <stdint.h>

int main() {
    int no, first, last, result=0;
    printf("Enter The Students Number: ");
    scanf("%d",&no);
    printf("Enter The Vize Result: ");
    scanf("%d",&first);
    printf("Enter The Final Result: ");
    scanf("%d",&last);
    first = first * 0.4;
    last = last * 0.6;
    result = first + last;
    printf("Student Number %d and the result is %d", no, result);
}
