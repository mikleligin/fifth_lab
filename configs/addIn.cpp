#include "headers.h"
#include "info.h"
int addIn()
{
	ofstream on;
	on.open("out.txt", ios::app);
	char name[100], trainerLN[100], city[100];
	int countOfGames, countOfWin, CountOfLoose, CountOfDraw, countOfPlayers;
	info info;
	cout << "Введите название команды ";
	cin >> name;
	cout << "Фамилию Тренера ";
	cin >> trainerLN;
	cout << "Город ";
	cin >> city;
	cout << "Сколько играл ";
	cin >> countOfGames;
	cout << "Сколько победил ";
	cin >> countOfWin;
	cout << "Сколько проиграл ";
	cin >> CountOfLoose;
	cout << "Сколько ничьи ";
	cin >> CountOfDraw;
	cout << "Количество подопечных ";
	cin >> countOfPlayers;
	on << ">" << name << "|" << trainerLN << "|" << city << "|" << countOfGames << "|" << countOfWin << "|" << CountOfLoose << "|"
		<< CountOfDraw << "|" << countOfPlayers << "/ " << "\n";
	on.close();
	return 0;
}