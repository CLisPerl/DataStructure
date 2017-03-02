#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(void)
{
	List list;
	NameCard *info;

	ListInit(&list);

	info=MakeNameCard("choi", "01022222222");
	LInsert(&list, info);

	info=MakeNameCard("park", "01033333333");
	LInsert(&list, info);

	info=MakeNameCard("lee", "01044444444");
	LInsert(&list, info);

	if(LFirst(&list, &info))
	{
		if(NameCompare(info, "choi")==1)
			ShowNameCardInfo(info);

		while(LNext(&list, &info))
			if(NameCompare(info, "choi")==1)
				ShowNameCardInfo(info);
	}

	printf("\n\n");
	if(LFirst(&list, &info))
	{
		if(NameCompare(info, "choi")==1)
		{
			ChangePhoneNum(info, "01011111111");
			ShowNameCardInfo(info);
		}

		while(LNext(&list, &info))
			if(NameCompare(info, "choi")==1)
			{
				ChangePhoneNum(info, "01011111111");
				ShowNameCardInfo(info);
			}
	}

	printf("\n\n");

	if(LFirst(&list, &info))
	{
		if(NameCompare(info, "choi")==1)
		{
			info=LRemove(&list);
			free(info);
		}

		while(LNext(&list, &info))
			if(NameCompare(info, "choi")==1)
			{
				info=LRemove(&list);
				free(info);
			}
	}

	printf("\n\n");
	
	if(LFirst(&list, &info))
	{
		ShowNameCardInfo(info);

		while(LNext(&list, &info))
			ShowNameCardInfo(info);

	}

	return 0;
}

