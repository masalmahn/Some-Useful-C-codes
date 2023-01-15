#include <stdio.h>

int main() {
    char remstr[50], temp[50];
    int i=0, h=0;
    printf("Enter a String: ");
    gets(remstr);
    while (remstr[i] != '\0') {
        for (char j=97; j <= 122; j++) {
           if (remstr[i] == j) {
                temp[h] = j;
                h++;
           }
        }
        i++;
    }
    for (int k = 0; k<18; k++)
        printf("%c",temp[k]);
}
