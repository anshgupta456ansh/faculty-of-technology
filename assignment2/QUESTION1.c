// wap to print 2 3x3 matrix and adding them
#include<stdio.h>

int main(void)
{
    
    int a[3][3],b[3][3],i,j,c[3][3];
    // taking values of matrix a
    printf("enter values for first matrix\n");
    for(int l=0; l<3;l ++)
    {
        for(int m=0;m<3;m++)
        {
            printf("Enter Element at %d%d position: ",l+1,m+1);
            scanf("%d",&a[l][m]);
        }
    }
    printf("\n");
    //taking values of matrix b
    printf("Now enter values for second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Element at %d%d position: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //printing value of matrix a 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //printing values of matrix b
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    // adding these two matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //adding the 2 matrix and storing it in matrix c
            c[i][j]=a[i][j]+b[i][j];
            //printing values of matrix c
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}