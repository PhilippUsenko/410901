#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int num,b;
    cout<<"введите число от -999 до 999 ";
    cin>>num;
    b=0;
   
     if (num<0) 
        cout<< "отрицательное ";
     else if (num>0)
        cout<< "положительное "; 
     else if (num==0)
         cout<< "нулевое число";
     while (num!= 0)
     {
    num=num/10;
    b++;
     } 
     switch (b)
     {
     case 1:
     cout << "однозначное";
        break;
         case 2:
     cout << "двузначное";
        break;
         case 3:
     cout << "трёхзначное";
        break;
     
     default:
     cout << "Error";
        break;
     }
     

return 0;


}
