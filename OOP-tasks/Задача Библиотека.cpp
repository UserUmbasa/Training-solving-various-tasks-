#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
//** Задача: Библиотека * *
//
//Создайте классы, представляющие упрощенную модель библиотеки.
//
//1. Создайте класс `Book` (Книга), который содержит следующие атрибуты :
//-Название книги
//- Автор
//- Год издания
//- Метод для вывода информации о книге
//
//2. Создайте класс `Library` (Библиотека), который содержит в себе коллекцию книг(например, с использованием стандартного контейнера `std::vector<Book>`).
//    - Метод для добавления книги в коллекцию
//    - Метод для удаления книги из коллекции
//    - Метод для поиска книги по названию или автору
//    - Метод для вывода информации о всех книгах в библиотеке
//
//    3. Создайте несколько объектов класса `Book` и добавьте их в объект класс `Library`. Затем продемонстрируйте использование методов для управления коллекцией книг.
//
//    Данная задача позволит вам закрепить навыки работы с классами, методами, коллекциями и методами доступа к атрибутам класса.
class Book
{
public:
    Book(const std::string& Title_of_the_book, const std::string& Author, int Year_of_publication)
    {
        Title_of_the_book_ = Title_of_the_book;
        Author_ = Author;
        Year_of_publication_ = Year_of_publication;
    }
    void Print() const
    {
        std::cout << "Название книги: " << Title_of_the_book_ << std::endl;
        std::cout << "Автор произведения: " << Author_ << std::endl;
        std::cout << "Год выпуска: " << Year_of_publication_ << std::endl;
    }
    std::string Get_Title_of_the_book_() const
    {
        return Title_of_the_book_;
    }
    std::string Get_Author_() const
    {
        return Author_;
    }
    int Get_Year_of_publication_() const
    {
        return Year_of_publication_;
    }
    bool operator==(const Book& book) {
        return book.Author_ == Author_ && book.Title_of_the_book_ == Title_of_the_book_ && book.Year_of_publication_ == Year_of_publication_;
    }
private:
    std::string Title_of_the_book_;// - Название книги
    std::string Author_;//  - Автор
    int Year_of_publication_;// -Год издания
};
class Library
{
public:
    // - Метод для добавления книги в коллекцию
    void SetBook(Book& book)
    {
        books_.push_back(book);
    }
    // - Метод для удаления книги из коллекции
    void DeleteBook(Book& book)
    {
        auto pos = std::find(books_.begin(), books_.end(), book);
        if (pos != books_.end())
        {
            books_.erase(pos);
        }
        else
        {
            std::cout << "В библиотеке нет такой книги" << std::endl;
        }
    }
    // - Метод для поиска книги по названию или автору
    Book Find_Book(std::string str)
    {
        auto pos = std::find_if(books_.begin(), books_.end(), [&str](auto& book)
            {
                if (book.Get_Author_() == str || book.Get_Title_of_the_book_() == str)
                {
                    return &book;
                }
            });
        if (pos != books_.end())
        {
            return *pos;
        }
        else
        {
            std::cout << "В библиотеке нет такой книги" << std::endl;
        }
    }
    //- Метод для вывода информации о всех книгах в библиотеке
    void Show_All_Books() const
    {
        if (books_.empty())
        {
            std::cout << "В библиотеке ничего нет" << std::endl;
        }
        else
        {
            for (auto& book : books_)
            {
                book.Print();
                std::cout << std::endl;
            }
        }
    }
private:
    std::vector<Book> books_;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Library library;
    Book book("Идиот", "Достоевский", 1867);
    Book book1("Дневник писателя", "Достоевский", 1867);
    library.SetBook(book);
    library.SetBook(book1);
    library.Show_All_Books();
    library.DeleteBook(book);
    library.Show_All_Books();

    return 0;
}
