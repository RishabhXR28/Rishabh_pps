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
    printf("\n Pen = %d\n Geometry_Box = %d \n Red_Bull = %d \n Book = %d \n Butter = %d\n ", Pen, Geometry_Box, Red_Bull, Book, Butter);
    printf("Enter How Many Pen do you want\n");
    scanf("%d", &a);
    printf("Enter How Many Geometry_Box do you want\n");
    scanf("%d", &b);
    printf("Enter How Many Red_Bull do you want\n");
    scanf("%d", &c);
    printf("Enter How Many Book do you want\n");
    scanf("%d", &d);
    printf("Enter How Many Butter do you want\n");
    scanf("%d", &e);
    int x;
    x = (Pen*a) + (Geometry_Box*b) + (Red_Bull*c) + (Book*d) + (Butter*e);
    printf("Total is %d\n", x);
    if(x>=10000)
    {
        printf("The discounted bill is %d\n", x-x*10/100);
    }
    else if (x>=5000)
    {
        printf("The discounted bill is %d\n", x-x*5/100);
    }
    else
    {
        printf("No discount. Total bill is %d\n",x);
    }
}
