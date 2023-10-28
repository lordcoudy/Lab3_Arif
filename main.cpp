#include <stdcpp.h>

#pragma region Шаблоны
#define precision float                         // Формат точности
#define Rf(R1, R2) (1 / (1 / R1 + 1 / R2))      // Формула общего сопротивления 1 вида
#define Rg(R1, R2) (R1 * R2 / (R1 + R2))        // Формула общего сопротивления 2 вида
#define cast static_cast<precision>             // Преобразование в формат точности
#pragma endregion

using namespace std;

int main() {
#pragma region Задание 1
    vector<pair<precision, precision>> R =
    {{0.0, 0.0}, {1.0, -0.0}, {0.0, -0.0}};                         // Сопротивления по заданию
    // Вычисление общего сопротивления по формуле
    for (const auto &[R1, R2] : R) {
        cout << "R1 = " << R1 << "\nR2 = " << R2 << endl;
        cout << "R общее 1: " << cast(Rf(R1, R2)) << "\nR общее 2: " << cast(Rg(R1, R2)) << endl;
    }
#pragma endregion
#pragma region Задание 2
    float  a, b, c, r1, r2;                 // Переменные и промежуточные результаты
    // Цикл для поиска коэффициента
    for (int k = 0; k <INT32_MAX; ++k) {
        // Вычисление a, b, c
        a = cast(pow(2.0, -k));
        b = 1;
        c = -1;
        r1 = ((a + b) + c);                     // Решение слева
        r2 = (a + (b + c));                     // Решение справа
        // Проверка условия
        if (a == r2 && (r1 != a || r1 == 0))
        {
            cout << a << " " << r1 << " " << r2 << endl;
            cout << k << endl;
            break;
        }
    }
#pragma endregion
    return 0;
}
