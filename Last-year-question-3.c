#include <stdio.h>

int strlenght(char x[]) {
    int k=0;
    while (x[k]!= '\0')
        k = k+1;
    return k;
}

void strreverse(char str[]) {
    int k = strlenght(str);
    int temp =0;
    for (int i=0 , j = k-1 ; i<k/2 , j >= k/2 ; i++ , j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
}

int main() {
    char arr[10] = "handan";
    strreverse(arr);
    printf("%-10d",strlenght(arr));
}

