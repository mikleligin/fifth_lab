#include "headers.h"
#include "info.h"
int addIn()
{
	ofstream on;
	on.open("out.txt", ios::app);
	char name[100], trainerLN[100], city[100];
	int countOfGames, countOfWin, CountOfLoose, CountOfDraw, countOfPlayers;
	info info;
	cout << "������� �������� ������� ";
	cin >> name;
	cout << "������� ������� ";
	cin >> trainerLN;
	cout << "����� ";
	cin >> city;
	cout << "������� ����� ";
	cin >> countOfGames;
	cout << "������� ������� ";
	cin >> countOfWin;
	cout << "������� �������� ";
	cin >> CountOfLoose;
	cout << "������� ����� ";
	cin >> CountOfDraw;
	cout << "���������� ���������� ";
	cin >> countOfPlayers;
	on << ">" << name << "|" << trainerLN << "|" << city << "|" << countOfGames << "|" << countOfWin << "|" << CountOfLoose << "|"
		<< CountOfDraw << "|" << countOfPlayers << "/ " << "\n";
	on.close();
	return 0;
}