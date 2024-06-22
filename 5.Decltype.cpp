// №5. Decltype

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;


int main() {

	setlocale(LC_ALL, "ru");
	cout << "№5. Decltype" << endl;

	double pi = 3.14;
	decltype(pi) y = 17.03; 
	// y будет того же типа, что и x, то есть int
	cout << "y - " << typeid(y).name() << endl;

	// пример для вектора
	vector<string> musicGenres;
	musicGenres.reserve(7);
	musicGenres = { "pop", "metal", "rap", "jazz", "falk", "blues", "phonk" };
	// decltype
	decltype(musicGenres.begin()) it;
	// Инициализируем итератор началом вектора и выводим элементы вектора
	it = musicGenres.begin();
	for (; it != musicGenres.end(); ++it) {
		cout << *it << " ";
	}
	// Decltype позволяет нам работать с векторами различными типами данных, избавляя нас, таким образом, от возможных ошибок
}
