#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string text;
    int result = 0;
    cout << "¬ведите строку через пробелы : ";
    getline(cin, text);
    int n = text.length();
    for (int i = 0; i < n;) {
        while (i < n && text[i] == ' ') {
            i++;
        }

        int start = i;

        while (i < n && text[i] != ' ') {
            i++;
        }

        int end = i - 1;

        bool bukvae = false;
        for (int j = start; j <= end; j++) {
            if (tolower(text[j]) == 'e')
            {
                bukvae = true; 
                break;
            }
        }


        if ((tolower(text[start]) == tolower(text[end])) && bukvae) {
            result++;
        }
    }

    cout << "—лов с одинаковыми буквами в начале и в конце и содержит букву e: " << result;

    return 0;
}



