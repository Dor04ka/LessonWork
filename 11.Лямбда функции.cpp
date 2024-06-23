// №11. Лямбда функции

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
#include <algorithm>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№11. Лямбда функции" << endl;

    // создали вектор
    vector<int> v = { 52, -777, 13, 39, -8, 0, 165 };
    v.reserve(7);

    // сортируем вектор в порядке возрастания
    sort(v.begin(), v.end(), [](int a, int b) {
        return a < b;
        });

    // вывод элементов
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}
