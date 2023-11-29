#include <iostream>
#include <string>


//Задача: Человек и домашнее животное
//
//Создайте классы Person(Человек) и Pet(Домашнее животное).
//
//1. Класс Person должен включать в себя следующие характеристики :
//-Имя
//- Возраст
//- Пол
//- Метод introduce(), который выводит на экран информацию о человеке.
//
//2. Класс Pet должен включать в себя :
//-Кличку
//- Вид животного
//- Метод sound(), который возвращает звук, издаваемый животным(например, "Мяу" для кошки или "Гав" для собаки).
//
//3. Создайте объекты для нескольких людей и их домашних животных, затем вызовите методы introduce() для людей 
//и методы sound() для животных.
//
//Эта задача позволит вам продемонстрировать понимание основ ООП, включая создание классов, атрибутов, 
//методов и создание экземпляров классов.

class Pet
{
public:
    virtual std::string sound() const { return "бормотание"; }
    virtual std::string getType() const { return "Домашнее животное"; }
};

class Dog : public Pet
{
public:
    std::string sound() const override { return "Гав"; }
    std::string getType() const override { return "Собака"; }
};

class Cat : public Pet
{
public:
    std::string sound() const override { return "Мяу"; }
    std::string getType() const override { return "Кошка"; }
};

class Person
{
private:
    std::string name_;
    std::string age_;
    std::string gender_;
    Pet* pet_;

public:
    Person(const std::string& name, const std::string& age, const std::string& gender, Pet* pet)
        : name_(name), age_(age), gender_(gender), pet_(pet) {}

    void introduce() const
    {
        std::cout << "Информация о человеке:" << std::endl;
        std::cout << "Имя: " << name_ << std::endl;
        std::cout << "Возраст: " << age_ << std::endl;
        std::cout << "Пол: " << gender_ << std::endl;

        std::cout << "Домашнее животное: " << pet_->getType() << std::endl;
        std::cout << "Звук, издаваемый " << pet_->getType() << ": " << pet_->sound() << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Dog dog;
    Cat cat;
    Person person1("Джон", "30", "мужской", &dog);
    Person person2("Анна", "25", "женский", &cat);

    person1.introduce();
    person2.introduce();

    return 0;
}
