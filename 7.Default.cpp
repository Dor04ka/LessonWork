// №7. Default

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

class Human {
public:

	// конструтор по умолчанию, конструктор с параметрами
	Human() = default;

	Human(string Name, int Age, int Weight) {
		this->Name = Name;
		this->Age = Age;
		this->Weight = Weight;
	}

	// конструктор копирования
	Human(const Human& other) = default;

	// оператор присваивания
	Human& operator = (const Human& other) = default;

	// деструктор
	~Human() = default;

	// метод вывода данных
	void printInfo() const {
		cout << "Name: " << Name << ", Age: " << Age << ", Weight: " << Weight << endl;
	}

private:
	// поля
	string Name;
	int Age;
	int Weight;
};

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№7. Default" << endl;

	// создаем различные объекты класса: без полей, с полями и копию
	Human humanDefault;
	Human a("Bogdan", 19, 500);
	Human b = a;

	// выводим информацию
	humanDefault.printInfo();
	a.printInfo();
	b.printInfo();
}
