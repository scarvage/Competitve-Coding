// MIHIR OJHA (20205097)
// ECE - B

#include <stdio.h>

 //struct contrustion
struct student
{
	char name [30];
	int  marks[ 5];
	int  total;
	float percentage;
};
 
int main()
{
	struct student std;
	
 
	//taking the name
	gets(std.name);
 
	
	std.total=0;
    //getiing all the marks in various subjects

	for(int i=0;i< 5;i++){
		
		scanf("%d",&std.marks[i]);
		std.total+=std.marks[i];
	}
	std.percentage=(float)((float)std.total/(float)50)*100;
 
	printf("\nName: %s \nTotal Marks: %d \nPercentage: %.2f",std.name,std.total,std.percentage);
 
	return 0;
}