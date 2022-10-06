#include "info.h"

info* SorterFor(info* command_to_zamena, string first, string second, int j)
{
	string alphabet = "אבגדהו¸זחטיךכלםמןנסעףפץקשצüûת‎‏ÿ";
	int to_first = 0;
	int to_second = 0;
	for (size_t k = 0; k < 32; k++)
	{
		if (alphabet[k] == first[0])
		{
			to_first = k;
		}
		if (alphabet[k] == second[0])
		{
			to_second = k;
		}
	}
	if (to_first > to_second)
	{
		swap(command_to_zamena[j], command_to_zamena[j + 1]);
		to_first = 0;
		to_second = 0;
	}
	return command_to_zamena;
}