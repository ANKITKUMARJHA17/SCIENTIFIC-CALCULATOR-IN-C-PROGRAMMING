#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
#define PI 3.141592654
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void cuberoot();
void logBase_e();
void logBase_10();
void eToThePower_x();
void absolute_value();
void npr();
void ncr();
void sine();
void cosine();
void tangent();
void cosec();
void secant();
void cot();
void sineInverse();
void cosineInverse();
void tangentInverse();
void cosecInverse();
void secantInverse();
void cotInverse();
void addmatrix();
void subtractmatrix();
void multiplicationmatrix();

int main(){
while(1)
{
    printf("\n");
    printf("\n");
    //printf("\t \t \t \t \t \t \t \t ");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Welcome to the scientific calculator!!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("\n");
    int choice;
    int choice1;
    int choice2;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("\n");
    printf("<<<<<<   DO NOT ENTER ANY NUMBER GREATER THAN 19    >>>>>>>");
    printf("Enter 1 for Addition");
    printf("\n");
    printf("Enter 2 for Subtraction");
    printf("\n");
    printf("Enter 3 for Multiplication ");
    printf("\n");
    printf("Enter 4 for Division ");
    printf("\n");
    printf("Enter 5 for Remainder");
    printf("\n");
    printf("Enter 6 for Factorial   ");
    printf("\n");
    printf("Enter 7 for power");
    printf("\n");
    printf("Enter 8  for Square ");
    printf("\n");
    printf("Enter 9  for Cube ");
    printf("\n");
    printf("Enter 10 for Squareroot");
    printf("\n");
    printf("Enter 11 for Cuberoot");
    printf("\n");
    printf("Enter 12 for logbase e");
    printf("\n");
    printf("Enter 13 for logbase 10");
    printf("\n");
    printf("Enter 14 for e^x");
    printf("\n");
    printf("Enter 15 for Absolute Value");
    printf("\n");
    printf("Enter 16 for Permutation");
    printf("\n");
    printf("Enter 17 for Combinations");
    printf("\n");
    printf("Enter 18 for Matrix");
    printf("\n");
    printf("Enter 19 for Trigonometric Function ");
    printf("\n");
    printf("Enter 0 for exit");
    printf("\n");
    printf("Enter the operation you want to do: ");
    scanf("%d",&choice);
    if(choice==19)
        {
        printf("\n");
         printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Trigonometric functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
   printf("\n");
        printf("Enter 1 for Sin");
        printf("\n");
        printf("Enter 2 for Cos");
        printf("\n");
        printf("Enter 3 for Tan");
        printf("\n");
        printf("Enter 4 for Cosec");
        printf("\n");
        printf("Enter 5 for Sec");
        printf("\n");
        printf("Enter 6 for Cot");
        printf("\n");
        printf("Enter 7 for Sin Inverse");
        printf("\n");
        printf("Enter 8 for Cos Inverse");
        printf("\n");
        printf("Enter 9 for Tan Inverse");
        printf("\n");
        printf("Enter 10 for Cosec Inverse");
        printf("\n");
        printf("Enter 11 for Sec Inverse");
        printf("\n");
        printf("Enter 12 for Cot Inverse");
        printf("\n");

        printf("Enter the operation you want to do: ");
        scanf("%d",&choice1);
    }
    if(choice==18)
        {
        printf("\n");
        printf("\t");
        printf("Welcome To find Matrix Portion ");
        printf("\n");
        printf("\n");
        printf("Enter 1 for addition");
        printf("\n");
        printf("\n");
        printf("Enter 2 for Subtraction");
        printf("\n");
        printf("\n");
        printf("Enter 3 for Multiplication");
        printf("\n");
        printf("\n");
        printf("Enter the operation you want to do: ");
        scanf("%d",&choice2);
    }
    

    exit(0);

    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    factorial();
                    break;
                case 7:
                    power();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                   squareroot();
                   break;
                case 11:
                   cuberoot();
                   break;
                case 12:
                   logBase_e();
                   break;
                case 13:
                   logBase_10();
                   break;
                case 14:
                    eToThePower_x();
                    break;
                case 15:
                    absolute_value();
                    break;
                case 16:
                    npr();
                    break;
                case 17:
                    ncr();
                    break;
               case 0:
               exit(1);

    return 0;
}
switch(choice1){
    case 1:
       sine();
       break;
    case 2:
       cosine();
       break;
    case 3:
       tangent();
        break;
    case 4:
       cosec();
        break;
    case 5:
       secant();
        break;
    case 6:
       cot();
        break;
    case 7:
       sineInverse();
        break;
    case 8:
       cosineInverse();
        break;
    case 9:
       tangentInverse();
        break;
    case 10:
       cosecInverse();
       break;
    case 11:
       secantInverse();
       break;
    case 12:
       cotInverse();
       break;
}
switch(choice2){
    case 1:
       addmatrix();
       break;
    case 2:
       subtractmatrix();
       break;
    case 3:
       multiplicationmatrix();
       break;

}

}
getch();
} // end of while
// Function to add number
void addition()
{

    printf("\n");
    int a;
    int b;
    int c;
    //clrscr();
    printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Additon !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("\n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("\n");
    c=a+b;
    printf("Sum of %d and %d is %d",a,b,c);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to subtract number
void subtraction()
{
    printf("\n");
    int a;
    int b;
    int c;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Subtraction !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("\n");
    c=a-b;
    printf("Subtraction of %d and %d is %d",a,b,c);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
//  Function to multiply numbers
void multiplication()
{
    printf("\n");
    int a;
    int b;
    int c;
    printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Multiplication !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("\n");
    c=a*b;
    printf("The multiply of %d and %d is %d",a,b,c);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to divide number
void division()
{
    printf("\n");
    int a;
    int b;
    float c;
    printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Division !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("\n");
    c=a/b;
    if(b==0)
    {
        printf("Math Error ");
    }
    else
    {
    printf("Division of %d and %d is %f",a,b,c);
    }
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find remainder
void modulus()
{
    printf("\n");
    int a;
    int b;
    int c;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Modulus !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter 1st number : ");
    scanf("%d",&b);
    printf("\n");
    c=a%b;
    printf("The multiply of %d and %d is %d",a,b,c);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find factorial
void factorial()
{
    int a;
    int product;
    product =1;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Factorial !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the number to find the factorial: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
    product =product*i;
    }
    printf("\n");
    printf("The factorial of %d is %d ",a,product);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the power
void power()
{
    double b;
    double p;
    double e;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Exponents !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the base : ");
    scanf("%lf",&b);
    printf("\n");
    fflush(stdin);
    printf("Enter the power : ");
    scanf("%lf",&p);
    e=pow(b,p);
    printf("\n");
    printf("The power is %lf",e);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the Square
void square()
{
    double b;
    double p;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Square !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    p=pow(b,2);
    printf("\n");
    printf("The square of %f is %lf",b,p);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the Cube
void cube()
{
    float b;
    float p;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cubes !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the number you want the cube of: ");
    scanf("%f",&b);
    p=pow(b,3);
    printf("\n");
    printf("The cube of %f is %f",b,p);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the Square root
void squareroot()
{
    double b;
    double s;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Square roots !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("\n");
    printf("The square root of %lf is %lf",b,s);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the Cube root
void cuberoot()
{
    double b;
    double c;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cuberoot !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter the number you want the cube root of : ");
    scanf("%lf",&b);
    c = cbrt(b);
    printf("\n");
    printf("The cube root of %lf is %lf",b,c);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to calculate log (base e)
void logBase_e()
{
    double a;
    double b;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Logarithms(logBase_e) !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    b = log(a);
    printf("\n");
    printf("Log Base 'e' to %lf = %lf",a, b);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
    }
// Function to calculate log (base 10)
void logBase_10()
{
    double a;
    double b;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Logarithms(logBase_10) !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error");
    printf("\n");
    }
    else
    {
    b = log10(a);
    printf("\n");
    printf("Log Base 10 to %lf = %lf",a, b);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to calculate e^x
void eToThePower_x()
{
    double a;
    double b;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform eToThePower_x !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter a number: ");
    scanf("%lf", &a);
    b = exp(a);
    printf("\n");
    printf("e to the power %f = %lf",a, b);
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to find the Absolute Value of a Number
void absolute_value()
{
    int a;
    int b;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Absolute value of number !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter the number to find its absolute value : ");
    scanf("%d",&a);
    printf("\n");
    b= abs(a);
    printf("Absolute value of %d is %d", a,b);
    printf("\n");
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to calculate Permutations (nPr)
void npr()
{
    int n;
    int r;
    int c;
    int product;
    int product1;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Permutations !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter R: ");
    scanf("%d",&r);
    product =1;
    product1=1;
     for(int i=1;i<=n;i++)
    {
    product =product*i;
    }
     for(int i=1;i<=n-r;i++)
    {
    product1 =product1*i;
    }
    if(n>=r && n>0 && r>=0)
    {
    c= product / product1;
    printf("\n");
    printf("%dP%d = %d",n,r, c);
    printf("\n");
    printf("\n");
    }
    else
    {
    printf("Math Error\n");
    printf("\n");
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to calculate Combinations (nCr)
void ncr()
{
    int n;
    int r;
    int c;
    int product;
    int product1;
    int product2;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Combinations !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    product=1;
    product1=1;
    product2=1;
    printf("\n");
    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter R: ");
    scanf("%d",&r);
     for(int i=1;i<=n;i++)
    {
    product =product*i;
    }
     for(int i=1;i<=n-r;i++)
    {
    product1 =product1*i;
    }
    for(int i=1;i<=r;i++)
    {
        product2 =product2*i;
    }
    if(n>=r && n>0 && r>=0)
    {
    c =(product / (product2* product1));
    printf("\n");
    printf("%dC%d = %d",n,r,c);
    printf("\n");
    printf("\n");
    }
    else
    {
    printf("\n");
    printf("Math Error\n");
    printf("\n");
    printf("\n");
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to calculate sine of angle in radians
void sine()
{
    double angle_degrees;
    double angle_radians;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Sine functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");
    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the sin function in C uses radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the sine of the angle
    result = sin(angle_radians);

    printf("The sine of %.2lf degrees is %.4lf\n", angle_degrees, result);
    printf("press any key to move back to main menu of scientific calculator");
    getch();

}
void cosine(){
double angle_degrees;
double angle_radians;
double result;
 printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cosine functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the cos function in C uses radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the cosine of the angle
    result = cos(angle_radians);

    printf("The cosine of %.2lf degrees is %.4lf\n", angle_degrees, result);
printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void tangent(){
       double angle_degrees;
       double angle_radians;
       double result;
        printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Tangent functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the tan function in C uses radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the tangent of the angle
    result = tan(angle_radians);

    printf("The tangent of %.2lf degrees is %.4lf\n", angle_degrees, result);

printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void cosec(){

    double angle_degrees;
    double angle_radians;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cosec functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the sin function in C uses radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the sine of the angle
    result = 1/(sin(angle_radians));

    printf("The cosec of %.2lf degrees is %.4lf\n", angle_degrees, result);
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void secant(){
   double angle_degrees;
   double angle_radians;
   double result;
    printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Secant functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the cos function in C uses radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the cosine of the angle
    result = 1/(cos(angle_radians));

    printf("The sec of %.2lf degrees is %.4lf\n", angle_degrees, result);
    printf("press any key to move back to main menu of scientific calculator");
    getch();

}
void cot(){
          double angle_degrees;
          double angle_radians;
          double result;
           printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cot functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert degrees to radians because the tan function in C uses radians
    angle_radians =angle_degrees * M_PI / 180.0;

    // Calculate the tangent of the angle
    result = 1/(tan(angle_radians));

     printf("The cot of %.2lf degrees is %.4lf\n", angle_degrees, result);
     printf("press any key to move back to main menu of scientific calculator");
    getch();

}
void sineInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Sine inverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    printf("\n");
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
      printf("\n");
        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to compute the arc cosine(inverse cosine) of an argument
void cosineInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Cosine inverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}

// Function to compute the arc tangent(inverse tangent) of an argument
void tangentInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform tangentInverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void cosecInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform cosecInverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    printf("\n");
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
      printf("\n");
        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
// Function to compute the arc cosine(inverse cosine) of an argument
void secantInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Secant inverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}

// Function to compute the arc tangent(inverse tangent) of an argument
void cotInverse()
{
    double n;
    double result;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform cotInverse functions !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
printf("press any key to move back to main menu of scientific calculator");
    getch();
    }
void addmatrix()
{
    int rows;
    int cols;
    int i;
    int j;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Addition of matrices !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("\n");
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int matrix3[rows][cols];
    // Input for the first matrix
    printf("\n");
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input for the second matrix
    printf("\n");
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Add the matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the result
    printf("\n");
    printf("Addition Matrix1 and Matrix2 is : ");
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void subtractmatrix()
{
    int rows;
    int cols;
    int i;
    int j;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform Subtraction of matrices !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("\n");
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int matrix3[rows][cols];
    // Input for the first matrix
    printf("\n");
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input for the second matrix
    printf("\n");
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Subtract the matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    // Display the result
    printf("\n");
    printf("Subtraction Matrix1 and Matrix2 is : ");
    printf("\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
void multiplicationmatrix()
{

    int rows;
    int cols;
    int i;
    int j;
     printf("********************************************************************************************************************************************************************");
    printf("\t \t \t \t \t \t <<<<<<<<<<<<<<<<<<<<<<<<<Perform multiplication of matrix !!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("********************************************************************************************************************************************************************");

    printf("\n");
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("\n");
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int matrix3[rows][cols];
    // Input for the first matrix
    printf("\n");
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            {
                scanf("%d", &matrix1[i][j]);
        }
    }
    // Input for the second matrix
    printf("\n");
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            {
                scanf("%d", &matrix2[i][j]);
}
    printf("multiplication of first and second matrix is");
    printf("\n");
    for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                {
                    matrix3[i][j]=0;

            int k;
                for (k=0; k < cols; k++)
                    {
                        matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
                    }
                }
        }
        for (int i = 0; i < rows; i++)
            {
            for (int j = 0; j < cols; j++)
                {
            printf("%d \t",matrix3[i][j]);
        }
        printf("\n");

        }
    }
    printf("press any key to move back to main menu of scientific calculator");
    getch();
}
