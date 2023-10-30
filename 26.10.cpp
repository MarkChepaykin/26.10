#include <iostream>
#include <string>

using namespace std;

//Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай».С помощью
//конструктора установить имя каждого животного и его
//характеристики.

class Pet
{
public:
	string name;
	int height;
	int weight;
	string color;

	Pet(string n, int h, int w, string c) : name(n), height(h), weight(w), color(c) {}
};

class Cat : public Pet
{
public:

	Cat(string n, int h, int w, string c) : Pet(n, h, w, c) {}

	void meow() {
		cout << name << " meows\n";
	}

};

class Dog : public Pet
{
public:
	Dog(string n, int h, int w, string c) : Pet(n, h, w, c) {}

	void woof() {
		cout << name << " barks\n";
	}

};

class Parrot : public Pet
{
public:
	Parrot(string n, int h, int w, string c) : Pet(n, h, w, c) {}
	void talk() {
		cout << name << " talks\n";
	}
};

int main()
{
	Cat c("Kotik", 5, 5, "Gray");
	Dog d("Pesik", 8, 10, "Yellow");
	Parrot p("Ptichka", 5, 5, "Green");

	c.meow();
	d.woof();
	p.talk();
}
