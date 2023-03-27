// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>//Библиотека, позволяющая работать со строками языка С++

int main()
{
    setlocale(LC_ALL, "rus");
    int n;


    //Строки из языка С
    /*char c_str[]{'H', 'e', 'l', 'l', 'o', '\0'};
    for (int i = 0; i < 5; i++)
        std::cout << c_str[i];
    std::cout << std::endl;

    std::cout << c_str << std::endl;

    char c_str2[]{"Hello, World!"};
    std::cout << c_str2 << std::endl;*/

    //После подключения string

    //std::string new_str = "Hello, World!";//Строковая переменная
    //std::cout << new_str << std::endl;

    //Конструкции
    /*std::string new_str;
    std::cout << new_str << std::endl;
    new_str = "Hello, World!";
    std::cout << new_str << std::endl;
    new_str = "Bye, World";
    std::cout << new_str << std::endl;

    //Конкатенация строк - процесс слияния двух и более строк в одну новую
    new_str = new_str + " (C) student";
    new_str += "!!!";
    std::cout << new_str << std::endl;*/

    //Ввод строки через консоль
   /*std::cout << "Привет, какое твое имя?\nВвод -> ";
    std::string name;
    std::cin >> name;
    std::cout << "привет, " << name << "!\n";

    std::cout << "Кем ты работаешь?\nВвод ->";
    std::string job;
    std::cin.ignore();//писать если перед гетлайном стоит син
    std::getline(std::cin, job);
    std::cout << "Ого " << job << "круто!\n";

    std::cout << "Сколько тебе лет?";
    int age;
    std::cin >> age;
    std::cout << "Когда-то и мне было " << age << " лет";*/

    //Метод (в ООП) - функция,  применяемая объектом какого-либо класса. 
    //каждый класс обладает своим набором методов.

    //Методы строк
   //std::string str = "Hello world!";
    //Методы length и size возвращают длину строки
    //std::cout << str.size() << std::endl;//Выводим длину строки хело ворлд
    //std::cout << str.length() << std::endl;//Выводим длину строки хело ворлд особой разницы нет

    //метод insert(вставка подстроки в строку)
    //str.insert(3, "ooo");
    //std::cout << str << std::endl;

    //Метод replaсe(из оригинальной строки убираем часть и вставляем свое значение)
   //str.replace(3, 5, "!!!");
    //std::cout << str << std::endl;

    //Метод find(возвращает позицию первого вхождения подстроки в строку)
    //std::cout << str.find('l') << std::endl;
   // std::cout << str.find('l', 6) << std::endl;//поиск начинается с 6 элемента

    //Метод rfind (возвращает позицию последнего вхождения подстроки в строку)
    //std::cout << str.rfind('o')<<std::endl;
    //std::cout << str.rfind('o', 6) << std::endl;

    //метод substr(возвращает подстроку из строки)
    //std::cout << str.substr(3) << std::endl;//возвращает строку после индекса 3
   // std::cout << str.substr(3, 5) << std::endl;//Начиная с 3 позиции возвращается 5 символов

    //Функции для работы со строками

    //Преобразование числа в строку
    n = 123;
    std::string num_str = std::to_string(n);
    //n += "1";//Ошибка
        num_str += "!";
    std::cout << num_str << std::endl;

    //Преобразование строки в число
    std::cout << "Введите число: ";
    std::getline(std::cin, num_str);
    n = std::stoi(num_str);
    n++;
    std::cout << n << std::endl;

    //Функции работы с регистром
    std::string hello = "Hello";
    //Возведение в нижний регистр
    for (int i = 0; i < hello.length(); i++)
        hello[i] = std::tolower(hello[i]);
    std::cout << hello << std::endl;

    //Возведение в верхний регистр
    for (int i = 0; i < hello.length(); i++)
        hello[i] = std::toupper(hello[i]);
    std::cout << hello << std::endl;

}