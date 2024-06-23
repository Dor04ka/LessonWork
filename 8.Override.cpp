// №8. Override

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <initializer_list>
#include <typeinfo>
using namespace std;

// класс Пистолет
class Gun {
public:
	virtual void Shoot() {
		cout << "BANG!" << endl;
	}
};

// класс Пистолет-Пулемет, наследуемый от класса Пистолет
class SubmachineGun : public Gun {
public:
	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}
};

// класс Игрок, которому мы будем давать разные виды оружия
class Player {
public:
	void Shoot(Gun* gun) {
		gun->Shoot();
	}
};

int main() {

	setlocale(LC_ALL, "ru");
	cout << "№8. Override" << endl;

	Gun gun;                        // пистолет
	SubmachineGun submachinegun;    // пистолет-пулемет
	Player player;                  // игрок
	cout << "Дали пистолет: ";
	player.Shoot(&gun);
	cout << "Дали пистолет-пулемет: "; 
	player.Shoot(&submachinegun);

}
