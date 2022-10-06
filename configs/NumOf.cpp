#include "NumOf.h"
#include "headers.h"
int NumOf()
{
	ifstream fl;
	string nga;
	int c = 0;
	fl.open("out.txt");
	while (getline(fl, nga))
	{
		c++;
	}
	fl.close();
	return c;
}