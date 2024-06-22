// №4 Auto

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№4. Auto" << endl;

	// в данном примере мы сравним вывод элементов вектора при помощи итератора и auto
	vector<string> musicGenres;
	musicGenres.reserve(7);
	musicGenres = { "pop", "metal", "rap", "jazz", "falk", "blues", "phonk" };
	// используем итератор для вывода элементов
	for (vector < string>::iterator i = musicGenres.begin(); i != musicGenres.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	// а теперь используем auto
	for (auto it = musicGenres.begin(); it != musicGenres.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	// получаем одинаковый вывод элементов. все работает :)
	// Использование auto позволяет упрощать код, а также предотвращает возможные ошибки, которые произошли бы, например, при изменении типа данных вектора

	// также можно рассмотреть использование auto для инициализации переменных
	auto a = 5;
	auto b = 3.14;
	auto c = 'q';
	auto d = "string";
	cout << "a - " << typeid(a).name() << endl;
	cout << "b - " << typeid(b).name() << endl;
	cout << "c - " << typeid(c).name() << endl;
	cout << "d - " << typeid(d).name() << endl;
}
