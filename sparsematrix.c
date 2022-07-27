#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,m,n,count=0;

    printf("Enter No of Rows:: ");
    scanf("%d",&m);    
    printf("Enter No of Columns:: ");
    scanf("%d",&n);

    int input[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&input[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix:: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",input[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(input[i][j]==0)
            {
                count++;
            }
        }
    }
    
    int x = ((m*n)*30)/100;
    int a = (m*n)-count;
    int sparse[3][a];

    int k = 0;
    if(count>x)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(input[i][j]!=0)
                {
                    sparse[0][k] = i;
                    sparse[1][k] = j;
                    sparse[2][k] = input[i][j];
                    k++;
                }
            }
        }
        printf("\nmatrix Without O ::\n");
        for(i=0;i<3;i++
        ){
            for(j=0;j<a;j++)
            {
                printf("%d ",sparse[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("It's not a Sparse Matrix");
    }
}