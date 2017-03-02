#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedListDummy.h"

void ListInit(List *plist)
{
	plist->head=(Node*)malloc(sizeof(Node));
	plist->head->next=NULL;
	plist->tail=(Node*)malloc(sizeof(Node));
	plist->tail->prev=NULL;
	plist->numOfData=0;
}

void LInsert(List *plist, Data data)
{
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;

	if(plist->tail->prev==NULL)
	{
		plist->head->next=newNode;
		newNode->prev=plist->head;

	}
	else
	{
		plist->tail->prev->next=newNode;
		newNode->prev=plist->tail->prev;
	}
	newNode->next=plist->tail;
	plist->tail->prev=newNode;

	(plist->numOfData)++;
}

int LFirst(List *plist, Data *pdata)
{
	if(plist->tail==NULL)
		return FALSE;

	plist->cur=plist->tail->prev;
	*pdata=plist->cur->data;

	return TRUE;
}

int LNext(List *plist, Data *pdata)
{
	if(plist->cur->prev==plist->head)
		return FALSE;
	
	plist->cur=plist->cur->prev;
	*pdata=plist->cur->data;

	return TRUE;
}

Data LRemove(List *plist)
{
	Node* rpos=plist->cur;
	Data rdata = rpos->data;

	plist->cur->prev->next=plist->cur->next;
	plist->cur->next->prev=plist->cur->prev;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LPrevious(List *plist, Data *pdata)
{
	if(plist->cur->prev==NULL)
		return FALSE;

	plist->cur = plist->cur->prev;
	*pdata=plist->cur->data;

	return TRUE;
}

int LCount(List *plist)
{
	return plist->numOfData;
}

