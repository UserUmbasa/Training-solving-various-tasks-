#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//Задача:
//У вас есть список имен, представленный в виде вектора строк.Вам необходимо выполнить несколько операций с этим списком с 
//использованием STL.

//Требуется:
//1. Отсортировать имена в лексикографическом порядке.
//2. Удалить дубликаты имен.
//3. Вывести отсортированный список имен без дубликатов.

int main() {
    std::vector<std::string> names = { "Alice", "Bob", "Charlie", "David", "Alice", "Alice", "Emily" };

    // Сортировка имен в лексикографическом порядке
    std::sort(names.begin(), names.end());

    // Удаление дубликатов имен
    names.erase(std::unique(names.begin(), names.end()), names.end());

    // Вывод отсортированного списка имен без дубликатов
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
