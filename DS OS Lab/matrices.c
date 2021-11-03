// MIHIR OJHA (20205097)
// ECE - B
#include <stdio.h>
#include <stdlib.h>
void sum(int m1[3][3],int m2[3][3])
{
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j`++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j`++)
        {
            printf("%d\t",sum[i][j]);
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
        for (int j = 0; i < 3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }
    //taking elemts of matrix 2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            scanf("%d",&m2[i][j]);
        }
        
    }
    sum(m1[3][3],m2[3][3]);

    






    return 0;
}