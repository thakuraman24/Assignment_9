/*
Q1. Write a program which takes the month number as an input and display
number of days in that month.

#include <stdio.h>

int main() {
    printf("Enter the no of month whose no days you want to know\n");
    int mon;
    scanf("%d",&mon);

    switch(mon)
    {
        case 1:
            printf("this month has 31 days\n");
            break;
        case 2:
            printf("this month has 28/29 days\n");
            break;
        case 3:
            printf("this month has 31 days\n");
            break;
        case 4:
            printf("this month has 30 days\n");
            break;
        case 5:
            printf("this month has 31 days\n");
            break;
        case 6:
            printf("this month has 30 days\n");
            break;
        case 7:
            printf("this month has 31 days\n");
            break;
        case 8:
            printf("this month has 31 days\n");
            break;
        case 9:
            printf("this month has 30 days\n");
            break;
        case 10:
            printf("this month has 31 days\n");
            break;
        case 11:
            printf("this month has 30 days\n");
            break;
        case 12:
            printf("this month has 31 days\n");
            break;
        default:
            printf("There is no month with %d",mon);
    }
    return 0;
}


Q2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit


#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a,b,res;
    int choice;
    for (int i = 1; i!=0; ++i)
    {
            printf("\nChoose from the following :  \n 1 for Addition\n 2 for Subtraction\n 3 for Multiplicatin \n 4 for division\n 5 Exit \n  ");
            scanf("%d",&choice);

            switch (choice)
            {
                case 1:
                    printf("Enter first operand\n");
                    scanf("%f",&a);
                    printf("Enter Second operand\n");
                    scanf("%f",&b);
                    printf("Sum of %f and %f is %f",a,b,a+b);
                    break ;
                case 2:
                    printf("Enter first operand\n");
                    scanf("%f",&a);
                    printf("Enter Second operand\n");
                    scanf("%f",&b);
                    printf("the result after Subtracting %f from %f is %f",a,b,b-a);
                    break ;
                case 3:
                    printf("Enter first operand\n");
                    scanf("%f",&a);
                    printf("Enter Second operand\n");
                    scanf("%f",&b);
                    printf("Multiplication of %f and %f is %f",a,b,a*b);
                    break ;
                case 4:
                    printf("Enter first operand\n");
                    scanf("%f",&a);
                    printf("Enter Second operand\n");
                    scanf("%f",&b);
                    printf("the result after Dividing %f by %f is %f",a,b,a/b);
                    break ;
                case 5:
                    i=-1;
                default:
                    printf("!!!! Your choice is'nt valid!!!!");

            }

    }

    return 0;
}



Q3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.

#include<stdio.h>

int main()
{
  printf("Enter the day no \n");
  int n;
  scanf("%d",&n);
  switch(n)
  {

  case 1:
    printf("Today is Monday");
    break;
  case 2:
    printf("Today is Tuesday");
    break;
  case 3:
    printf("Today is Wednesday");
    break;
  case 4:
    printf("Today is Thursday");
    break;
  case 5:
    printf("Today is Friday");
    break;
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("There is No day related to the no you entered");
  }
  return 0;

}



Q4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit

#include<stdio.h>

int main()
{
  int s1,s2,s3,x;

  printf("Enter length of side1\n");
  scanf("%d",&s1);
  printf("Enter length of side2\n");
  scanf("%d",&s2);
  printf("Enter length of side3\n");
  scanf("%d",&s3);

  if(s1==s2 || s2==s3 || s3==s1)
    x=1;
  if(s1==s2==s3)
    x=2;
  if(s1*s1 + s2*s2 == s3*s3 || s3*s3 + s2*s2 == s1*s1 || s1*s1 + s3*s3 == s2*s2)
    x=3;


  switch(x)
  {
  case 1:
    printf("Isosceles triangle");
    break;
  case 2:
    printf("Equilateral triangle");
    break;
  case 3:
    printf("Right angle triangle");

  }

  return 0;
}


Q5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");

#include<stdio.h>

int main()
{
  printf("Enter your rank\n");
  int rank;
  scanf("%d",&rank);

  switch(rank)
  {
  case 1:
    printf("Best");
    break;
  case 2:
    printf("Better");
    break;
  case 3:
    printf("Good");
    break;
  default:
    printf("invalid");

  }

  return 0;
}
Q6. Program to check whether a year is a leap year or not. Using switch
statement

#include<stdio.h>
int main()
{
  printf("Enter the year\n");
  int year, choice;
  scanf("%d",&year);


  if(year%4==0)
  {
    if(year%100==0)
    {
      if(year%400==0)
        choice=1;
      else
        choice=0;
    }

    else
      choice=1;
  }
  else
    choice=0;



  switch(choice)
  {
  case 1:
    printf("Leap year");
    break;
  case 0:
    printf("NOT aleap year");

  }

  return 0;
}

Q7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

#include<stdio.h>

int main() {
  printf("Enter your Electricity cunsumption units\n");
  int units;
  float bill;
  scanf("%d", &units);
  switch (units) {

  case 0 ... 50:
    printf("Your electricity Bill is Rs %f", 0.50 * units);
    break ;
  case 51 ... 150:
    printf("Your electricity Bill is Rs %f", 25 + (0.75*(units-50)));
    break ;
  case 151 ... 250:
    printf("Your electricity Bill is Rs %f", 100 + (1.20*(units-150)));
    break ;
  default:
    bill= 220 + (1.50*(units-250));
    bill=bill+0.2*bill;
    printf("Your electricity Bill is Rs %f", bill);

  }
}

Q8. Program to convert a positive number into a negative number and
  negative number into a positive number using a switch statement.

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);

    switch (a>0)
    {
    case 1:
    printf("%d",-a);
    break;
    case 0:
    printf("%d",-a);
    }

    return 0;
  }
Q9. Program to Convert even number into its upper nearest odd number
  Switch Statement.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
      b=1;
    else
      b=2;
    switch (b)
    {
    case 1:
      printf("%d",a+1);
      break;
    case 2:
      printf("%d",a+1);
    }

    return 0;
  }
Q10. C program to find all roots of a quadratic equation using switch case.

#include<stdio.h>
int main()
  {
    int a,b,c,D;
    printf("for aX2 + bX +c = 0");
    printf("Enter a");
    printf("Enter b");
    printf("Enter c");
    D=(b*b)-(4*a*c);
  if(D==0)
      a=1;
  if(D>0)
      a=2;
  if(D<0)
      a=3;

    switch(a)
    {
    case 1:
      printf()
    }
}

*/





