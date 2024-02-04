#include<stdio.h>
#include<conio.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)

int main()
{
    float x0,y0,h,xn,yn;
    float k1,k2,k3,k4,k;
    int n,i;
    printf("Enter the value of x0,y0:");
    scanf("%f%f",&x0,&y0);
    printf("Enter the number of steps:");
    scanf("%f",&h);
    printf("Enter the Calculation point:");
    scanf("%f",&xn);
    h=(xn-x0)/n;
    i=0;

    do
    {
        k1=h*(f(x0,y0));
        k2=h*(f(x0+h/2,y0+k1/2));
        k3=h*(f(x0+h/2,y0+k2/2));
        k4=h*(f(x0+h,y0+k3));
        k= (k1+2*k2+2*k3+k4)/6;
        yn=y0+k;
        i=i+1;
        x0=x0+h;
        y0=yn;

    } while (i<n);

    printf("The value of yn is %f",yn);
    return 0;
    



}