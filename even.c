#include<stdio.h>
int main(){
int n,count,sum;
printf("Enter the n value :");
scanf("%d",&n);
count=n/2;
sum=n/2*((n/2)+1);

printf("No.of even is %d\n ",count);
printf("Sum of numbers: %d\n",sum);
return 0;
}
