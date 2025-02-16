#include<stdio.h>
#define MAX 10
int arr[MAX],loop,num;

void create()
{
     for(loop=0;loop<=num;loop++)
	 {
	 	scanf("%d",&arr[loop]);
		 }	
}
void insert()
{
	int pos,element;
	printf("INSERTION\n");
	printf("enter pos and element:\n");
	scanf("%d %d",&pos,&element);
	if(pos<=0 || pos>=MAX){
		printf("invalid");
	}
	//inserting
	else
	{
		for(loop=num;loop>=pos;loop--){
			arr[loop]=arr[loop-1];
		}
		arr[pos-1]=element;
		num++;
	}
}
void delete1()
{
	int pos;
	printf("DELETION\n");
	printf("enter pos:\n");
	scanf("%d",&pos);
	if(pos<=0 || pos>=MAX)
	printf("invalid");
	//deleting
	else
	{
		for(loop=pos;loop<num;loop++)
		{
			arr[loop-1]=arr[loop];
		}
		num--;
for(loop=0;loop<num;loop++)
		{
			printf("%d",arr[loop]);
		}
	}
}
void display()
{
	for(loop=0;loop<=MAX;loop++)
	{
		printf("%d",arr[loop]);
	}
}
void exit()
{
	
}
//drawback

int main()
{
	int choice,num;
	scanf("%d",&num);
	printf("enter the choice:\n");
	printf("\n 1.create\n 2.insert\n 3.delete\n 4.display\n 5.exit\n");
	scanf("%d",&choice);
	while(choice!=6)
	{
		switch(choice)
		{
		   case 1:
		     create();
		     break;
		   case 2:
		     insert();
		     break;
		   case 3:
		     delete1();
		     break;
		   case 4:
		     display();
		     break;
		   case 5:
		     exit();
		     break;
		}
}
	return 0;
}
