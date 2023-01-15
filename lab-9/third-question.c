#include <stdio.h>

int main() {
    int num,row=1,space=1;
    printf("Please Enter Column Number: ");
    scanf("%d",&num);

    for (row = 1; num >= row;row++) {
        for(space = 10;  space >= row; --space) {
            printf(" ");
        }
        int start = 65;
        for (int i = 1; i <= row; i++) {
            printf(" %c",start);
            start++;
        }
        start-=2;
        for (int j = 0; j <= row-2; j++) {
            if (start <= 74) {
                printf(" %c",start);
                start-=1;
                continue;
            }
        }

        printf("\n");
    }
    return 0;
}
