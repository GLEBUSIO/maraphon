#ifndef header1
#define header1

#include "Header.h"
#include <fstream>
std::fstream in("data.txt");
Data insertData()
{
	Data data;
	in >> data.Number;
	in >> data.First_name;
	in >> data.Second_name;
	in >> data.Third_name;
	in >> data.start;
	in >> data.finish;
	in >> data.club;
	return data;
}
#endif
