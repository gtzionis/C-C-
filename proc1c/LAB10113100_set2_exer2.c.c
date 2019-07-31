// √—«√œ—«” ‘∆…ŸÕ«” ¡.Ã.2011030012 //
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

FILE *fp;

int nstudents;	
char namein[30];

void read (FILE *fp);

int i,j;

typedef struct // domes //
{
	float firstAssignment;
	float secondAssignment;
	float midterm;  
	float final;
	float finalmark;
} StudentRecordType; // auth h domh emperiexetai sthn allh //

typedef struct 
{
	char *firstName;
	char *lastName;
	int idNumber;
	StudentRecordType marks;
} StudentType;

StudentType *students; 

void abc(StudentType *students); // oi sunarthshs //
void finalgrade( StudentType *students);
int finalaverage(StudentType *students);
void Sname (StudentType *students, char *nameinput);



void read( FILE *fp ) // diabasma arxeiou desmeush xwrou kai apo8hkeush se pinaka //
{
	
	char tfName[30];
	char tlName[30];
	
	fscanf(fp, "%d", &nstudents);
	for(j=0;j<nstudents;j++)
	{
		fscanf(fp, "%s %s %f %f %f %f ", tfName, tlName, &students[j].marks.firstAssignment, &students[j].marks.secondAssignment, &students[j].marks.midterm, &students[j].marks.final);
		students[j].firstName=(char *)malloc(strlen(tfName)*sizeof(char));
		students[j].lastName=(char *)malloc(strlen(tlName)*sizeof(char));
		strcpy(students[j].firstName, tfName);
		strcpy(students[j].lastName, tlName);
	}
	
	
}



int finalaverage( StudentType *students ) // sunarthsh pou upologizei ton meso oro ths ta3hs //
{
	int  total=0;
	for (i=0; i<nstudents; i++)
	{
		total+=students[i].marks.finalmark;
	}
	
	return (total/nstudents);
}

void finalgrade( StudentType *students ) //sunarthsh pou upologizei ton meso oro ka8e ma8hth kaI ton sunoliko ba8mo olois ths ta3hs //
{
	
	for (i=0;i<nstudents;i++)
	{
		students[i].marks.finalmark=(((10*students[i].marks.firstAssignment) + (15*students[i].marks.secondAssignment) + (25*students[i].marks.midterm) + (50*students[i].marks.final))/100);
		printf("%s %s %f\n", students[i].firstName, students[i].lastName, students[i].marks.finalmark);
	}
	 printf("The final average of the class room is %d\n", finalaverage(students));
}

void Sname (StudentType *students, char *nameinput) // h suarthsh pou elenxei gia to onoma kai ama uparxei ektupwnei to onoma tou ousiastika sugkrinei ths sumboloseires //
{
	char findname[30];	
	char keno[]=" ";
	int find=0;
	
	for (i=0; i<nstudents; i++)
	{
		
		strcpy(findname, students[i].firstName);
		strcat(findname, keno);
		strcat(findname, students[i].lastName);
		
		if ( strcmp(findname,nameinput)==0 ) //ektupwsh fakelou //
		{
			find=1;
			printf("%s %s", students[i].firstName, students[i].lastName);
			printf("\nFirst Assignment %f ", students[i].marks.firstAssignment);
			printf("\nSecond Assignment %f ",students[i].marks.secondAssignment);
			printf("\nMidterm  %f ", students[i].marks.midterm);
			printf("\nFinal  %f ", students[i].marks.final);
			printf("\nFinal Mark %f", students[i].marks.finalmark);
			break;
		}
	}
	
	if ( find==0)
	{
		printf("\nTHIS NAME IT DOESN'T EXIST IN THE FILE\n");
	}
	
}


void abc(StudentType *students) 
{
	int neg;
	
	StudentType pin;
	
	for (i=0;i<nstudents;i++) 
	{
		neg = i;
		for (j= i+1; j<nstudents;j++) 
		{
			if (strcmp(students[j].lastName,students[neg].lastName) < 0) 
				neg= j;
		}
		pin=students[neg];
		students[neg]=students[i];
		students[i]=pin;
	}
}



main()
{
	int button;
	char space[]=" ",searchfname[30], searchlname[30];
	
	if((fp=fopen("project2-askhsh2.dat","r")) != NULL)
	{
		
	
		
	students=malloc(30*sizeof(*students));// desmeush xwrou //
	printf("\t***********Arxeio***************\n");
	printf("\n");
	read(fp); // h sunarthshs mesa sthn main //
	finalgrade(students);
	finalaverage(students);
	abc(students);
	
	// lista epilogwn //
	do{
		printf("\n");
		printf("\n\n1 Search Names");
		printf("\n\n2 Print all");
		printf("\n\n3 Exit ");
		scanf("%d", &button);
		printf("\n");
		while (button<1||button>3) // periorismos //
		{
			printf("\nfalse.. please choose again\n");
			scanf("%d", &button);
        }
		if (button==1)
		{
			printf("Enter the name \n");
			scanf("%s %s", searchfname,searchlname); 
			strcpy(namein,searchfname);
			strcat(namein,space);
			strcat(namein,searchlname);
			Sname(students, namein);
		}
		if (button==2)
		{
			finalgrade(students);
		}
		if(button==3)
		{
                     exit(2);
        }
	}while (button!=3);
	
	
	fclose(fp);
    }
	system("pause");
	return 0;
	
}

