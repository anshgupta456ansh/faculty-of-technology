//wap two calculate adjoint of a matrix
#include<stdio.h>

int main(void)
{
    int a[3][3],b[3][3];
    printf("enter values for first matrix\n");
    for(int l=0; l<3;l ++)
    {
        for(int m=0;m<3;m++)
        {
            printf("Enter Element at %d%d position: ",l+1,m+1);
            scanf("%d",&a[l][m]);
        }
    }
    b[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
    b[0][1]=-((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
    b[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
     
}