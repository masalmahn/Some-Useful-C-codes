#include <stdio.h>

int main() {
   int array[5],i,rew=0,n,num,digit=0;
   printf("Enter Number: ");
   scanf("%d",&n);
   num=n;
   while(num>0) {
    digit++;
    num=num/10;
   }
   if(digit<=5) {
    while(n>0) {
        for(i=0;i<digit;i++ ) {
            rew=n%10;
            array[i]=rew;
            n=n/10;
        }
    }
    for(i=0;i<digit;i++) {
        printf("%d",array[i]);
    }
   }
   else
        printf("Wrong Entry!");

    return 0;
}
