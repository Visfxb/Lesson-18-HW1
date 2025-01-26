#pragma once
#include <iostream>
using namespace std;

struct Employ
{
	char surname[20];
	int year;
	char position[20];
	int salary;
	char education[20];

	void printWorker() {
		cout << ".-------------------------------\n";
		cout << "|  Surname - " << surname << endl;
		cout << "|\n";
		cout << "|  Year - " << year << endl;
		cout << "|\n";
		cout << "|  Position - " << position << endl;
		cout << "|\n";
		cout << "|  Salary - " << salary << endl;
		cout << "|\n";
		cout << "|  Education - " << education << endl;
		cout << "'-------------------------------\n\n";
	}
};