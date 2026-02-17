#include <stdio.h>
int main()
{
 int a, b, c, d, e, t;
 float p;
 printf("Student Marksheet\n");
 printf("*****************\n");
 printf("Enter your marks in Mathematics:");
 scanf("%d", &a);
 if (a<0 || a>100)
 {
  printf("Please Enter the marks between 0 to 100\n");
 }
 printf("Enter your marks in PPS:");
 scanf("%d", &b);
 if (b<0 || b>100)
 {
  printf("Please Enter the marks between 0 to 100\n");
 }
 printf("Enter your marks in BEE:");
 scanf("%d", &c);
 if (c<0 || c>100)
 {
  printf("Please Enter the marks between 0 to 100\n");
 }
 printf("Enter your marks in ETC:");
 scanf("%d", &d);
 if (d<0 || d>100)
 {
  printf("Please Enter the marks between 0 to 100\n");
 }
 printf("Enter your marks in FAI:");
 scanf("%d", &e);
 if (e<0 || e>100)
 {
  printf("Please Enter the marks between 0 to 100\n");
 }
 printf("***************************************\n");
 printf("The Total is %d out of 500\n", t=a+b+c+d+e );
 printf("The Percentage is %f\n",p=t*100/500);
 if (p>=90)
  {
   printf("Grade is A\n");
  }
  else if (p>=75)
  {
   printf("Grade is B\n");
  }
  else if (p>=60)
  {
   printf("Grade is C\n");
  }
  else if (p>35)
  {
   printf("Grade is D\n");
  }
  else if (p<35)
  {
   printf("You Failed this Semester Miserably\n");
  }
 printf("***************************************\n");
 return 0;
 }