//№2. Initializer_list<T>

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
using namespace std;

// функция, аргументами которой служит список значений в фигурных скобках
void printValues(initializer_list<int> values) {
	for (auto value : values) {
		cout << value * 2 << " ";
	}
	cout << endl;
}

int main() {

	setlocale(LC_ALL, "ru");

	cout << "№2. Initializer_list<T>" << endl;
	// В данном примере мы рассмотрим вектор, который будем заполнять без push_back()
	vector<string> musicGenres;
	musicGenres.reserve(7);
	// заполним вектор 
	musicGenres = { "pop", "metal", "rap", "jazz", "falk", "blues", "phonk" };
	// используем итератор для вывода элементов
	for (auto it = musicGenres.begin(); it != musicGenres.end(); ++it) {
		std::cout << *it << " ";
	}

	cout << endl; 

	// с вектором закончили. Теперь рассмотрим еще один пример, на этот раз - с функцией
	// функция принимает initializer_list<int>, что позволяет передавать список значений в фигурных скобках напрямую в качестве аргумента
	printValues({ 1, 2, 3, 4, 5 }); 
}
