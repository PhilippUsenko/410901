#include <iostream>
#include <string>
using namespace std;
int main() {
	string stroka;//��������� ������
	cout << "Enter string: ";
	getline(cin, stroka);
	string result;//�������� ������
	for (int i=0;i<stroka.size();i++) //������� ��������� ������
	{
		bool duplicate = false;//��� ��������, ��� �� ������ � ����������
		for (int j = 0; j < result.size(); j++) {//������� �������� ������
			if (stroka[i] == result[j]) 
			{
				duplicate = true;//���� ����������� ������ ������, duplicate = true
				break;
			}
		}
		if (!duplicate) {//���� ������ �� ���������, �� ����������� � �������� ������
			result += stroka[i];
		}
	}
	cout << "Your final string: " << result << endl;
	return 0;

}