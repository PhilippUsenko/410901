#include <iostream>
#include <cmath>
using namespace std;

// ������������� ������� ��� ��������� ������������ �����
double multiply(double a, double b) {
    return a * b;
}

// ������������� ������� ��� ��������� ����������� �����
void multiply(double real1, double imag1, double real2, double imag2, double& resultReal, double& resultImag) {
    resultReal = real1 * real2 - imag1 * imag2; // �������� �����
    resultImag = real1 * imag2 + imag1 * real2; // ������ �����
}

int main() {
    setlocale(LC_ALL, "RU");

        double real1, imag1 = 0.0; // ������ �����
        double real2, imag2 = 0.0; // ������ �����

        cout << "������� ������ ����� (���� �����������, ������� ������ ����� ����� ������ ��� i): ";
        cin >> real1;
        if (cin.peek() != '\n') { // ���������, ���� �� ���� ������ �����
            cin >> imag1;
        }

        cout << "������� ������ ����� (���� �����������, ������� ������ ����� ����� ������ ��� i): ";
        cin >> real2;
        if (cin.peek() != '\n') { // ���������, ���� �� ���� ������ �����
            cin >> imag2;
        }

        // ���������, �������� �� ����� ������������� ��� ������������
        if (imag1 == 0.0 && imag2 == 0.0) {
            // ������������ �����
            cout << "��������� ��������� ������������ �����: " << multiply(real1, real2) << endl;
        }
        else {
            // ����������� �����
            double resultReal, resultImag;
            multiply(real1, imag1, real2, imag2, resultReal, resultImag);
            cout << "��������� ��������� ����������� �����: (" << real1 << " + " << imag1 << "i) * ("
                << real2 << " + " << imag2 << "i) = " << resultReal << " + " << resultImag << "i" << endl;
        }

    return 0;
}