#include <iostream>
#include <fstream>
using namespace std;

struct cars {
    char brand[10];          
    int year;    
    int month;  
};

int main() {
    setlocale(LC_ALL, "Russian");
    
   struct cars cars[8] = {
        {"Toyota",2024, 5},
        {"Ford", 2022, 11},
        {"BMW", 2023, 12},
        {"Porshe", 2021, 7},
        {"Jaguar", 2022, 8},
        { "KIA",  2024, 9 },
        { "Suzuki", 2023, 4 },
        { "Bentley", 2024, 3 }
    };

   string path = "cars.txt";
   ofstream fout;
      fout.open(path);
       if (!fout.is_open()) {
           cout << "Ошибка открытия файла" << endl;
           
       }
       fout << "Машины, прошедшие техосмотр менее года назад:\n";
       for (int i = 0; i < 8; i++) {
           int  monthsmax = (2024 - cars[i].year) * 12 + (11 - cars[i].month);

           if (monthsmax < 12) {
               fout << "Марка: " << cars[i].brand
                   << ", Дата техосмотра: " << cars[i].month << "/" << cars[i].year << "\n";
           }
       }
       fout.close();

       cout << "Информация записана в файл cars.txt\n";

       return 0;
   }

