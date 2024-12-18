#include <iostream>
#include <string>
using namespace std;

//Дано натуральное число n.Выясните, можно ли представить
//данное число в виде произведения трех последовательных натуральных чисел.


//Используя перегрузку методов, создайте программу:
//а) для сложения целых чисел;
//б) для сложения комплексных чисел


bool number_representation(int n);
int addition(int a, int b);
string addition(string a, string b);
void converte(string x, string* nums_x);


int main(){
    int input_num;
    cout << "Enter number:" << endl;
    cin >> input_num;
    if (number_representation(input_num)) cout << "This number can be represented as the product of 3 consecutive natural numbers" << "\n\n";
    if (!number_representation(input_num)) cout << "This number cannot be represented as the product of 3 consecutive natural numbers" << "\n\n";


    cout << "Result: " << addition("-82i - 0.3", "-2 + 4i") << "\n\n";
    cout << "Result: " << addition(4, 8) << "\n\n";

    return 0;
}


bool number_representation(int n) {
    int num = 1;
    while (true) {
        int num_multiply = num * (num + 1) * (num + 2);
        if (num_multiply < n) num += 1;
        else if (num_multiply == n) return true;
        else return false;
    }
}


int addition(int a, int b)
{
    return a + b;
}


string addition(string a, string b) {
    string nums_a[2];
    string nums_b[2];

    converte(a, nums_a);
    converte(b, nums_b);

    //imaginary part at index 0, real part at index 1
    double numbers[2];
    numbers[0] = stod(nums_a[1]) + stod(nums_b[1]);
    numbers[1] = stod(nums_a[0]) + stod(nums_b[0]);

    char answer[200];
    if (numbers[1] < 0) snprintf(answer, sizeof answer, "%.1fi%.1f", numbers[0], numbers[1]);
    if (numbers[1] >= 0) snprintf(answer, sizeof answer, "%.1fi+%.1f", numbers[0], numbers[1]);

    return answer;
}

void converte(string x, string* nums_x) {
    //removing spaces from equation string
    for (int i = 0; i < 2; i++) {
        if (x[i] == ' ') {
            x.erase(i, 1);
        }
    }

    //Splitting a string into real and imaginary parts
    for (int i = 0; i < x.size(); i++) {
        if (!(x[i] == '+' || x[i] == '-') || i == 0) {
            nums_x[0] += x[i];
        }
        else {
            for (; i < x.size(); i++) {
                nums_x[1] += x[i];
            }
            break;
        }
    }

    //checking that the imaginary part is at index 1
    for (char l : nums_x[0]) {
        if (l == 'i') {
            swap(nums_x[0], nums_x[1]);
            break;
        }
    }

    //Filling the empty rows of the array with zeros
    for (int i = 0; i < 2; i++) {
        if (!(nums_x[i][0] == '-' || nums_x[i][0] == '+' || isdigit(nums_x[i][0]))) nums_x[i] += "0";
    }

    //Removing all characters except numbers
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < nums_x[i].size(); j++) {
            if (!(nums_x[i][j] == '-' || nums_x[i][j] == '+' || nums_x[i][j] == '.' || isdigit(nums_x[i][j]))) {
                nums_x[i].erase(j, 1);
            }
        }
    }

}