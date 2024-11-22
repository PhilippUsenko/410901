#include <iostream>
#include <fstream>
using namespace std;

// создание схемы структуры
struct Airplane {
    string model;
    string type;
    int year;
};

string AirplaneType, filename = "hello.txt";

// функция выбора необходимого типа
void choosing() {
    int numOfType;
    cout << "Choose which type of airplanes you need:" << endl <<
        "1 - passenger airplanes" << endl << "2 - military planes" << endl <<
        "3 - cargo airplanes" << endl << "4 - private airplanes" << endl;
    cin >> numOfType;
    if (numOfType == 1) {
        AirplaneType = "passenger";
    }
    else if (numOfType == 2) {
        AirplaneType = "military";
    }
    else if (numOfType == 3) {
        AirplaneType = "cargo";
    }
    else if (numOfType == 4) {
        AirplaneType = "private";
    }
    else {
        cout << "Error !" << endl << "Planes of this type weren't found";
    }
}

//функция поиска по указанному типу

void findType(Airplane arr[], int n, string AirplaneType) {
    ofstream fin;
    fin.open(filename);
    if (fin.is_open()) {
        for (int i = 0; i < n; i++) {
            if (arr[i].type == AirplaneType) {
                fin << arr[i].model << ", " << arr[i].year << endl;
                cout << arr[i].model << ", " << arr[i].year << endl;
            }
        }      
    }
    else {
        cout << "Error opening file";
    }
    fin.close();
}

//главная функция
int main() {
    choosing();
    Airplane arr[] = {
        {"Boeing 737", "passenger", 2015},
        {"Airbus A320", "passenger", 2018},
        {"Airbus A380", "passenger", 2007},
        {"Concorde", "passenger", 1976 },
        {"Embraer E190", "passenger", 2004},
        {"F-35 Lightning II", "military", 2015},
        {"Antonov An-225", "cargo", 1988},
        {"Cessna 172", "passenger", 2012},
        {"Lockheed Martin F-22", "military", 2005},
        {"Boeing 747", "passenger", 2010},
        {"Cessna 172", "private", 1956},
        {"McDonnell Douglas F-15", "military", 1976},
        {"Lockheed C-130 Hercules", "cargo", 1956},
        {"Sukhoi Su-27", "military", 1985},
    };
    if (!(AirplaneType == "passenger" || AirplaneType == "military" || AirplaneType == "cargo" || AirplaneType == "private")) { return 0; }
    int n = sizeof(arr);
    findType(arr, n, AirplaneType);
    return 0;
}
