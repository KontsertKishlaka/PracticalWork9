#include <iostream>

using namespace std;

void printInterface();
bool isUserInputContinue();
bool checkNumberRange(short userInputNumber);

int main()
{
	setlocale(0, "");

	do printInterface();
	while (isUserInputContinue());

	return 0;
}

void printInterface() {
	system("cls");

	cout << "[+] Цикл \"WHILE\"\n\n[+] Введите число: ";
	short userInputNumber;
	cin >> userInputNumber;

	short numberOfTimesWorked = 1;

	while (checkNumberRange(userInputNumber) && userInputNumber >= numberOfTimesWorked) {
		cout << "\nЦикл отработал. \x1b[94mКруг: " << numberOfTimesWorked << ".\x1b[0m";
		numberOfTimesWorked++;
	}
}

bool isUserInputContinue() {
	cout << "\n\nПродолжаем тестирование цикла? Введите \x1b[92m\"+\"\x1b[0m, чтобы \x1b[92mпродолжить\x1b[0m или \x1b[91m\"-\"\x1b[0m, чтобы \x1b[91mзавершить программу.\x1b[0m";

	char userInputChar;
	cin >> userInputChar;

	while (userInputChar == '+' || userInputChar == '-') {
		switch (userInputChar)
		{
		case '+': {
			cout << "\x1b[91mВведена некорректная операция\x1b[0m. Повторите ввод.";
			return true;
		}
		case '-':
			return false;
		default:
			cout << "\x1b[91mВведена некорректная операция\x1b[0m. Повторите ввод.";
			break;
		}
	}

	return false;
}

bool checkNumberRange(short userInputNumber) {
	if (userInputNumber < 1) {
		cout << "Введённое число \x1b[91mне может быть меньше 1\x1b[0m. Повторите ввод.";
		return false;
	}
	else if (userInputNumber > 15) {
		cout << "Введённое число \x1b[91mне может быть больше 15\x1b[0m. Повторите ввод.";
		return false;
	}

	return true;
}