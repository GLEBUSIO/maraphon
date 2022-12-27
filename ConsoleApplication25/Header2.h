#ifndef header2
#define header2

#include <iostream>
#include "Header1.h"
void outData(Data data) {
	std::cout << data.Number << ' ';
	std::cout << data.First_name << ' ';
	std::cout << data.Second_name << ' ';
	std::cout << data.Third_name << ' ';
	std::cout << data.start << ' ';
	std::cout << data.finish << ' ';
	std::cout << data.club << '\n';
}
#endif