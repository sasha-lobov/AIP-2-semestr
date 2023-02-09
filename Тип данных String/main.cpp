//Вариант 20й

//6 задача: Составить алгоритм, подсчитывающий количество слов в тексте.
/*
#include <iostream>
#include <string>

int kolichestvo_slow(std::string str)
{
    int score = 1;
    int position = 0;
    int found = str.find(" ",position);

    while(found != -1)
    {
        found = str.find(" ",position);

        if(found != -1 && found > position)
        {
            score += 1;
            position = found + 1;
        }
    }

    if(found == -1 && str.size() == 0)
    {
        score = 0;
    }

    return score;
}

int main()
{
    std::string str = "hello, I'm going to the uneversity";
    std::cout<<kolichestvo_slow(str)<<std::endl;

    return 0;
}
*/
//задача 10:Удалить из строки первые буквы слов. (Пример. Входная строка: Crystal Method. Результат: rystal ethod).
/*
#include <iostream>
#include <string>

void del_symvols(std::string str)
{

    int position = 0;
    int found = str.find(" ",position);

    while(found != -1)
    {
        found = str.find(" ",position);

        position = found + 1;
        str.erase(position,1);
    }
    std::cout<< str << std::endl;
}

int main()
{
    std::string str = "hello, I'm going to the uneversity";
   del_symvols(str);

    return 0;
}
*/

//задача 19: В данной строке вставить после каждого символа 'a' символ 'b'.

#include<iostream>
#include<string>

void dobavlenie(std::string str)
{

    for(int i=0;i !=str.size()-1;i++)
    {
        if(str[i] == 'a')
        {
            str.insert(i+1,"b");
        }
    }

    if(str[str.size()-1] == 'a')
    {
        str.append("b");
    }

    std::cout<<str<<std::endl;
}
int main()
{
    std::string str = "acuda n armeaaaa";

    dobavlenie(str);
    return 0;
}


//задание 15: Дана строка. Если ее длина больше 10, то оставить в строке только первые 6 символов, иначе дополнить строку символами 'o' до длины 12.
/*
#include <iostream>
#include <string>

void zamena(std::string str)
{
    std::string b = "b";
    int position = 1;

    if(str.length()>10)
    {
        str.erase(6);
    }

    else
    {
        while(str.length() != 12)
        {
            str.append("o");
        }
    }
    std::cout<<str;
}

int main()
{
    std::string str = "Kalbr123456789";
    zamena(str);

    return 0;
}
*/

