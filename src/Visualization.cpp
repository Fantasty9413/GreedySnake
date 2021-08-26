# include "Visualization.hpp"
# include <windows.h>
# include <stdio.h> 
# include <iostream>

void Visualization::SetWindow(int x, int y)
{
    int cols = x;
    int lines = y;
    system("title 贪吃蛇");//设置窗口标题
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//一个图形■占两个字符，故宽度乘以2
    system(cmd);//system(mode con cols=88 lines=88)设置窗口宽度和高度    
}

void Visualization::SetCursor(int x, int y)
{
    COORD position;
    position.X = x * 2;
    position.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void Visualization::Display_Circular(Position position)
{
    SetCursor(position.x, position.y);
    std::cout << "●";
}

void Visualization::Display_Square(Position position)
{
    SetCursor(position.x, position.y);
    std::cout << "■";
}

void Visualization::Display_Start(Position position)
{
    SetCursor(position.x, position.y);
    std::cout << "★";
}

void Visualization::Display_Wall(Wall wall)
{
    auto it = wall.wall.begin();
    while(it != wall.wall.end())
    {
        Display_Square(*it);
        it++;
    }
}