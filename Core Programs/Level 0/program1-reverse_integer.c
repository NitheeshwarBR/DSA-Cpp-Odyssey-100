//write a program to reverse an integer in C
#include<stdio.h>
int reverse_integer(int n)
{
    int reverse=0;
    while(n!=0)
    {
        int temp=n%10;
        reverse=reverse*10+temp;
        n/=10;
    }
    return reverse;
}
int main()
{
    int num1;
    printf("Enter a Number to be reversed : \t");
    scanf("%d",&num1);
    int result = reverse_integer(num1);
    printf("The reverse of %d is %d\n",num1, result);
    return 0;
    
}