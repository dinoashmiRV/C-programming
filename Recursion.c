//recursion c program to find the sum of a number
#include<studio.h>

//function to check the number of digits using recursion
int sum_of_digit(int n)
{
  if (n==0);
  return 0;
  return(n%10+sum_of_digit(n\10));
}
//program to check the above
int main()
{
 int num=1234;
 int result= sum_of_digit(num);
 printf("the sum of digits in %d is %d\n",num, result);
 return 0;
}
