#include <stdio.h>

#define N 10

void shifting(char a[],int i) {
    for(;a[i]!='\0';i++)
        a[i]=a[i+1];
}

void simplifying(char array[]) {
    int i=0;
    while(array[i]!='\0') {
        if(array[i] == array[i+1])
            shifting(array,i);
        else
            i++;

    }

}

int main() {
    // to find max
    int maxarr[N]={1,2,3,4,5,6,10,7,8,9};
    int max = maxarr[0];
    for(int i=0;i<N;i++)
        if(maxarr[i]> max)
            max=maxarr[i];

    printf("Max in array = %d",max);

    // compare two matris
    int simetriarr1[2][3]={
                            {1,2,3},
                            {1,2,3}
                            };
    int simetriarr2[2][3]={
                            {1,2,3},
                            {1,2,3}
                            };
    int simetri = 1;
    for (int i=0;i<2;i++)
        for (int j=0;j<3;j++) {
            if(simetriarr1[i][j] != simetriarr2[i][j]) {
                simetri=0;
                break;
            }
        }
    if(simetri == 1)
        printf("\nmatris simetriktir\n");
    else
        printf("\nmatris simetrik degildir\n");




    // reverse array
    int reverseArr[N]={1,2,3,4,5,6,7,8,9,10},
    temp=0;
    printf("\nYour Array's Elements: \n");
    for (int i = 0; i < N;i++) {
        printf("%5d", reverseArr[i]);
    }
    for (int i= 0, j= N-1 ; i<N/2 , j>=N/2 ; i++, j--) {
        temp = reverseArr[i];
        reverseArr[i] = reverseArr[j];
        reverseArr[j] = temp;
    }


    printf("\nYour Array's Reverse Elements: \n");
    for (int i = 0; i < N;i++) {
        printf("%5d", reverseArr[i]);
    }



    // string or normal array length
    int lenArr[N]={1,2,3,4,5,6,7,8,9,10};
    int len=0, k=0;
    while(lenArr[k]<N) {
        len++;
        k++;
    }
    printf("\n\n%d\n",len);

    char lenstr[N]="naser";
    int strlen=0, z=0;
    while(lenstr[z]!='\0') {
        strlen++;
        z++;
    }
    printf("\n\n%d\n",strlen);



    // string reverse
    char strreverse[40], gecici;
    int n;
    printf("\nBir seyler yazin : ");
    gets(strreverse);
    for(n=0; strreverse[n] != '\0'; n++);
    for(int i=0; i<n/2; i++){
        gecici = strreverse[n-i-1];
        strreverse[n-i-1] = strreverse[i];
        strreverse[i] = gecici;
    }
    printf("Tersi : %s\n",strreverse);


    // Power
    int result=1, x = 5,y=3;
    for(int i=0;i<y;i++)
        result *= x;

    printf("\n5 power 3 = %d\n",result);




    // digit
    int num, digitsA[N], s=0, digit, temp1, stop=0;

    printf("\nPlease Enter Your Number: ");
    scanf("%d",&num);
    temp1 = num;
    while (temp1 > 0) {
        temp1 = temp1 / 10;
        s++;
        stop++;
    }
    if (s > N) {
        printf("\nYour Number's digits Are More Than 5\n");
    }   else {
            for (int j=0 ; j<N ; j++) {
                digit = num % 10;
                num = num / 10;
                digitsA[j] = digit;
            }
            for (int t=0; t<stop ; t++) {
                printf("\nArray's Elements are %d",digitsA[t]);
            }
    }



    // Odd Or Even

    int a=101;
    if(a%2==0)
        printf("\n\nYour Number is Even\n");
    else
        printf("\nYour Number is Odd\n");




    // Shifting and simplifying in strings

    char simpArr[]="55522112211";
    int f=0;
    simplifying(simpArr);
    puts(simpArr);



    // Prime
    int number =26,prime=1;

    for (int i=2;i<number;i++) {
        if (number %i == 0) {
            prime =0;
            break;
        } else
            prime =1;
    }
    if (prime == 1)
        printf("Your Number Is Prime\n");
    else
        printf("Your Number Isn't Prime\n");


    return 0;
}
