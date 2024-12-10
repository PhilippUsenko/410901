#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int x = 0, sum = 0;
    cout << "Vvedite stroky: ";
    getline(cin, s);

    for (int i = 0; i < size(s); i++) {
        if (s[i] == ' ') { sum++; };
    }

    int j = 0;
    string* a = new string[sum + 1];

    for (int i = 0; i < size(s); i++) {
        if (s[i] == ' ') {
            for (x; x < i; x++) {
                a[j] += s[x];
            }
            j++;
            x = i + 1;
        }
    }

    for (x; x < size(s); x++) {
        a[j] += s[x];
    }
    int h = 1;

    for (int i = 0; i < sum+1; i++) {
        string b = a[i];
        for (int j = 0; j < size(b); j++) {
            h++;
            if (h % 2 == 1) {
                b[j] = toupper(b[j]);
            }
       }
        cout << b << " ";
    }
    return 0;
}
