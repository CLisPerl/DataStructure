#include <stdio.h>
#include <stdlib.h>
#include "CLinkedListStack.h"

int main(void)
{
	List list;
	Data data;	
	int i=0, count;
	ListInit(&list);

	LInsertFront(&list, 1);
	LInsertFront(&list, 2);
	LInsertFront(&list, 3);
	LInsertFront(&list, 4);
	LInsertFront(&list, 5);

	count=LCount(&list);

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		for(i=0; i<count-1; i++)
		{
			if(LNext(&list, &data))
				printf("%d ", data);
		}
	}
	return 0;
}
