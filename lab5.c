#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,Xp,yp;
    float p;
    int i,j;
    int x[50],y[50];
    printf("Enter the number of data:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          printf("x[%d] = ", i);
		  scanf("%d", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%d", &y[i]);
    }
    printf("Enter Xp:");
    scanf("%d",&Xp);

    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=n;j++)
        {
            if(i != j)
			   {
			    	p = p* (Xp - x[j])/(x[i] - x[j]);
			   }
               else
               {
                  yp = yp + p * y[j];
               }
        }
    }

    printf("The value of yp is %d",yp);
    return 0;
    

}