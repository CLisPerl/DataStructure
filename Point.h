#ifndef __POINT_H__
#define __POINT_H__

#define NAME 30
typedef struct _point
{
	int xpos;
	int ypos;
	char name[NAME];
} Point;

void SetPointPos(Point *ppos, int xpos, char *name);

void ShowPointPos(Point *ppos);

int PointComp(Point *pos1, Point *pos2, int num);



#endif
