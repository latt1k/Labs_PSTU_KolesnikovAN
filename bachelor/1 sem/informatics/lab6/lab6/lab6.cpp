#include <iostream>
#include <string>
#include <clocale>
#include <cmath>
#include <cctype> // Для isdigit

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string str, result = "", word = "";//ворд-хранение слов,результ-результат с имзенениями(новая строка)
    cout << "Введите строку: ";
    getline(cin, str);

    // Удаляем точку
    bool hasDot = (str.size() > 0 && str[str.size() - 1] == '.');//проверяем строка больше нуля или нет и является ли последний символ точкой
    if (hasDot) str.erase(str.size() - 1, 1);//удаляем точку

    str += " "; // добавляем пробел в конец строки. Это нужно, чтобы последнее слово тоже обработалось в цикле

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (word.size() > 0) {//проверяем что в ворде что то есть

                // Проверяем, состоит ли слово ТОЛЬКО из цифр
                bool BYKVA = true;//изначально предположим что слово только из цифр
                for (int j = 0; j < word.size(); j++) {//проходим по каждой букве ворда
                    if (!isdigit(word[j])) { // Если нашли хоть что-то кроме цифры:фолс
                        BYKVA = false;
                        break;
                    }
                }

                // Если НЕ только цифры - оставляем и обрабатываем
                if (!BYKVA) {

                    // Если начинается с цифры - вставляем _
                    
                    if (isdigit(word[0])) {
                        word.insert(0, "_");
                    }                       //если первый символ-цифрв ставим _ в начале

                    // Заменяем всё, что не является АНГЛИЙСКОЙ буквой, цифрой или _ 
                    for (int j = 0; j < word.size(); j++) {
                        bool isEng = (word[j] >= 'a' && word[j] <= 'z') || (word[j] >= 'A' && word[j] <= 'Z');//проверяем английская ли это буква,если да-тру
                        if (!isEng && !isdigit(word[j]) && word[j] != '_') {
                            word.replace(j, 1, "_"); // все кроме англ букв,цифр,_, заменяем на _
                        }
                    }

                    result += (result.size() == 0 ? "" : " ") + word;//дабавляем слово в строку
                }
                word = ""; // Очищаем ворд
            }
        }
        else {                // Если текущий символ - НЕ пробел кладем этот символ в "карман" word, собирая слово по буквам
            word += str[i];
        }
    }

    if (hasDot) 
    { 
        result += "."; 
    }
    cout << "Результат: " << result << endl;

    return 0;
}