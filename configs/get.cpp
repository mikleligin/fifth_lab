#include "headers.h"
#include "info.h"
#include "get.h"
#include "NumOf.h"
info* get()
{
	ifstream StrOutOfFile;
	StrOutOfFile.open("out.txt");
	int cnt = NumOf();
	info* commands = new info[cnt];

	string line;
	//int countOfGame = 0, countOfPoint = 0, countOfPlayers = 0;
	string st;

	for (size_t i = 0; i < cnt; i++)
	{
		string name, trainerLastname, city, games, win, loose, draw, players;
		int countOf = 0;
		info NewCommand;
		getline(StrOutOfFile, line);
		for (size_t k = 0; line[k] != '/'; k++)
		{
			//cout << line[k];
			if ((line[k] == '|' || line[k] == '>') && (line[k + 1] != '/'))
			{
				countOf++;
				//cout << countOf;
				for (size_t j = k + 1; line[j] != '|' && line[j] != '/'; j++)
				{
					if (countOf == 1)
					{


						name += line[j];
					}
					if (countOf == 2)
					{

						trainerLastname += line[j];
					}
					if (countOf == 3)
					{

						city += line[j];
					}
					if (countOf == 4)
					{

						games += line[j];
					}
					if (countOf == 5)
					{

						win += line[j];
					}
					if (countOf == 6)
					{

						loose += line[j];
					}
					if (countOf == 7)
					{
						draw += line[j];
					}
					if (countOf == 8)
					{
						players += line[j];
					}

				}
			}

		}
		//cout << name + "\n";
		//cout << name;
		NewCommand = {
				name,
		 trainerLastname,
		 city,
		games,
		 win,
		 loose,
		 draw,
		players
		};
		commands[i] = NewCommand;
		//cout << NewCommand.city;
		//cout << NewCommand.countOfGames;
		//cout << '\n';
		//cout << &commands[i].name;
	}
	//cout << commands[1].city;
	return commands;
}