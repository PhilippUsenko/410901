#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

using namespace std;

struct Product {
    string name;
    string number;
    unsigned int amount;
    double price1;
    double price;
};

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);

    Product information[5];
    information[0] = { "кока кола","1",100,1.78, 0.00 };
    information[1] = { "спрайт","2",84,1.89, 0.00 };
    information[2] = { "фанта","3",36,1.66,0.00};
    information[3] = { "пепси","4",75,1.72,0.00};
    information[4] = { "фреш бар","5",27,1.53,0.00};

    cout << "Данные о товарах:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "-------------------------------------------" << endl;
        cout << "Номер товара:" << information[i].number << endl;
        cout << "Название:" << information[i].name << endl;
        cout << "Количество:" << information[i].amount << endl;
        cout << "Стоимость:" << information[i].price1 << endl;

        information[i].price = information[i].amount * information[i].price1;

        cout << "Цена:" << information[i].price << endl;
    }
    
    int a;
    while (true)
    {
        cout << "-------------------------------------------" << endl;
        cout << "Внести изменения (1-да/0-нет)?" << endl;
        cin >> a;
        if (a == 1)
        {
            string num;
            cout << "Введите номер товара:" << endl;
            cin >> num;

            for (int i = 0; i < 5; i++)
            {
                if (num == information[i].number)
                {
                    unsigned int am;

                    cout << "Новое количество товара:" << endl;
                    cin >> am;
                    information[i].amount = am;
                }
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "-------------------------------------------" << endl;
        cout << "Номер товара:" << information[i].number << endl;
        cout << "Название:" << information[i].name << endl;
        cout << "Количество:" << information[i].amount << endl;
        cout << "Стоимость:" << information[i].price1 << endl;

        information[i].price = information[i].amount * information[i].price1;

        cout << "Цена:" << information[i].price << endl;
    }
   

    ofstream file;
    file.open("products.txt");
    if (!file.is_open())
        cout << "Ошибка открытия файла!";
    else 
        for (int i = 0; i < 5; i++)
        {
            file << "Номер товара:" << information[i].number << endl;
            file << "Название:" << information[i].name << endl;
            file << "Количество:" << information[i].amount << endl;
            file << "Стоимость:" << information[i].price1 << endl;

            information[i].price = information[i].amount * information[i].price1;

            file << "Цена:" << information[i].price << endl << endl;
        }
    file.close();
    return 0;
}
