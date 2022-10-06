#include "headers.h"
#include "info.h"
#include "OutOfFind.h"
#include "get.h"
int OutOfFind(int i) {
	info* commands = get();
	cout << "Команда: " << commands[i].name << " " << commands[i].trainerLastname << " "
		<< commands[i].city << " " << commands[i].countOfGames << " "
		<< commands[i].countOfWin << " " << commands[i].countOfLoose << " " << commands[i].countOfDraw << " " << commands[i].countOfPlayers << "\n";
	return 0;
}