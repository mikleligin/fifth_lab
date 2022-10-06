#include "info.h";
#include "NumOf.h"
int strOut(info* structOut)
{

	for (size_t i = 0; i < NumOf(); i++)
	{
		cout << "Структура " << i + 1 << ":";
		cout << structOut[i].name << " " << structOut[i].trainerLastname << " " << structOut[i].city << " " << structOut[i].countOfGames << " " << structOut[i].countOfWin << " "
			<< structOut[i].countOfLoose << " "
			<< structOut[i].countOfDraw << " "
			<< structOut[i].countOfPlayers << '\n';
	}
	return 0;

}