// №9. Nullptr

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№9. Nullptr" << endl;

	// здесь будет совсем небольшой пример, а именно - создание указателя и очистка памяти при его удалении
	int* pa = new int;
    *pa = 10;
	cout << *pa << endl;      // 10
	delete pa;                // таким образом производится очистка ячейки
	pa = nullptr;             // очищаем номер ячейки
	
	// В коде при очистке динамической памяти обязательно сначала надо использовать delete, а затем nullptr. 
	// В противном случае может произойти утечка памяти. 

	// nullptr также использовался нами при работе с классами, однако принцип действия в тех ситуациях схожий, что дает повод не писать сложный код :)
	// ведь пример более чем наглядный :)
}
