#include <iostream>
using namespace std;
const int arSz = 1000;
const int lim = 6;
int main()
{   

    int numbers[arSz];
    cout << "Введите размер массива: ";
    int realArSz;
    cin >> realArSz;
    cout << endl;
    for(int i = 0; i < realArSz; i++)
    {
        cout << "Введите " << i << "-ый элемент массива: ";
        cin >> numbers[i];
        cout << endl;
    }
    int *f = numbers, *s = &numbers[realArSz-1]; int temp;
    while(f != s) 
    {
        while(*f <= lim && f != s)
        {
            if(*s >lim)
            {
                temp = *s;
                *s = *f;
                *f = temp;
                break;
            }
            s--;
        }
        s = &numbers[realArSz-1];
        f++;
    }
    for(int j = 0; j< realArSz; j++)
    {
        cout << numbers[j] << " ";
    }
}
