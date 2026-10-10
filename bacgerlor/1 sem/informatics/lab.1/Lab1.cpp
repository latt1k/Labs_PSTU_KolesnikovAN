#include <iostream>
#include <locale.h>//для русского языка
using namespace std;


int main()
{
    //задача номер - 1
    setlocale(LC_ALL, "Russian");//дабавляю русский язык

    float af = 100.0f;//дабавляю переменную а с типом флот
    float bf = 0.001f;//дабавляю переменную б с типом флот
    float cf;//дабавляю переменную с с типом флот(в ней будет вычислятся значение формулы)

    float chislitel_f = (af + bf) * (af + bf) * (af + bf) * (af + bf) - (af * af * af * af + 4 * af * af * af * bf);//расчет числителя по заданным а и б
    float znamenatel_f = 6 * af * af * bf * bf + 4 * af * bf * bf * bf + bf * bf * bf * bf;//расчет знаменателя по заданным а и б
    
    cf = chislitel_f / znamenatel_f;//расчет результата числитель/знаменатель


    cout << "при типе вещественных данных float результат выражения = " << cf <<endl;//вывод результата с типом флот

    double ad = 100;//дабавляю переменную а с типом дабл
    double bd = 0.001;//дабавляю переменную б с типом дабл
    double cd;//дабавляю переменную с с типом дабл(вычисления по аналогии с cf)

    double chislitel_d = (ad + bd) * (ad + bd) * (ad + bd) * (ad + bd) - (ad * ad * ad * ad + 4 * ad * ad * ad * bd);// по аналогии с прошлым типов данных
    double znamenatel_d = 6 * ad * ad * bd * bd + 4 * ad * bd * bd * bd + bd * bd * bd * bd;

    cd = chislitel_d / znamenatel_d;



    cout << "при типе вещественных данных double результат выражения = " << cd<<endl<<endl;//вывод результата с типом дабл

    //задача номер - 2

    int n = 2;//
    int m = 3;//
    cout << "Значение первого выражения равно " << ++n * ++m << endl;
    cout << "Значение второго выражения равно " << (m++ < n) <<"(0-неверно,1-верно)" << endl;
    cout << "Значение третьего выражения равно " << (n++ > m) << "(0-неверно,1-верно)" << endl;

    return 0;

}