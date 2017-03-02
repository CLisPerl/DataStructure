#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard *MakeNameCard(char *name, char *phone)
{
	NameCard *info = (NameCard*)malloc(sizeof(NameCard));
	strcpy(info->name, name);
	strcpy(info->phone, phone);
	
	return info;
}

void ShowNameCardInfo(NameCard *pcard)
{
	printf("name : %s \n", pcard->name);
	printf("phone : %s \n", pcard->phone);
}

int NameCompare(NameCard *pcard, char *name)
{
	if(!strcmp(pcard->name, name))
		return 1;
	else
		return -0;
}

void ChangePhoneNum(NameCard *pcard, char *phone)
{
	memset(pcard->phone, 0, sizeof(pcard->phone));
	strcpy(pcard->phone, phone);
}

	




