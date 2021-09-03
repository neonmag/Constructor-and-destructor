#include <iostream>

using namespace std;

class Human // ���������� ������
{
	char* name; // ���������� �����
	char* surname;
	int age;
	double Kg;
public:
	Human() // ����������� �� ���������
	{
		cout << "Default constructor\n"; // �������� �� �����������������
		name = nullptr; // ����������� ���������� �� ������
		surname = nullptr;
		age = 0;
		Kg = 0.0;
	}
	Human(const char* n, const char* sname, int a, double k) // �����������
	{
		cout << "\nConstructor with params\n"; // �������� �� �����������������
		name = new char[strlen(n) + 1]; // �������� ������
		surname = new char[strlen(sname) + 1];
		strcpy_s(name, strlen(n) + 1, n); // �������� ������������ ���������
		strcpy_s(surname, strlen(sname) + 1, sname);
		age = a;
		Kg = k;
	}
	void Input() // ����� �����
	{
		name = new char[20]; // �������� ������
		surname = new char[20];
		cout << "Enter name: "; // ���� ���������� �������
		cin.getline(name, 19);
		cout << "\nEnter surname: ";
		cin.getline(surname, 19);
		cout << "\nEnter age: ";
		cin >> age;
		cout << "\nEnter weight: ";
		cin >> Kg;
	}
	void Print() // ����� ������
	{
		cout << "\nName: " << name;
		cout << "\nSurname: " << surname;
		cout << "\nAge: " << age;
		cout << "\nWeight: " << Kg;
	}
	~Human() // ����������
	{
		cout << "\nDestructor here\n"; // �������� �� �����������������
		delete[] name; // ������������ ������
		name = nullptr;
		delete[] surname;
		surname = nullptr;
	}
};

int main()
{
	Human h; // ������������� ������
	h.Input(); // ����� ������ �����
	h.Print(); // ����� ����� �����

	Human h2("Boryslav","Linchevsky",18,75.6); // ������������� ������ � ����������� �� ���������
	h2.Print(); // ����� ������ �����
}