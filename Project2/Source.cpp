#include <iostream>

using namespace std;

class Human // Объявление класса
{
	char* name; // Объявление полей
	char* surname;
	int age;
	double Kg;
public:
	Human() // Конструктор по умолчанию
	{
		cout << "Default constructor\n"; // Проверка на работоспособность
		name = nullptr; // Освобождаем переменные от мусора
		surname = nullptr;
		age = 0;
		Kg = 0.0;
	}
	Human(const char* n, const char* sname, int a, double k) // Конструктор
	{
		cout << "\nConstructor with params\n"; // Проверка на работоспособность
		name = new char[strlen(n) + 1]; // Выделяем память
		surname = new char[strlen(sname) + 1];
		strcpy_s(name, strlen(n) + 1, n); // Копируем передаваемые параметры
		strcpy_s(surname, strlen(sname) + 1, sname);
		age = a;
		Kg = k;
	}
	void Input() // Метод ввода
	{
		name = new char[20]; // Выделяем память
		surname = new char[20];
		cout << "Enter name: "; // Ввод параметров вручную
		cin.getline(name, 19);
		cout << "\nEnter surname: ";
		cin.getline(surname, 19);
		cout << "\nEnter age: ";
		cin >> age;
		cout << "\nEnter weight: ";
		cin >> Kg;
	}
	void Print() // Метод вывода
	{
		cout << "\nName: " << name;
		cout << "\nSurname: " << surname;
		cout << "\nAge: " << age;
		cout << "\nWeight: " << Kg;
	}
	~Human() // Деструктор
	{
		cout << "\nDestructor here\n"; // Проверка на работоспособность
		delete[] name; // Освобождение памяти
		name = nullptr;
		delete[] surname;
		surname = nullptr;
	}
};

int main()
{
	Human h; // Инициализация класса
	h.Input(); // Вызов метода ввода
	h.Print(); // Вызов метод ввода

	Human h2("Boryslav","Linchevsky",18,75.6); // Инициализация класса с параметрами по умолчанию
	h2.Print(); // Вызов метода ввода
}