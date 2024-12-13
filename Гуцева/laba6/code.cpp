#include <iostream>
#include <string>
#include <Windows.h>
#include<clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    string words;

    SetConsoleCP(1251);
    cout << "Введите строку:" << endl;
    getline(cin, words);


    char letters[] = { "аАоОуУеЕёЁыЫэЭяЯиИюЮ" };

    int count = 0;
    for (int amount = 0; amount < words.length(); amount++)
    {

        for (int i = 0; i < 20; i++)
        {

            if (words[amount] == letters[i])
            {
                count++;
                break;
            }
        }
    }

    cout << "Количество гласных букв русского алфавита в строке" << endl;
    cout << count << endl;

    return 0;
}
