//Вариант 20 задача 3 В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали.
/*
#include<iostream>
#include<array>
#include<time.h>

int func(std::array<std::array<int,10>,10> matrix)
{
    int summ = 0;
    int i=0;
    int j=0;

    while(i<10){
        if(matrix[i][j]<0)
            summ+=matrix[i][j];
        i++;
        j++;
    }
    return summ;
}

int main()
{
    const int line = 10;
    const int column = 10;
    srand(time(0));

    std::array<std::array<int,line>,column> matrix;

    for(int i=0;i<column;i++){
        for(int j=0;j<line;j++){
            matrix[i][j] = rand()%20 - 10;
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"Summ = "<<func(matrix)<<std::endl;
    return 0;
}
*/

//задача 5 В квадратной матрице для каждой строки найти минимальный элемент и
//переставить его с элементом, стоящим в этой строке на главной диагонали.

/*
#include<iostream>
#include<array>
#include<time.h>

void func(std::array<std::array<int,4>,4> matrix)
{
    int value = 11;
    int line = 4;
    int column = 4;
    int j = 0;
    int i = 0;
    int pos_i_min;

    while(i<line)
    {
        for(j=0;j<column;j++)
        {
            if(matrix[i][j]<value)
            {
                value = matrix[i][j];
                pos_i_min = j;
            }
        }
        matrix[i][pos_i_min] = matrix[i][i];
        matrix[i][i] = value;
     i++;
     value = 11;
    }

    for(int b =0;b<line;b++)
    {
        for(int a=0;a<column;a++)
        {
            std::cout<<matrix[b][a]<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    const int line = 4;
    const int column = 4;
    srand(time(0));

    std::array<std::array<int,line>,column> matrix;

    for(int i=0;i<line;i++){
        for(int j=0;j<column;j++){
            matrix[i][j] = rand()%20 - 10;
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl
             <<std::endl
             <<std::endl;

    func(matrix);

    return 0;
}
*/


//Задача 8 Дана матрица. Элементы первой строки — мощность электромотора, второй строки
//— категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3.
/*
#include<iostream>
#include<array>
#include<time.h>

int func(std::array<std::array<int,7>,2> matrix){
    int max_moshnost = -1;
    for(int i=0;i<7;i++)
    {
        if(matrix[1][i] == 3)
        {
            if(matrix[0][i]>max_moshnost)
            {
                max_moshnost = matrix[0][i];
            }
        }
    }
    return max_moshnost;
}
int main()
{
    const int linn = 2;
    const int column = 7;
    srand(time(0));

    std::array<std::array<int,column>,linn> matrix;


        for(int i=0;i<column;i++){
            matrix[0][i] = rand()%10;
            std::cout<<matrix[0][i]<<" ";
        }
        std::cout<<std::endl;

        for(int j=0;j<column;j++){
            matrix[1][j] = rand()%3 + 1;
            std::cout<<matrix[1][j]<<" ";
        }


    std::cout<<std::endl
             <<std::endl
             <<std::endl;

    std::cout<<func(matrix)<<std::endl;

    return 0;
}
*/
//Задача 9b: Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
//Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.
/*
#include<iostream>
#include<array>
#include<time.h>

struct Robot
{
    int power;
    int speed;
};

const int lines = 3;
const int colums = 3;

void func(std::array<std::array<Robot,colums>,lines> dask)
{
    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<colums;j++)
        {
            std::cout<<dask[j][i].power<<";"<<dask[j][i].speed<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    std::array<std::array<Robot,colums>,lines> dask;

    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<colums;j++)
        {
            std::cout<<"Power: ";
            std::cin>>dask[j][i].power;
            std::cout<<"Speed: ";
            std::cin>>dask[j][i].speed;
        }
    }
    std::cout<<std::endl;

    func(dask);
    return 0;
}
*/

//Задача 10(6)Реализовать вычисление матричных норм из списка выше (только для квадратных матриц).


#include<iostream>
#include<array>
#include<time.h>
#include<cmath>

const int columns = 3;
const int lines = 3;

void func(std::array<std::array<int,columns>,lines> matrix)
{
    int num_max;
    std::array<int,3> arr;

    for(int i=0;i<lines;i++)
    {
        num_max = 0;

        for(int j=0;j<columns;j++)
        {
            if(matrix[i][j]>num_max)
            {
                num_max = matrix[i][j];
            }
        }
        arr[i] = num_max;
    }

    for(int a=0;a<3;a++)
    {
        std::cout<<arr[a]<<" ";
    }

    std::cout<<std::endl;
}

int normal(std::array<std::array<int,columns>,lines> matrix)
{
    std::array<int,3> summ;
    int num_summ;
    int num_max = -1;
    for(int i=0;i<lines;i++)
    {
        num_summ = 0;
        for(int j=0;j<columns;j++)
        {
            num_summ += abs(matrix[j][i]);
        }
        summ[i] = num_summ;
    }

    for(int a=0;a<3;a++)
    {
        if(summ[a]>num_max)
        {
            num_max = summ[a];
        }
    }

    return num_max;
}

int main()
{
    srand(time(0));

    std::array<std::array<int,columns>,lines> matrix;

    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++)
        {
            matrix[i][j] = rand()%5;
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    func(matrix);
    std::cout<<std::endl;

    std::cout<<"Normal: "<<normal(matrix)<<std::endl;

    return 0;
}


