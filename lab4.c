#include<stdio.h>
#include<math.h>

int A[20][20];
void input_matrix(int n)
{
    printf("Enter the matrix:\n");


 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n+1;j++)
    {
        printf("Enter A[%d][%d]",i,j);
        scanf("%d",&A[i][j]);
    }
  }
}
 
 

void display_matrix(int n)
{
  printf("The Matrix is:%d\n");



   for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=n+1;j++)
     {
        printf("%d",A[i][j]);
     }
  } printf("\n");
}
/*/
void gauss(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(A[i][i]=0)
        {
                printf("Mathematical Error:\n");
                break;
            
        }
        else
        {
            for(int j=i+1;j<=n;j++)
            {
                float ratio= A[j][i]/A[i][i];
                for(int k=1;k<=n+1;k++)
                {
                    A[j][k]=A[j][k]-ratio*A[i][k];
                }
            }
        }
    }
}

*/
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    input_matrix(n);
    printf("The Initial Gauss is:\n");
     for(int i=1;i<=n;i++)
    {
        if(A[i][i]=0)
        {
                printf("Mathematical Error:\n");
                break;
            
        }
        else
        {
            for(int j=i+1;j<=n;j++)
            {
                float ratio=A[j][i]/A[i][i];
                for(int k=1;k<=n+1;k++)
                {
                    A[j][k]=A[j][k]-ratio*A[i][k];
                }
            }
        }
    }
    printf("After Operation is:\n");
    display_matrix(n);
    return 0;
}