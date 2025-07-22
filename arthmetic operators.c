#include<stdio.h>
int main(){
int a,b;
int sum,difference,product,division;
printf("Enter the two numbers");
scanf("%d,%d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
division=a/b;
printf("Sum:%d\n",sum);
printf("Difference:%d\n",difference);
printf("Multiplication:%d\n",product);
printf("Division:%d\n",division);
return 0;
}

