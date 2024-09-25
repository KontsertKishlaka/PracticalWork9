## Программа демонстрации цикла WHILE

### Описание

Данная программа демонстрирует работу цикла while в языке C++.  

### Функционал

* Ввод числа: Пользователь вводит целое число.
* Проверка диапазона: Программа проверяет, находится ли введенное число в диапазоне от 1 до 15.
* Цикл while: Цикл выполняется до тех пор, пока введенное число не будет меньше текущего значения счетчика.
* Вывод информации: В процессе работы цикла выводится информация о текущем значении счетчика.
* Продолжение работы: После завершения цикла программа предлагает пользователю продолжить тестирование цикла или завершить программу.

### Использование

1. Сохраните код в файл main.cpp.
2. Скомпилируйте программу с помощью компилятора C++ (например, g++):
   g++ main.cpp -o main 
   
3. Запустите программу:
   ./main 
   
### Код
```C++
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
```

### Дополнительные сведения

* Программа использует цветной вывод для лучшей визуализации.
* Функция system("cls") очищает консоль перед каждым вводом.
* Программа поддерживает ввод символов "+" и "-" для продолжения или завершения программы.
* При неправильном вводе пользователем программа выводит сообщение об ошибке и просит повторить ввод.

### Задачи для самостоятельного решения

* Добавить возможность выбора диапазона значений для ввода числа.
* Добавить возможность изменения шага счетчика.
* Добавить возможность выбора режима работы цикла (до тех пор, пока не будет выполнено условие или пока не будет достигнуто определенное значение).
