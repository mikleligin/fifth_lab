#include "headers.h"
#include "info.h"
#include "NumOf.h"
#include "get.h"
#include "OutOfFind.h"
int findCom(int num, string param)
{
	info* commands = get();
	int length = NumOf();
	switch (num)
	{
	case 1:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].name == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 2:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].trainerLastname == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 3:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].city == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 4:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].countOfGames == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 5:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].countOfWin == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 6:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].countOfLoose == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 7:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].countOfDraw == param)
			{
				OutOfFind(i);
			}
		}
	}
	case 8:
	{
		for (size_t i = 0; i < length; i++)
		{
			if (commands[i].countOfPlayers == param)
			{
				OutOfFind(i);
			}
		}
	}
	default:
		break;
	}
	return 0;
}