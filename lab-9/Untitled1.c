
#include <stdio.h>

void main()
{
	float num,sum,no_row;
	int i,n;
	printf("Enter The Number :");
	scanf("%f",&num);
	printf("Enter The number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*num/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);
}
