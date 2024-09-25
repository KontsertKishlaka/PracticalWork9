#include <iostream>

using namespace std;

void printInterface();
void handleUserInput();
bool checkNumberRange(short userInputNumber);

int main()
{
	setlocale(0, "");

	printInterface();
	handleUserInput();

	return 0;
}

void printInterface() {
	system("cls");

	cout << "[+] Цикл \"WHILE\"\n\n[+] Введите число: ";
	short userInputNumber;
	cin >> userInputNumber;

	while (checkNumberRange(userInputNumber)) {
		short numberOfTimesWorked = 1;
		cout << "Цикл отработал. Круг: " << numberOfTimesWorked << ".";
		numberOfTimesWorked++;
	}
}

void handleUserInput() {
	cout << "Продолжаем тестирование цикла? Введите \"+\", чтобы продолжить или \"-\", чтобы завершить программу.";

	
}

bool checkNumberRange(short userInputNumber) {
	if (userInputNumber < 1) {
		cout << "Введённое число не может быть меньше 1. Повторите ввод.";
		return false;
	}
	else if (userInputNumber > 15) {
		cout << "Введённое число не может быть больше 15. Повторите ввод.";
		return false;
	}

	return true;
}