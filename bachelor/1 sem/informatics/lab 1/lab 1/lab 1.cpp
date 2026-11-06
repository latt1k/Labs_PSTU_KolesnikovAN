#include <iostream>
#include <cmath>
#include <iomanip> // Для setprecision (вывода точности)

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // ==========================================
    // ВЫЧИСЛЕНИЯ С ТИПОМ FLOAT
    // ==========================================
    cout << "--- Вычисления с типом float ---" << endl;
    float af = 100.0f;
    float bf = 0.001f;

    // 1. Числитель
    float term1_f = pow(af + bf, 4); // (a + b)^4
    float term2_f = pow(af, 4);      // a^4
    float term3_f = 4.0f * pow(af, 3) * bf; // 4*a^3*b
    float numerator_f = term1_f - (term2_f + term3_f); // (a+b)^4 - (a^4 + 4a^3b)

    // 2. Знаменатель
    float den1_f = 6.0f * pow(af, 2) * pow(bf, 2); // 6a^2b^2
    float den2_f = 4.0f * af * pow(bf, 3);         // 4ab^3
    float den3_f = pow(bf, 4);                     // b^4
    float denominator_f = den1_f + den2_f + den3_f;

    // 3. Результат
    float result_f = numerator_f / denominator_f;

    // Вывод всех промежуточных переменных float
    cout << fixed << setprecision(6); // Устанавливаем точность для наглядности
    cout << "term1_f       ((a+b)^4)       = " << term1_f << endl;
    cout << "term2_f       (a^4)           = " << term2_f << endl;
    cout << "term3_f       (4*a^3*b)       = " << term3_f << endl;
    cout << "numerator_f   (Числитель)     = " << numerator_f << endl;
    cout << "---------------------------------------" << endl;
    cout << "den1_f        (6a^2b^2)       = " << den1_f << endl;
    cout << "den2_f        (4ab^3)         = " << den2_f << endl;
    cout << "den3_f        (b^4)           = " << den3_f << endl;
    cout << "denominator_f (Знаменатель)   = " << denominator_f << endl;
    cout << "---------------------------------------" << endl;
    cout << "РЕЗУЛЬТАТ FLOAT = " << result_f << endl << endl << endl;


    // ==========================================
    // ВЫЧИСЛЕНИЯ С ТИПОМ DOUBLE
    // ==========================================
    cout << "--- Вычисления с типом double ---" << endl;
    double ad = 100.0;
    double bd = 0.001;

    // 1. Числитель
    double term1_d = pow(ad + bd, 4); // (a + b)^4
    double term2_d = pow(ad, 4);      // a^4
    double term3_d = 4.0 * pow(ad, 3) * bd; // 4*a^3*b
    double numerator_d = term1_d - (term2_d + term3_d); // (a+b)^4 - (a^4 + 4a^3b)

    // 2. Знаменатель
    double den1_d = 6.0 * pow(ad, 2) * pow(bd, 2); // 6a^2b^2
    double den2_d = 4.0 * ad * pow(bd, 3);         // 4ab^3
    double den3_d = pow(bd, 4);                    // b^4
    double denominator_d = den1_d + den2_d + den3_d;

    // 3. Результат
    double result_d = numerator_d / denominator_d;

    // Вывод всех промежуточных переменных double
    // Для double можно установить бОльшую точность (например, 14 знаков)
    cout << fixed << setprecision(14);
    cout << "term1_d       ((a+b)^4)       = " << term1_d << endl;
    cout << "term2_d       (a^4)           = " << term2_d << endl;
    cout << "term3_d       (4*a^3*b)       = " << term3_d << endl;
    cout << "numerator_d   (Числитель)     = " << numerator_d << endl;
    cout << "---------------------------------------" << endl;
    cout << "den1_d        (6a^2b^2)       = " << den1_d << endl;
    cout << "den2_d        (4ab^3)         = " << den2_d << endl;
    cout << "den3_d        (b^4)           = " << den3_d << endl;
    cout << "denominator_d (Знаменатель)   = " << denominator_d << endl;
    cout << "---------------------------------------" << endl;
    cout << "РЕЗУЛЬТАТ DOUBLE = " << result_d << endl;

    return 0;
}