#include <stdio.h>
#include <string.h>
#include "Point.h"

void SetPointPos(Point *ppos, int xpos, char* name)
{
	ppos->xpos=xpos;
	strcpy(ppos->name, name);
}

void ShowPointPos(Point *ppos)
{
	printf("[%d, %s] \n", ppos->xpos, ppos->name);
}

int PointComp(Point *pos1, Point *pos2, int num)
{
	if(!strcmp(pos1->name,pos2->name))
		return num;
	else
		return 0;
}
