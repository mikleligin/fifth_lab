#include "headers.h"
#include "sort.h"
#include "info.h"
#include "NumOf.h"
#include "get.h"
#include "SorterFor.h"
int sort(int num)
{

	info* command_repl = get();
	int length = NumOf();
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length - i - 1; j++)
		{
			//switch is doesn't work.
			if (num == 1)
			{


				string first = command_repl[j].name;
				string second = command_repl[j + 1].name;
				command_repl = SorterFor(command_repl, first, second, j);
			}
			if (num == 2)
			{

				string first = command_repl[j].trainerLastname;
				string second = command_repl[j + 1].trainerLastname;
				command_repl = SorterFor(command_repl, first, second, j);
			}
			if (num == 3)
			{
				string first = command_repl[j].city;
				string second = command_repl[j + 1].city;
				command_repl = SorterFor(command_repl, first, second, j);
			}
			if (num == 4)
			{
				if (command_repl[j].countOfGames > command_repl[j + 1].countOfGames)
				{
					swap(command_repl[j], command_repl[j + 1]);
				}
			}
			if (num == 5)
			{
				if (command_repl[j].countOfWin > command_repl[j + 1].countOfWin)
				{
					swap(command_repl[j], command_repl[j + 1]);
				}
			}
			if (num == 6)
			{
				if (command_repl[j].countOfLoose < command_repl[j + 1].countOfLoose)
				{
					swap(command_repl[j], command_repl[j + 1]);
				}
			}
			if (num == 7)
			{
				if (command_repl[j].countOfDraw > command_repl[j + 1].countOfDraw)
				{
					swap(command_repl[j], command_repl[j + 1]);
				}
			}
			if (num == 8)
			{
				if (command_repl[j].countOfPlayers > command_repl[j + 1].countOfPlayers)
				{
					swap(command_repl[j], command_repl[j + 1]);
				}
			}
		}
	}



	for (size_t i = 0; i < NumOf(); i++)
	{
		cout << "Структура " << i + 1 << ":";
		cout << command_repl[i].name << " "
			<< command_repl[i].trainerLastname << " "
			<< command_repl[i].city << " "
			<< command_repl[i].countOfGames << " "
			<< command_repl[i].countOfWin << " "
			<< command_repl[i].countOfLoose << " "
			<< command_repl[i].countOfDraw << " "
			<< command_repl[i].countOfPlayers << '\n';
	}

	return 0;
}