#include<stdio.h>
struct stud{
	int roll_no;
	char name[15];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float per;
	
};

int main()
{
	struct stud a[5];
	int i;
	float total_marks,per;
	
	for(i=0 ; i<5 ; i++){
		printf("Enter Roll No [%d] : ",i);
		scanf("%d",&a[i].roll_no);
		
		printf("Enter name [%d] : ",i);
		scanf("%s",&a[i].name);
		
		printf("Enter chemestry marks [%d] : ",i);
		scanf("%d",&a[i].chem_marks);
		
		printf("Enter maths marks [%d] : ",i);
		scanf("%d",&a[i].maths_marks);
		
		printf("Enter physics marks [%d] : ",i);
		scanf("%d",&a[i].phy_marks);
		
		printf("\n\n");
	}
	
	for(i=0 ; i<5 ; i++){
		total_marks = a[i].chem_marks + a[i].maths_marks + a[i].phy_marks;
		per = total_marks * 100 / 300 ;
	}
	
	
	for(i=0 ; i<5 ; i++){
		printf("Marks of student: ");
		printf("%d\t",a[i].roll_no);
		printf("%s\t",a[i].name);
		printf("%d\t",a[i].chem_marks);
		printf("%d\t",a[i].maths_marks);
		printf("%d\t",a[i].phy_marks);
		printf("%f\n\n",per);		
	}
	
	return 0;
}
