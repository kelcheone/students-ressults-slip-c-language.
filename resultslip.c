#include<stdio.h>
main(){
	
	/*initialize variables*/
	char fname[10];
    char sname[10];
    char reg_no[10];
	int m1, m2, m3, m4, m5;
	float total, avg;
	char grade;
	int av;
	/*ask for input*/
	printf("Student First_Name: ");
    scanf("%s",&fname);

    printf("Student Last_Name:  ");
    scanf("%s",&sname);

    printf("Reg_NO: ");
    scanf("%s",&reg_no);
    
	printf("Enter marks for Database Systems->");
	scanf("%d", &m1);
	printf("Enter marks for computing mathematics->");
	scanf("%d", &m2);
	printf("Enter marks for computer organization->");
	scanf("%d", &m3);
	printf("Enter marks for hunam computer interaction->");
	scanf("%d", &m4);
	printf("Enter marks for web design and development->");
	scanf("%d", &m5);
	total = (float)(m1+m2+m3+m4+m5);
	avg = (float)(m1+m2+m3+m4+m5)/5;
	av = (avg/10);
	/* grade the student marks*/
	switch(av)
	{
	case 0: case 1: case 2: case 3:
		grade='F';
		break;
	case 4:
		grade='D';
		break;
	case 5:
		grade='C';
		break;
	case 6:
		grade='B';
		break;
	default :
		grade='A';
	}
	
	printf("-------------------------------------------------------------------------------\n");
	printf("                      KCAU college of Technology                              \n");
	printf("               Software development trimister two result slip                  \n");
	printf("-------------------------------------------------------------------------------\n");
	printf("Name : %s %s\n", fname, sname);
	printf("RegNo%d\n", reg_no);
	printf("Database Systems->                   %d\n", m1);
	printf("Computing mathematics->               %d\n", m2);
	printf("computer organization->               %d\n", m3);
	printf("hunam computer interaction->           %d\n", m4);
	printf("web design and development->           %d\n", m5);
	printf("The total marks for the student is %.2f\n", total);
	printf("The average mark is                  %.2f\n", avg);
	printf("The students grade is                 %c\n", grade);
	return 0;
}
