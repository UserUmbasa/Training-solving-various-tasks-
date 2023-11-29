#pragma once

int sumOfNumbers(std::vector<int>& numbers);

void Foo()
{
    std::vector<int>arr = { 1,2,3,4,5 };
    auto sum = sumOfNumbers(arr);
}

//**Задача : "Расчет суммы чисел" * *
//
//Ваша задача - переписать функцию для расчета суммы чисел, используя более чистый и более эффективный код.

int sumOfNumbers(std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}
//Ваша задача - переписать этот код, используя стандартные алгоритмы или более простые конструкции для получения суммы чисел из вектора 
//и корректно вернуть результат.Примените рефакторинг, чтобы повысить читаемость, эффективность и поддерживаемость кода.

//Решение
int sumOfNumbers(std::vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0);
}

//std::accumulate принимает диапазон элементов и начальное значение для аккумулирования и возвращает сумму всех значений в диапазоне, 
//начиная с начального значения.