#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct student
{
    char name[14];
    int rollNo;
    int marks[3];
    char grade[20];
};

int main()
{
    struct student *stuArray;
    int n;
    int tempTotal = 0, flag = 0, foundIndex;
    char tempName[14];
    
    //printf("\n No of Students: ");
    scanf("%d", &n);
    stuArray = (struct student *)malloc(n * sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
       // printf("\n %d.Name :", (i + 1));
        scanf("%s", &stuArray[i].name);
        //printf("\n Roll Number :", (i + 1));
        scanf("%d", &stuArray[i].rollNo);
        //printf("\n %d.Grade :", (i + 1));
        scanf("%s", &stuArray[i].grade);
        tempTotal = 0;
        for (int j = 0; j < 3; j++)
        {
            //printf("\n Mark %d :", (j + 1));
            scanf("%d", &stuArray[i].marks[j]);
            
        }
       
    }

    //printf("\n Enter the Name to be Searched: ");
    scanf("%s", &tempName);

    //finding the person with the marks 
    for (int i = 0; i < n; i++)
    {
        if (strcmp(tempName, stuArray[i].name) == 0)
        {
            foundIndex = i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Details Not Found");
    }
    else
    {
        printf("\n Marks of %s ", tempName);
        for (int i = 0; i < 3; i++)
        {
            printf("\n Mark %d is %d", (i + 1), stuArray[foundIndex].marks[i]);
        }
    }
    
    return 0;
}