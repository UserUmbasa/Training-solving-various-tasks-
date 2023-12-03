using namespace std;



#include<iostream>

//номер телефона
struct Phone
{
    int area_code = 0;
    int area_station = 0;
    int number_user = 0;

};
//перегрузка для вывода структуры
ostream& operator<<(ostream& out, Phone& phone)
{
    out << '(' << phone.area_code << ") " << phone.area_station << '-' << phone.number_user;
    return out;

}
int main() {
    setlocale(LC_ALL, "Russian");
    //конструктор по умолчанию для моего номера
    Phone num = { 212,767,8900 };
    //ваш номер
    Phone num_user;
    cout << "Введите код города, номер станции и номер абонента " << endl;
    cout << "Код города ?" << endl; cin >> num_user.area_code;
    cout << "Номер станции ?" << endl; cin >> num_user.area_station;
    cout << "Номер абонента ?" << endl; cin >> num_user.number_user;

    cout << "Мой номер " << num << endl;
    cout << "Ваш номер " << num_user << endl;
}