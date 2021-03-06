# ifndef _VISUALIZATION_H_
# define _VISUSLIZATION_H_

# pragma once

# include "Position.hpp"
# include "Snake.hpp"
# include "Food.hpp"
# include "Wall.hpp"
# include "UI.hpp"

class Wall;

class Visualization
{
private:
    /* data */
public:
    void SetWindow(int x = 40, int y = 40);
    void SetCursor(int x, int y);
    void Display_Circular(Position position);
    void Display_Square(Position position);
    void Display_Start(Position position);
    void Display_Snake(Snake snake);
    void Display_Food(Food food);
    void Display_Wall(Wall wall);
    void Display_GameModel(Snake snake, Food food, Wall wall);
    void Display_UI(UI* ui);
};

# endif
