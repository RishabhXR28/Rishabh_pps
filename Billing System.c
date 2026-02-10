#include<stdio.h>
int main(void)
{
    int Pen=100;
    int Geometry_Box=650;
    int Red_Bull=200;
    int Book=250;
    int Butter=150;
    int a,b,c,d,e;
    printf("\n ************************* Billing System ************************************");
    printf("\n Pen= %f \n Geometry_Box = %f \n Red_Bull = %f \n Book = %f \n Butter = %f ", Pen,Geometry_Box,Red_Bull,Book,Butter);
    printf("Enter How Many Pen do you want\n");
    scanf("%f", &a);
    printf("Enter How Many Geometry_Box do you want\n");
    scanf("%f", &b);
    printf("Enter How Many Red_Bull do you want\n");
    scanf("%f", &c);
    printf("Enter How Many Book do you want\n");
    scanf("%f", &d);
    printf("Enter How Many Butter do you want\n");
    scanf("%f", &e);
    float x;
    x = (Pen*a) + (Geometry_Box*b) + (Red_Bull*c) + (Book*d) + (butter*e);
    printf("Total is %f\n", x);
    if(x>=5000)
    {
        printf("The discounted bill is %f\n", x-x*10/100);
    }
    else if (x>=2500)
    {
        printf("The discounted bill is %f\n", x-x*5/100);
    }
    else
    {
        printf("No discount. Total bill is %f\n",x);
    }
}