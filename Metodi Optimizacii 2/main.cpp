//
//  main.cpp
//  Metodi Optimizacii 2
//
//  Created by Егор on 01/01/2018.
//  Copyright © 2018 Егор. All rights reserved.
//

#include <iostream>
using namespace std;



int main()
{
    int Value[9]; //Вес ноды
    int HasPath[9][9]; //Имеет ребро
    int NodeLength[9][9]; //Длина ребра
    
    //Инициализация данных согласно заданию
    for (int i=0; i<9; i++)
    {
        Value[i]=999;
        for (int j = 0; j<9; j++)
        {
            HasPath[i][j]=0;
            NodeLength[i][j]=0;
        }
    }
    HasPath[0][1] = 1;
    NodeLength[0][1] = 4;
    
    HasPath[1][4] = 1;
    NodeLength[1][4] = 5;
    
    HasPath[1][6] = 1;
    NodeLength[1][6] = 3;
    
    HasPath[4][8] = 1;
    NodeLength[4][8] = 5;
    
    HasPath[0][2] = 1;
    NodeLength[0][2] = 2;
    
    HasPath[2][4] = 1;
    NodeLength[2][4] = 4;
    
    HasPath[2][6] = 1;
    NodeLength[2][6] = 3;
    
    HasPath[6][8] = 1;
    NodeLength[6][8] = 4;
    
    HasPath[2][5] = 1;
    NodeLength[2][5] = 9;
    
    HasPath[5][8] = 1;
    NodeLength[5][8] = 7;
    
    HasPath[0][3] = 1;
    NodeLength[0][3] = 7;
    
    HasPath[3][5] = 1;
    NodeLength[3][5] = 0;
    
    HasPath[3][7] = 1;
    NodeLength[3][7] = 6;
    
    HasPath[7][8] = 1;
    NodeLength[7][8] = 0;
    
    Value[0]=0;
    //Само Решение (Метод Дейкстра)
    for (int i = 0; i<9;i++)
    {
        for (int j=0; j<9; j++)
        {
            if (HasPath[i][j]==1)
            {
                            if (Value[j]>(Value[i]+NodeLength[i][j]))
                            {
                                Value[j]=NodeLength[i][j] + Value[i];
                            }
            }
        }
    }
    cout << "Кратчайший Путь" << endl;
    cout << Value[8] << endl;
    
}
