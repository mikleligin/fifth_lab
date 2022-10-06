#include "headers.h"
#include "NumOf.h"
#include "info.h"
#include "addIn.h"
#include "get.h"
#include "findCom.h"
#include "sort.h"
#include "strOut.h"

int main()
{
	struct info* info;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);		
	cout << "Выбор: " << endl;
	while (true)
	{
		int choice;
		cout << "1. Ввести в структуру\n";
		cout << "2. Вывести структуры\n";
		cout << "3. Поиск элемента\n";
		cout << "4. Сортировка по элементу\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			addIn();
			break;
		}
		case 2:
		{
			info = get();
			
			strOut(info);
			break;
		}
		case 3:
		{	
			int num = 0;
			string param;
			cout << "Введите параметр\n 1.Имя команды\n 2.Имя тренера\n 3.Город\n 4.Кол-во игр\n 5.Кол - во выйгрышей\n 6.Кол - во проигрышей\n 7.Кол - во игр в ничью\n 8. Кол - во игроков";
			cin >> num;
			cout << "Введите параметр: ";
			cin >> param;
			findCom(num,param);
			break;
		}
		case 4:
		{
			int num = 0;
			cout << "Сортировка по:\n";
			cout<<"Введите параметр\n 1.Имя команды\n 2.Имя тренера\n 3.Город\n 4.Кол - во игр\n 5.Кол - во выйгрышей\n 6.Кол - во проигрышей\n 7.Кол - во игр в ничью\n 8. Кол - во игроков";
			cin >> num;
			sort(num);
		}
		default:
		
			break;
		}
	}
	
	cout << "\n\n\n";
}
