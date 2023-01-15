#include <stdio.h>

int main() {

    int a=0 , j;
/*
    while (1) {
    printf("enter Number: ");
    scanf("%d",&a);
    if (a == -1) break;

    }*/

   /* do {
        printf("enter Number: ");
        scanf("%d",&a);
        if (a == -1) break;
    }   while (1)*/

    for ( ; ; ) {
        printf("enter Number: ");
        scanf("%d",&a);
        if (a == -1) continue;
        scanf("%d",&a);
    }




    /*
    for (int i =1;i <= 100; i += 1) {
        printf("%d  ", i);
    }

    int i;
    printf("enter Number: ");
    scanf("%d",&i);

    while (i <= s) {
        printf("%d  ", i);
        i++;
    }

    */


    /*if (i<0 ) {
        printf("below temp ");
        printf("hello");
    } else if (i == 0) {
        printf("zero");
    } else if (i > 0) {
            printf("above");
    } else  {printf("sign again");}
     */
   /* while(a < 15) {
        printf("%d \n",a);
        a++;
    }


    for (i = 8, j =2 ; i < 15 ; i+= 2, j*=2) {
        printf("%d %d\n",i,j);

    }*/
    return 0;
}
