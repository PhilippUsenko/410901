#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Season {
	string month1;
	string month2;
	string month3;
};

ostream& operator<<(ostream& os, const Season& object)
{
	os << object.month1 << endl ;
	os << object.month2 << endl;
	os << object.month3 << endl;
	return os;
};



int main() {
	string peakedSeason;
	string path = "output.txt";
	Season summer;
	summer.month1 = "June";
	summer.month2 = "July";
	summer.month3 = "August";
	Season fall;
	fall.month1 = "September";
	fall.month2 = "October";
	fall.month3 = "November";
	Season winter;
	winter.month1 = "December";
	winter.month2 = "January";
	winter.month3 = "February";
	Season spring;
	spring.month1 = "March";
	spring.month2 = "April";
	spring.month3 = "May";

	cin >> peakedSeason;
	if (peakedSeason == "Summer") {
		ofstream fout;
		fout.open(path, ofstream::app);

		if (!(fout.is_open())) {
			cout << "Failed in opening file";
		}
		else {
			fout << summer;
		}
		fout.close();
	}
	else if (peakedSeason == "Fall") {
		ofstream fout;
		fout.open(path, ofstream::app);

		if (!(fout.is_open())) {
			cout << "Failed in opening file";
		}
		else {
			fout << fall;
		}
		fout.close();
	}
	else if (peakedSeason == "Winter") {
		ofstream fout;
		fout.open(path, ofstream::app);

		if (!(fout.is_open())) {
			cout << "Failed in opening file";
		}
		else {
			fout << winter;
		}
		fout.close();
	}
	else if (peakedSeason == "Spring") {
		ofstream fout;
		fout.open(path, ofstream::app);

		if (!(fout.is_open())) {
			cout << "Failed in opening file";
		}
		else {
			fout << spring;
		}
		fout.close();
	}
	else cout << "There are no such Seasons";
	ifstream fin;
	string Line;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Failed to open this file!";
	}
	else {
		Season someseason;
		while (getline(fin, Line)) 
		{
			cout << Line << "\n";
		}
	}
	fin.close();
	return 0;
}
