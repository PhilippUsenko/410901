#include <iostream>
#include <string>
using namespace std;
int main() {
	string stroka;//начальная строка
	cout << "Enter string: ";
	getline(cin, stroka);
	string result;//итоговая строка
	for (int i=0;i<stroka.size();i++) //перебор начальной строки
	{
		bool duplicate = false;//для проверки, был ли символ в результате
		for (int j = 0; j < result.size(); j++) {//перебор итоговой строки
			if (stroka[i] == result[j]) 
			{
				duplicate = true;//если совпадающий символ найден, duplicate = true
				break;
			}
		}
		if (!duplicate) {//если символ не совпадает, он добавляется в итоговую строку
			result += stroka[i];
		}
	}
	cout << "Your final string: " << result << endl;
	return 0;

}