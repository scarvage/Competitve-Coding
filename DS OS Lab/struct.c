// MIHIR OJHA (20205097)
// ECE - B
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct StudentDetails
{
    char *Name;
    int rollNo;
     char *Branch;
    char *Dept; 

};


int main()
{
//Defining objects
struct StudentDetails details;
struct StudentDetails* ptr = NULL;

//allocating memory 
details.Name = (char*)calloc(10, sizeof(char));
ptr = (struct StudentDetails*)malloc(sizeof(struct StudentDetails));
details.Branch = (char*)calloc(10, sizeof(char));  

//Assigning Values
strcpy(details.Name , "MIHIR");
strcpy(details.Branch , "Electronics Engineering");
ptr -> rollNo = 20205097;
ptr -> Dept = "ECE Dept.";  

//printing them
printf("%s \n",details.Name);
printf("%d \n",ptr->rollNo);
printf("%s \n",details.Branch);
printf("%s \n",ptr->Dept);

    
    return 0;
}