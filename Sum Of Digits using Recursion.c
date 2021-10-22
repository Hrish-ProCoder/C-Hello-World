#include<stdio.h>
int sum (int num);
int main()
{
    int num,result;
    printf("Enter The Number : ");
    scanf("%d",&num);
    result=sum(num);
    printf("Sum of Digits of %d is %d \n",num,result);
    return 0;
}
int sum(int num)
{
    if(num!=0)
    {
        return(num%10+sum(num/10));
    }
    else
    {
        return 0;
    }
}
