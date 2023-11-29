#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>
#include <numeric>

//268. Missing Number

//Задача: "Учет товаров на складе"
//
//Вам нужно разработать программу для учета товаров на складе.Каждый продукт имеет определенное название, количество и стоимость.
//Вам нужно проанализировать данные о продуктах и предоставить информацию о суммарной стоимости товаров на складе 
//и о средней стоимости товара.
//
//Требования :
//
//    1. Создайте структуру или класс для представления каждого продукта, содержащего название, количество и стоимость.
//    2. Соберите данные о различных продуктах на складе.
//    3. Используйте агрегацию для вычисления общей стоимости товаров на складе и средней стоимости товара.
//    4. Выведите информацию о полученных результатах.

using namespace std;
struct Books
{
    size_t quantity;
    size_t cost;
    Books& operator+(Books& books)
    {
        quantity = +books.quantity;
        cost = +books.cost;
    }
};
struct Computers
{
    size_t quantity;
    size_t cost;
    Computers& operator+(Computers& computers)
    {
        quantity = +computers.quantity;
        cost = +computers.cost;
    }
};
struct Clothes
{
    size_t quantity;
    size_t cost;
    Clothes& operator+(Clothes& clothes)
    {
        quantity = +clothes.quantity;
        cost = +clothes.cost;
    }
};
class Warehouse
{
public:
    Warehouse(Clothes clothes, Computers computers, Books books) :
        clothes_(clothes), computers_(computers), books_(books) {}
    void GetClothes(Clothes& clothes)
    {
        clothes_ = clothes_ + clothes;
    }
    void GetComputers(Computers& computers)
    {
        computers_ = computers_ + computers;
    }
    void GetBooks(Books& books)
    {
        books_ = books_ + books;
    }
    void PrintClothes(Clothes& clothes)const
    {
        cout << "- Название: Одежда, Количество: " << clothes_.quantity << " Стоимость: " << clothes_.cost << endl;
    }
    void PrintComputers(Computers& computers)const
    {
        cout << "- Название: Компьютеры, Количество: " << computers_.quantity << " Стоимость: " << computers_.cost << endl;
    }
    void PrintBooks(Books& books)const
    {
        cout << "- Название: Книги, Количество: " << books_.quantity << " Стоимость: " << books_.cost << endl;
    }
    void Total_Cost()const
    {
        cout << "- Общая стоимость товаров на складе: " << sum();
        cout << "- Средняя стоимость товаров на складе: " << sum() / (books_.quantity + computers_.quantity + clothes_.quantity);
    }
private:
    size_t sum() const
    {
        return clothes_.cost * clothes_.quantity + computers_.cost * computers_.quantity + books_.cost * books_.quantity;
    }
    Clothes clothes_;
    Computers computers_;
    Books books_;
};

int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");


    return 0;
}
