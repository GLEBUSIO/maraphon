#ifndef calculate
#define calculate
#include <iostream>
#include <string>
#include "Header.h"
#include "Header2.h"
using namespace std;
string Calculate(Data* data, int size)
{
    string a;
    for (int i = 0; i < size; i++)
    {
        int j = 1;
        if (data[i].finish < data[j].finish)
        {
            a = data[i].finish;
        }
    }
    return  a;
    cout << endl;
}
#endif