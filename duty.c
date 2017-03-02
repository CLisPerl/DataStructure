#include <stdio.h>
#include <stdlib.h>

#include "Point.h"
#include "CLinkedList.h"

int main(void)
{
	List list;
	Point *ppos;
	Point compPos;
	int num, i;


	ListInit(&list);

	ppos=(Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 1, "A");
	LInsert(&list, ppos);

	ppos=(Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, "B");
	LInsert(&list, ppos);

	ppos=(Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, "C");
	LInsert(&list, ppos);

	ppos=(Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 4, "D");
	LInsert(&list, ppos);


	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);

		for(i=0; i<LCount(&list)-1; i++)
		{
			if(LNext(&list, &ppos))
				ShowPointPos(ppos);
		}
	}

	compPos.name="A";

	if(LFirst(&list, &ppos))
	{
		if((num=PointComp(ppos, &compPos, 7))!=0)
		{
			while(LNext(&list, &ppos))
			{
				if(PointComp(ppos, &compPos)==1)
				{
					ShowPointPos(ppos);
					break;
				}
			}
			ShowPointPos(ppos);
		}
		while(LNext(&list, &ppos))
		{
			if(PointComp(ppos, &compPos)==1)
			{
				ShowPointPos(ppos);
				break;
			}
		}
	}


	return 0;
}


