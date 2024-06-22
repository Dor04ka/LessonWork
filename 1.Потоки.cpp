//№1. Потоки

#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
using namespace std;

// данная функция используется для имитации большого участка кода, требующего использования многопоточного программирования
void DoWork() {
	for (size_t i = 0; i < 10; i++) {
		cout << "DoWork" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}

int main() {

	setlocale(LC_ALL, "ru");

	cout << "№1. Потоки." << endl;
	// В даном примере мы будет имитировать длительное выполнение участка программы, которое мы обходим при помощи многопоточного программирования
	// thread даст нам возможность использовать потоки, а chrono - имитировать задержку
	thread th(DoWork);
	for (size_t i = 0; i < 10; i++) {
		cout << "main" << endl;
		this_thread::sleep_for(chrono::milliseconds(300));
	}
	th.join();
	cout << endl;
}
