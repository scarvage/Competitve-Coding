// MIHIR OJHA (20205097)
// ECE - B
#include <stdio.h>
#include <stdlib.h>
void sum(int m1[3][3],int m2[3][3])
{
    int x[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = m1[i][j] + m2[i][j];
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n\n");
        
    }
    

}

void multiply(int m1[3][3],int m2[3][3])
{
    int x[3][3];
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            x[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
               x[i][j] += m1[i][k] * m2[k][j];
            }
            
            
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n\n");
        
        
    }
}
    
void transpose(int m1[3][3],int m2[3][3])
{
    int x[3][3];
    int y[3][3];
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
           x[j][i] = m1[i][j];
            
        }
        
        for (int j = 0; j < 3; j++)
        {
           y[j][i] = m2[i][j];
            
        }
        
    }
    printf("Transpose of Matrix 1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
        
        
    }
    printf("Transpose of Matrix 2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
        
        
    }
    

}



int main()
{
    int m1[3][3];
    int m2[3][3];

    //taking elemts of matrix 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }
    //taking elemts of matrix 2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m2[i][j]);
        }
        
    }
    printf("Sum : \n");
    sum(m1,m2); 
    
    printf("Multiply : \n"); 
    multiply(m1,m2);  

    printf("Transpose : \n"); 
    transpose(m1,m2);






    return 0;
}