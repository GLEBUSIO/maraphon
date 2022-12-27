#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"
#include "Header2.h"
#include "Calculate.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    Data data[6];
    for (int i = 0; i < 6; i++)
    {
        data[i] = insertData();
    }
    int min;
    int n = 6;
    cout << "0-все из спартака 1 - все, у кого время лучше  2:50:00\n";
    cin >> min;
    if (min == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (data[i].club == "sportak")
            {
                outData(data[i]);
            }
        }
    }
    if (min == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (data[i].finish < "02:50:00")
            {
                outData(data[i]);
            }
        }
    }
    cout << endl;
    string m;
    cout << "Введите сортировку" << endl;
    cout << "1.пузырьком" << endl;
    cout << "2.быстрая" << endl;
    int f;
    cin >> f;
    cout << "Введите категорию" << endl;
    cout << "1.по воpрастанию времени пробега" << endl;
    cout << "2.по нащванию клуба" << endl;
    int g;
    cin >> g;
    if (f == 1 && g == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (data[i].finish > data[i + 1].finish)
                {
                    m = data[i].finish;
                    data[i].finish = data[i + 1].finish;
                    data[i + 1].finish = m;
                    m = data[i].club;
                    data[i].club = data[i + 1].club;
                    data[i + 1].club = m;
                    m = data[i].Number;
                    data[i].Number = data[i + 1].Number;
                    data[i + 1].Number = m;
                    m = data[i].Second_name;
                    data[i].Second_name = data[i + 1].Second_name;
                    data[i + 1].Second_name = m;
                    m = data[i].First_name;
                    data[i].First_name = data[i + 1].First_name;
                    data[i + 1].First_name = m;
                    m = data[i].Third_name;
                    data[i].Third_name = data[i + 1].Third_name;
                    data[i + 1].Third_name = m;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            outData(data[i]);
        }
    }
    if (f == 1 && g == 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (data[i].club > data[i + 1].club)
                {
                    m = data[i].finish;
                    data[i].finish = data[i + 1].finish;
                    data[i + 1].finish = m;
                    m = data[i].club;
                    data[i].club = data[i + 1].club;
                    data[i + 1].club = m;
                    m = data[i].Number;
                    data[i].Number = data[i + 1].Number;
                    data[i + 1].Number = m;
                    m = data[i].Second_name;
                    data[i].Second_name = data[i + 1].Second_name;
                    data[i + 1].Second_name = m;
                    m = data[i].First_name;
                    data[i].First_name = data[i + 1].First_name;
                    data[i + 1].First_name = m;
                    m = data[i].Third_name;
                    data[i].Third_name = data[i + 1].Third_name;
                    data[i + 1].Third_name = m;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            outData(data[i]);
        }
    }
    if (f == 2 && g == 1)
    {
        for (int i = 0; i < n; i++)
        {

            int j = i;
            while (j > 0 && data[j-1].finish > data[j].finish)
            {
                string tmp = data[j].finish;
                data[j].finish = data[j-1].finish;
                data[j - 1].finish = tmp;
                string tmpp = data[j].club;
                data[j].club = data[j - 1].club;
                data[j - 1].club = tmpp;
                string tmppp = data[j].Number;
                data[j].Number = data[j - 1].Number;
                data[j - 1].Number = tmppp;
                string tmpppp = data[j].Second_name;
                data[j].Second_name = data[j - 1].Second_name;
                data[j - 1].Second_name = tmpppp;
                string tmppppp = data[j].First_name;
                data[j].First_name = data[j - 1].First_name;
                data[j - 1].First_name = tmppppp;
                string tmpppppp = data[j].Third_name;
                data[j].Third_name = data[j - 1].Third_name;
                data[j - 1].Third_name = tmpppppp;
                j--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            outData(data[i]);
        }
    }
    if (f == 2 && g == 2)
    {
        for (int i = 0; i < n; i++)
        {

            int j = i;
            while (j > 0 && data[j - 1].club > data[j].club)
            {
                string tmp = data[j].finish;
                data[j].finish = data[j - 1].finish;
                data[j - 1].finish = tmp;
                string tmpp = data[j].club;
                data[j].club = data[j - 1].club;
                data[j - 1].club = tmpp;
                string tmppp = data[j].Number;
                data[j].Number = data[j - 1].Number;
                data[j - 1].Number = tmppp;
                string tmpppp = data[j].Second_name;
                data[j].Second_name = data[j - 1].Second_name;
                data[j - 1].Second_name = tmpppp;
                string tmppppp = data[j].First_name;
                data[j].First_name = data[j - 1].First_name;
                data[j - 1].First_name = tmppppp;
                string tmpppppp = data[j].Third_name;
                data[j].Third_name = data[j - 1].Third_name;
                data[j - 1].Third_name = tmpppppp;
                j--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            outData(data[i]);
        }
    }
    cout << endl;
    string a;
    for (int i = 0; i < 6; i++)
    {
        int j = 1;
        if (data[i].finish < data[j].finish)
        {
            a = data[i].finish;
        }
    }
    cout << a;
}