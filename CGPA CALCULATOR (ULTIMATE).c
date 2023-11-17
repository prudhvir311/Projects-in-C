#include<stdio.h>
#include<conio.h>
int main()
{
	char G;
	int m,M,t=0,g,NC=0,NCT=0,T=0,C=0,CC=0,c,O,o,S,si,count=0,COUNT=0;
	float gi,ci,n,nc,sum=0,SUM=0,SUMmin=0,gpa,sgpa,Ssgpa=0,asgpa,cgpa;
	printf("What do you want to calculate?\n");
	printf("1)GPA-Grade Point Average\n");
	printf("2)SGPA-Semester Grade Point Average\n");
	printf("3)CGPA-Cumulative Grade Point Average\n\n");
	printf("Enter your choice....");
	scanf("%d",&O);
	if(O==1)
	{
		printf("\n\n__FOR FINDING GPA__\nEnter the number of Courses:");
		scanf("%f",&n);
		printf("Enter each grade:\n");
		for(gi=1;gi<= 2*n;gi++)
		{
			scanf("%c",&G);
			if(G=='S')
			{
				g=10;
				sum=sum+ g;	
			}
			else if(G=='A')
			{
				g=9;
				sum=sum+ g	;
			}
			else if(G=='B')
			{
				g=8;
				sum=sum+g	;
			}
			else if(G=='C')
			{
				g=7;
				sum=sum+g	;
			}
			else if(G=='D')
			{
				g=6;
				sum=sum+g;
			}
			else if(G=='R')
			{
				printf("(WRITE SUPPLEMENTARY TO PROCEED........)\n");
				g=6;
				sum=sum+g;
				count++;
			}
		}
		gpa= sum/n;
		if (count==0)
		{
			printf("\n\nNo. of BACKLOGS = %d",count);
			printf("\n\n\n\n\n\nYour GPA is %f\n\n\n\n\n\n\n\n\n\n\n",gpa);
		}
		else if(count!=0)
		{
			printf("\n\nNo. of BACKLOGS = %d",count);
			printf("\n\n\n\n\n\nYour MINIMUM possible GPA is %f (After passing SUPPLEMENTARY)",gpa);
			printf("\n\n\nClick '0' to know your MAXIMUM possible GPA (After passing SUPPLEMENTARY)\n");
			scanf("%d",&m);
			if(m== 0)
			{
				g=10;
				sum= sum+ (g-6)*count;
				gpa= sum/n;
				printf("\n\n\n\nYour MAXIMUM possible GPA is %f (After passing SUPPLEMENTARY)\n\n\n\n\n\n\n\n",gpa);
			}
		}
	}
	else if(O==2)
	{
		printf("\n\n\n__FOR FINDING SGPA__\nEnter the number of types of Credits:");
		scanf("%f",&n);
		if(n!=1)
		{
			printf("\nEnter each Credit:\n");
		}
		else if(n==1)
		{
			printf("\nEnter your Credit:");	
		}
		for(ci=1;ci<=n;ci++)
		{
			if(ci>1&&ci<n)
			{
				printf("\nEnter next Credit:");	
			}
			else if(ci==n && n==2)
			{
				printf("\nEnter another Credit:");
			}
			else if(ci==n && n!=1)
			{
				printf("\nEnter the last Credit:");
			}
			scanf("%d",&c);
			printf("Enter the number of '%d' Credit subjects:",c);
			scanf("%f",&nc);
			if(nc!=1)
			{
				printf("Enter all the Grades in '%d' Credit subjects:\n",c);
			}
			else if(nc==1)
			{
				printf("Enter your Grade in '%d' Credit subject:\n",c);	
			}
			for(gi=1;gi<= 2*nc;gi++)
			{
				scanf("%c",&G);
				if(G=='S')
				{
					g=10;
					sum=sum+g*c;	
				}
				else if(G=='A')
				{
					g=9;
					sum=sum+g*c	;
				}
				else if(G=='B')
				{
					g=8;
					sum=sum+g*c	;
				}
				else if(G=='C')
				{
					g=7;
					sum=sum+g*c	;
				}
				else if(G=='D')
				{
					g=6;
					sum=sum+g*c;
				}
				else if(G=='R')
				{
					printf("(WRITE SUPPLEMENTARY TO PROCEED........)\n");
					g=6;
					sum=sum+g*c;
					C= C+c ;
					count++;
				}
			}
			t=t+ (nc*c);
			NC= NC+nc;
		}
		sgpa=sum/t;
		if (count==0)
		{
			printf("\nNo. of Courses = %d\n",NC);
			printf("\nNo. of BACKLOGS = %d",count);
			printf("\n\n\n\nTotal no. of Credits = %d",t);
			printf("\n\n\n\n\n\n\nYour SGPA is %f\n\n\n\n\n\n\n\n",sgpa);
		}
		else if(count!=0)
		{
			printf("\n\n\nNo. of Courses = %d",NC);
			printf("\n\nNo. of BACKLOGS= %d",count);
			printf("\n\n\n\nTotal no. of Credits you have OPTED = %d",t);
			t= t-C;
			printf("\n\nNo. of Credits you have ACHIEVED = %d",t);
			printf("\n\n\n\n\n\n\n\nYour MINIMUM possible SGPA is %f (After passing SUPPLEMENTARY)",sgpa);
			printf("\n\n\n\nClick '0' to know your MAXIMUM possible SGPA (After passing SUPPLEMENTARY)\n");
			scanf("%d",&m);
			if(m== 0)
			{
				g=10;
				sum= sum+ (g-6)*C;
				sgpa= sum/(t+C);
				printf("\n\n\n\n\n\nYour MAXIMUM possible SGPA is %f (After passing SUPPLEMENTARY)\n\n\n\n\n\n\n\n",sgpa);
			}
		}
	}
	else if(O==3)
	{
		printf("\n\n\n\n\n\n\n\n_____FOR FINDING CGPA_____\nEnter the number of semesters:");
		scanf("%d",&S);
		for(si=1;si<=S;si++)
		{
			printf("\n\n\n\n_FOR SEMESTER %d_\n\n",si);
			printf("Enter the number of types of Credits:");
			scanf("%f",&n);
			if(n!=1)
			{
				printf("\nEnter each Credit:\n");
			}
			else if(n==1)
			{
				printf("\nEnter your Credit:");	
			}
			t=0;
			count=0;
			C=0;
			NC=0;
			sum=0;
			for(ci=1;ci<=n;ci++)
			{
				if(ci>1&&ci<n)
				{
					printf("\nEnter next Credit:");	
				}
				else if(ci==n && n==2)
				{
					printf("\nEnter another Credit:");
				}
				else if(ci==n && n!=1)
				{
					printf("\nEnter the last Credit:");
				}
				scanf("%d",&c);
				printf("Enter the number of '%d' Credit subjects:",c);
				scanf("%f",&nc);
				if(nc!=1)
				{
					printf("Enter all the Grades in '%d' Credit subjects:\n",c);
				}
				else if(nc==1)
				{
					printf("Enter your Grade in '%d' Credit subject:\n",c);	
				}	
				for(gi=1;gi<= 2*nc;gi++)
				{
					scanf("%c",&G);
					if(G=='S')
					{
						g=10;
						sum=sum+g*c;	
					}
					else if(G=='A')
					{
						g=9;
						sum=sum+g*c	;
					}
					else if(G=='B')
					{
						g=8;
						sum=sum+g*c	;
					}
					else if(G=='C')
					{
						g=7;
						sum=sum+g*c	;
					}
					else if(G=='D')
					{
						g=6;
						sum=sum+g*c;
					}
					else if(G=='R')
					{
						printf("(WRITE SUPPLEMENTARY TO PROCEED........)\n");
						g=6;
						sum=sum+g*c;
						C= C+c ;
						count++;
					}
				}
				t=t+ (nc*c);
				NC= NC+nc;
			}
			sgpa=sum/t;
			if (count==0)
			{
				printf("\n\n\n\n\nNo. of Courses in SEM-%d = %d\n",si,NC);
				printf("\nNo. of BACKLOGS in SEM-%d = %d",si,count);
				printf("\n\n\n\nNo. of Credits in SEM-%d = %d\n",si,t);
				printf("\n\n\n\n\n\nYour SGPA is %f",sgpa);
			}
			else if(count!=0)
			{
				printf("\n\n\n\n\nNo. of Courses in SEM-%d = %d\n",si,NC);
				printf("\nNo. of BACKLOGS in SEM-%d = %d",si,count);
				printf("\n\n\n\n\n\nTotal no. of Credits you have OPTED in SEM-%d = %d",si,t);
				t= t-C;
				printf("\n\nNo. of Credits you have ACHIEVED in SEM-%d = %d",si,t);
				printf("\n\n\n\n\n\n\n\nYour MINIMUM possible SGPA is %f (After passing SUPPLEMENTARY)",sgpa);
				printf("\n\n\n\nClick '0' to know your MAXIMUM possible SGPA (After passing SUPPLEMENTARY)\n");
				scanf("%d",&m);
				if(m== 0)
				{
					g=10;
					sum= sum+ (g-6)*C;
					sgpa= sum/(t+C);
					printf("\n\n\n\n\n\nYour MAXIMUM possible SGPA is %f (After passing SUPPLEMENTARY)",sgpa);
				}
			}
			NCT= NCT+NC;
			SUM=SUM+sum;
			g=10;
			sum= sum-(g-6)*C;
			SUMmin= SUMmin + sum;
			T=T+(t+C);
			CC=CC+C;
			Ssgpa=Ssgpa+sgpa;
			COUNT= COUNT+count;
		}
		asgpa=Ssgpa/(si-1);
		if (COUNT==0)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\nTotal No. of Courses you have studied = %d\n",NCT);
			printf("\nNo. of BACKLOGS = %d",COUNT);
			printf("\n\nTotal no. of Credits = %d",T);
			printf("\n\n\n\nYour Average SGPA is %f",asgpa);
		}
		cgpa= SUM/T;
		if (COUNT==0)
		{
			printf("\n\n\n\n\n\n\nYour CGPA is %f\n\n\n\n\n\n\n\n",cgpa);
		}
		else if(COUNT!=0)
		{
			printf("\n\n\n\n\n\n\n\n\nTotal No. of Courses you have studied = %d\n",NCT);
			printf("\n\nTotal no. of BACKLOGS = %d",COUNT);
			printf("\n\n\n\n\nTotal no. of Credits you have OPTED = %d",T);
			T= T-CC;
			printf("\n\nNo. of Credits you have ACHEIVED = %d",T);
			printf("\n\n\n\n\n\n\n\nYour MAXIMUM possible CGPA is %f (After passing SUPPLEMENTARY)",cgpa);
			printf("\n\n\n\nClick '0' to know your MINIMUM possible CGPA (After passing SUPPLEMENTARY)\n");
			scanf("%d",&M);
				if(M== 0)
				{
					cgpa= SUMmin/(T+CC);
					printf("\n\n\n\n\n\nYour MINIMUM possible CGPA is %f (After passing SUPPLEMENTARY)\n\n\n\n\n\n\n\n",cgpa);
				}
		}
	}
	else
		printf("THE OPTION THAT YOU HAVE ENTERED IS INVALID");
	return 0;
}
