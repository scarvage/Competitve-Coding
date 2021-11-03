// MIHIR OJHA (20205097)
// ECE - B
#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[100];
    int roll;
    char address[100];
    int age;
    int marks;
    int avgMarks;
};
struct Student getInformation() 
{
  struct Student s1;

  //printf("Enter name: ");
  scanf ("%s", s1.name);

  //printf("Enter roll no: ");
  scanf("%d", &s1.roll);

  //printf("Enter Address: ");
  scanf ("%s", s1.address);

 // printf("Enter age: ");
  scanf("%d", &s1.age);

  //printf("Enter marks: ");
  scanf("%d", &s1.marks);

  
  return s1;
}
//funnction to display all the values
void display(struct Student s)
{
    printf("Name : %s ",s.name);
    printf("Roll No. : %d ",s.roll);
    printf("Address : %s ",s.address);
    printf("Age : %d ",s.age);
    printf("Marks : %d \n",s.marks);
    
}

int main()
{
    struct Student std1 = getInformation();
    struct Student std2 = getInformation();
    struct Student std3 = getInformation();
    struct Student std4 = getInformation();
    struct Student std5 = getInformation();
    struct Student std6 = getInformation();
    struct Student std7 = getInformation();
    struct Student std8 = getInformation();
    struct Student std9 = getInformation();
    struct Student std10 = getInformation();
    struct Student std11 = getInformation();
    struct Student std12 = getInformation();

    display(std1);
    display(std2);
    display(std3);
    display(std4);
    display(std5);
    display(std6);
    display(std7);
    display(std8);
    display(std9);
    display(std10);
    display(std11);
    display(std12);

    printf("\n");
    int averge = (std1.marks+std2.marks+std3.marks+std4.marks+std5.marks+
                    std6.marks+std7.marks+std8.marks+std9.marks+std10.marks+
                    std11.marks+std12.marks)/12;

    printf("Average marks are : %d ",averge );
    
     return 0;
}