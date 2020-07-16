#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

int main ()
{
    SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    string file_in, word_in, word_fn;
    file_in = "base.txt";

    ofstream out (file_in, ios::out | ios::app);
    ifstream in (file_in.c_str (), ios::in);
    if (!in.good ())
    {
        clog << "Файл не найден.\n";
        exit (1);
    }
    cout << "Введите слово: ";
    cin >> word_fn;

    while (in >> word_in)
        if (word_in == word_fn)
        {
            cout << "Слово '" << word_in << "' найдено.\n";
            system ("PAUSE");
            in.close ();
            return 0;
        }
        if (word_in != word_fn)
        {
            cout << "Слово '" << word_fn << "' не найдено\n";
            out << word_fn << "\n";
            cout << "Новое слово '" << word_fn << "' добавлено\n";
            system ("PAUSE");
            in.close ();
            return 0;
        }
    in.close ();
    return 0;
}
