#include <iostream>
#include <ctime>
#include <clocale>
#include <sstream>

using namespace std;

int main()
{
    string message;
    cout << "vvedite stroky" << endl;
    getline(cin, message);
    cout << message << endl;

    int min_val = 0;
    size_t min_length = SIZE_MAX;

    for (int i = 0; i <= message.length(); i++)
    {
        if (message[i] == ' ')
        {
            if (min_val > 0 && min_val < min_length)
            {
                min_length = min_val;
            }

            min_val = 0;
        }
        else
        {
            min_val++;
        }
    }
    if (min_val > 0 && min_val < min_length)
    {
        min_length = min_val;
    }

    cout << "minimalnaya dlina: " << min_length << endl;

    return 0;
}
