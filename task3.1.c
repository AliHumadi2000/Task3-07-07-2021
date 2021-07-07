#include<stdio.h>
#include<string.h>
#define n 10
void myfunc(char name[][20],int mark[])
	{
	int i,c=0,max=0,min=0,sum=0,maxi,mini;
	for(i=0;i<n;i++)
		{
		sum+=mark[i];
		if(mark[i]>max)
			{
			max=mark[i];
			maxi=i;
			}
		if(mark[i]<min)
			{
			min=mark[i];
			mini=i;
			}
		if(mark[i]>=50 && mark[i]<60)
			{
			printf("%s\t wiht D mark\n",name[i]);
			}
		else if(mark[i]>=60 && mark[i]<70)
			{
			printf("%s\t wiht C mark\n",name[i]);
			}
		else if(mark[i]>=70 && mark[i]<80)
			{
			printf("%s\t wiht B mark\n",name[i]);
			}
		else if(mark[i]>=80 && mark[i]<90)
			{
			printf("%s\t wiht A mark\n",name[i]);
			c++;
			}
		else if(mark[i]>=90 && mark[i]<=100)
			{
			printf("%s\t wiht O mark\n",name[i]);
			}
		else if (mark[i]>=0 && mark[i]<50)
			{
			printf("%s\t wiht F mark\n",name[i]);
			}
			
		}
	printf("\n name of student who get highest mark is :%s \n",name[maxi]);
	printf("\n name of student who get low mark is :%s \n",name[mini]);
	printf("\n sum is :%d  and average is :%0.2f\n",sum,(float)sum/n);
	printf("\n number of student whom get A grade is :%d ",c);
	//sorting the name
	int j,k,tmp;
	char temp[20];
	for(j=0;j<n;j++)
		{
		for(k=j+1;k<n;k++)
			{
			if (strcmp(name[j], name[k])> 0) 
		        {
				tmp=mark[j];
				mark[j]=mark[k];
				mark[k]=tmp;
				strcpy(temp, name[j]);
				strcpy(name[j], name[k]);
				strcpy(name[k], temp);
		        }
			}
		}
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++)
		{
		printf("name is :%s and mark is :%d\n",name[i],mark[i]);
		}
	}
int main()
	{
	int mark[n];
	char name[n][20];
	int i;
	for(i=0;i<n;i++)
		{
		scanf("%d",&mark[i]);
		scanf("%s",name[i]);
		if(mark[i]<=0 || mark[i]>100)
			{
			printf("Renter the mark and the name\n");
			i--;
			}
		
		}
	myfunc(name,mark);	
	
	}