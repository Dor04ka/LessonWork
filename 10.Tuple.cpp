// №10. Tuple

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№10. Tuple" << endl;

	// создаем кортеж
	tuple<const char* , int, double, char> tup{ "Bogdan", 19, 500.52 , '7'};

	// выводим элементы
	cout << get<0>(tup) << ", " << get<1>(tup) << ", " << get<2>(tup) << ", " << get<3>(tup) << endl;
}
