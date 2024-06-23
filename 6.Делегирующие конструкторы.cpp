// №6. Делегирующие конструкторы

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

class Human {
public:
	// как бы выглядели наши конструторы (рассматриваем лишь некоторые из многих)
	//Human(string Name) {
		//this->Name = Name;
		//this->Age = 0;
		//this->Weight = 0; 
	//}
	// 
	//Human(string Name, int Age) {
		//this->Name = Name; 
		//this->Age = Age; 
		//this->Weight = 0; 
	//}
	//Human(string Name, int Age, int Weight) {
	    //this->Name = Name; 
		//this->Age = Age; 
		//this->Weight = Weight;
	//}
	
	// как они выглядят теперь
	Human(string Name) {
		this->Name = Name;
		this->Age = 0;
		this->Weight = 0; 
	}
	// этот конструктор будет работать с полем Name и Weight как предыдущий, добавляя работу с полем Age
	Human(string Name, int Age) :Human(Name) {
		this->Age = Age;
	}
	// этот конструктор работает с 3мя полями
	Human(string Name, int Age, int Weight) :Human(Name, Age) {
		this->Weight = Weight;
	}
	// поля
	string Name;
	int Age;
	int Weight;
};

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№6. Делегирующие конструкторы" << endl;

	// вот объект нашего класса, он принимает 3 параметра
	Human a("Bogdan", 19, 500);
	// вызывается конструтор с 3мя параметрами, но тот делегирует свой вызов второму конструтору с 2мя параметрами
	// второй же делегирует вызов первому конструктору. Получается такая "матрешка"
}
