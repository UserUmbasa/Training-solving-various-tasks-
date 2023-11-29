#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>

//1342. Number of Steps to Reduce a Number to Zero

using namespace std;

//**Задача: "Музыкальная группа"**
//**Требования:**
//
//1. Создайте класс Musician, представляющий музыканта.У музыканта должны быть атрибуты, такие как имя, возраст и инструмент, на котором он играет.
//2. Создайте класс Instrument, представляющий музыкальный инструмент.У инструмента должны быть атрибуты, такие как тип инструмента(гитара, барабаны и т.д.) и звук, который он издает.
//3. Класс Musician должен содержать объект класса Instrument в качестве своего члена данных, показывая, на каком инструменте играет музыкант.
//
//** Что ваша программа должна делать : **
//
//1. Создавать объекты музыкантов и инструментов.
//2. Выводить информацию о музыкантах и их инструментах.

class Instrument
{
public:
    Instrument(const string& type, const string melody)
    {
        type_ = type;
        melody_ = melody;
    }
    string GetType() const
    {
        return type_;
    }
    string GetMelody() const
    {
        return melody_;
    }
private:
    string type_;
    string melody_;

};


class Musician
{
public:
    Musician(const string& name, const int age, Instrument instrument) :name_(name), age_(age), instrument_(instrument)
    {
    }
    void play() const
    {
        cout << name_ << " plays the " << instrument_.GetType() << " (" << instrument_.GetMelody() << " music)" << endl;
    }

private:
    string name_;
    int age_;
    Instrument instrument_;
};

int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");
    Musician musician1("John", 25, Instrument("Guitar", "Rock"));
    Musician musician2("Lisa", 27, Instrument("Piano", "Classical"));
    musician1.play(); // "John plays the Guitar (Rock music)"
    musician2.play(); // "Lisa plays the Piano (Classical music)"


    return 0;
}
//
//Эта задача демонстрирует концепцию композиции, где один объект содержит в себе другой объект.
//Музыкант содержит в себе инструмент, на котором он играет, и таким образом образуется композиция объектов.