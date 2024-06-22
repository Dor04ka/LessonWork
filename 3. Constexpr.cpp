//№3. Constexpr

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
using namespace std;

// функция, возвращающая константное значение, которое мы будем использовать в качестве размера массива
constexpr size_t ArraySize() {
	return 5;
}

// факториал числа типа int
constexpr int Factorial(int n) {
	return n == 0 ? 1 : n * Factorial(n - 1);
}


int main() {

	setlocale(LC_ALL, "ru");
	cout << "№3. Constexpr" << endl;

	// constexpr - спецификатор, с помощью которого можно создавать переменные, функции и даже объекты, которые будут рассчитаны на этапе компиляции
	// рассмотрим следующий простой пример
	int array[ArraySize()] = { 1,2,3,4,5 };
	for (size_t i = 0; i < ArraySize(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	// без данного ключевого слова или же с какими-то другими наименованиями данный код не работает :(
	
	// рассмотрим пример использования ключевого слова на примере функции вычисления факториала числа
	//           constexpr auto res = Factorial(14);     
	//           cout << res << endl;
	// здесь будет ошибка благодаря использованию constexpr
	// программа компилироваться не будет, т.к. результат факториала типа int превышает допустимые промежутки типа int. 
	// при помощи constexpr мы можем получить ошибку компиляции, что поможет нам избежать неправильных вычислений. 
	
	// пример работы 
	constexpr auto res = Factorial(5);
	cout << res << endl;
}
