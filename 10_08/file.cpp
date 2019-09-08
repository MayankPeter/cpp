#include<stdio.h>
int main()
{
FILE *fp = fopen("database","w+");

int i,n;
char name[20];
int salary,year;


printf("Enter number of people whose database you want to save\n");
scanf(" %d",&n);

int num = 1;

for(i=0;i<n;i++)
{
printf("Enter Name, Salary And Age of person: %d\n",num);
scanf(" %s%d%d",name,&salary,&year);
fprintf(fp,"%s %d %d\n",name,salary,year);
printf("\n");
num++;
} 

fclose(fp);
}
