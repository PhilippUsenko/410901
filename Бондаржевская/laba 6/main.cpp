//Ввести строку. Посчитать количество слов в строке и результат вывести на экран.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	int s = 0;

	cout << "Insert your text: " << endl;
	getline(cin, text);


	if (text[0] != ' ')
		s++;

	for (int i = 0; i < text.length(); i++) 
	{
		if ((text[i] == ' ') && (text[i+1] != ' ') && (text[i+1]!='\0'))
			s++;
	}
	cout << s;


	return 0;
}