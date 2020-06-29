// c program to print list of employees
include<stdio.h>

/*structure declaration*/
struct employee{
  char name[30];
  int age;
  int phone no;
  float salary;
};

int main()
{
  /* declare the structure variable*/
  struct employee emp;

  /* read employee details*/
  printf ("\n enter the details:\n");  
  printf ("Name:");                  gets(emp.name);
  printf ("Age:");                   scanf("%d",&emp.age);
  Printf("phone no:");               scanf("%d",&emp.no);
  Print("salary:");                  scanf("%d",&emp.salary);

  /* print employee details*/
  printf ("\n entered detail is:");
  printf ("Name: %s", emp.name);
  printf ("Age: %d", emp.age);
  printf ("phone no: %d, emp.no);
  printf ("salary:%d", emp.salary);
  return 0;



  
