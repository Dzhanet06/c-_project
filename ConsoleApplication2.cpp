// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {  // цикл for для факториала
        result *= i;
    }
    return result;
}

int main() {
    int choice;
    do {  // do...while для меню программы
        cout << "\nВыберите действие:\n";
        cout << "1. Сложить 2 числа\n";
        cout << "2. Вычесть первое из второго\n";
        cout << "3. Перемножить два числа\n";
        cout << "4. Разделить первое на второе\n";
        cout << "5. Возвести в степень N первое число\n";
        cout << "6. Найти квадратный корень из числа\n";
        cout << "7. Найти 1 процент от числа\n";
        cout << "8. Найти факториал из числа\n";
        cout << "9. Выйти из программы\n";
        cout << "Введите номер операции: ";
        cin >> choice;

        if (choice == 9) break;

        if (choice >= 1 && choice <= 5) {
            double num1, num2;
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;

            switch (choice) {
            case 1:
                cout << "Результат: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Результат: " << num2 - num1 << endl;
                break;
            case 3:
                cout << "Результат: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 == 0) cout << "Ошибка: Деление на ноль!\n";
                else cout << "Результат: " << num1 / num2 << endl;
                break;
            case 5:
                cout << "Результат: " << pow(num1, num2) << endl;
                break;
            }
        }
        else if (choice == 6  choice == 7  choice == 8) {
            double num;
            cout << "Введите число: ";
            cin >> num;

            if (choice == 6) {
                if (num < 0) cout << "Ошибка: Квадратный корень из отрицательного числа!\n";
                else cout << "Результат: " << sqrt(num) << endl;
            }
            else if (choice == 7) {
                cout << "Результат: " << num * 0.01 << endl;
            }
            else if (choice == 8) {
                if (num < 0 || floor(num) != num) {
                    cout << "Ошибка: Факториал определён только для неотрицательных целых чисел!\n";
                }
                else {
                    cout << "Результат: " << factorial((int)num) << endl;
                }
            }
        }
        else {
            cout << "Неверный ввод, попробуйте снова.\n";
        }

    } while (choice != 9);

    cout << "Выход из программы.\n";
    return 0;
}