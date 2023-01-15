#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char first[50], second[50];
    printf("Enter First String: ");
    gets(first);
    //scanf("%s",&first);
    printf("Enter Second String: ");
    gets(second);
    strcat(first,second);
    puts(first);
    //printf("%s",first);
}
