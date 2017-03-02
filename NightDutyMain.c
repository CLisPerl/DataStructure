#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee *WhosNightDuty(List * plist, char *name, int day);
void ShowEmployeeInfo(Employee *emp);

int main(void)
{
	List list;
	Employee *emp;

	ListInit(&list);
	
	emp=(Employee*)malloc(sizeof(Employee));
	emp->empNum=1;
	strcpy(emp->name, "A");
	LInsert(&list, emp);

	emp=(Employee*)malloc(sizeof(Employee));
	emp->empNum=2;
	strcpy(emp->name, "B");
	LInsert(&list, emp);

	emp=(Employee*)malloc(sizeof(Employee));
	emp->empNum=3;
	strcpy(emp->name, "C");
	LInsert(&list, emp);
	
	emp=(Employee*)malloc(sizeof(Employee));
	emp->empNum=4;
	strcpy(emp->name, "D");
	LInsert(&list, emp);
	
	emp=WhosNightDuty(&list, "A", 1);
	ShowEmployeeInfo(emp);


	

	return 0;
}

Employee *WhosNightDuty(List * plist, char *name, int day)
{
	Employee *emp;
	int i, count;

	count=LCount(plist);

	LFirst(plist, &emp);
	
	if(strcmp(name, emp->name))
	{
		for(i=0; i<count-1; i++)
		{
			LNext(plist, &emp);
			
			if(strcmp(name, emp->name))
				break;
			
		}
		if(i>=count-1)
			return NULL;
	}


	for(i=0; i<day; i++)
		LNext(plist, &emp);


	return emp;
}
void ShowEmployeeInfo(Employee *emp)
{
	printf("%d %s \n", emp->empNum, emp->name);
}
