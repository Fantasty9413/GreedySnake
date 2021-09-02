# include "Visualization.hpp"
# include <windows.h>
# include <stdio.h> 
# include <iostream>

void Visualization::SetWindow(int x, int y)
{
    int cols = x;
    int lines = y;
    system("title 贪吃蛇");//设置窗口标题
    char cmd[40];
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

void Visualization::Display_Snake(Snake snake)
{
    auto it = snake.position.begin();
    while(it != snake.position.end())
    {
        Display_Circular(*it);
        it++;
    }
}

void Visualization::Display_Food(Food food)
{
    auto it = &food.position;
    Display_Start(*it);
}

void Visualization::Display_Wall(Wall wall)
{
    auto it = wall.position.begin();
    while(it != wall.position.end())
    {
        Display_Square(*it);
        it++;
    }
}

void Visualization::Display_GameModel(Snake snake, Food food, Wall wall)
{
    system("cls");              // clear the screen
    Display_Snake(snake);
    Display_Food(food);
    Display_Wall(wall);
    Sleep(400);   
}

void Visualization::Display_UI(UI* ui)
{
    system("cls");
    ui->Initial();
    auto it = ui->contents.begin();
    while(it != ui->contents.end())
    {
        SetCursor((*it).position.x, (*it).position.y);
        std::cout << (*it).text;
        it++;
    }
}