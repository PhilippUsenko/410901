#include <iostream> 
using namespace std; 
int main() 
{ 
 setlocale(LC_ALL, "Russian"); 
 float OX, OY; 
  cout << "введите координату X "; 
  cin >> OX; 
  cout << "введите координату Y "; 
  cin >> OY; 
  if (OX > 0 && OY > 0) 
   cout << "Первая четверть"; 
  else  
   if (OX < 0 && OY > 0) 
    cout << "Вторая четверть"; 
   else  
    if (OX < 0 && OY < 0) 
     cout << "Третья четверть"; 
    else 
     cout << "Четверть четверь"; 
return 0; 
} 
