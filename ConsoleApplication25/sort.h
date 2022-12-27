#ifndef sort
#define sort

#include "Header.h"
#include "Header2.h"
#include "Header1.h"
#include <array>
#include <algorithm>
void showSpartak(Data* data, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (data[i].club == "sportak") {
            outData(data[i]);
        }
    }
}
void compareData(Data* data, int n) {
    for (int i = 0; i < n; i++)
    {
        if (data[i].finish < "2:50:00")
            outData(data[i]);
    }
}
#endif