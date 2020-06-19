/*
* c program to find the lcm of a number using recursion
*/
#include<stdio.h>

int lcm (int, int);   

int main()
{
    int a, b, result;
    int prime[100];
    
    printf ("input\n input first number: \n input second number:");
    scanf ("%d%d", &a, &b);
    result=lcm(a,b);
    printf ("LCM of %d and %d is %d\n",a,b,result);
    return 0;
}
  
int lcm(int a, int b)  
{
   static int common=1;

    if(common %a == 0 && common %b == 0)
{
    return common;
}
common ++;
lcm(a,b);
return common;
}
