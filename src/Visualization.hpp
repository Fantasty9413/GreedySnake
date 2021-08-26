# ifndef _VISUALIZATION_H_
# define _VISUSLIZATION_H_

# include "Position.hpp"
# include "Snake.hpp"
# include "Food.hpp"
# include "Wall.hpp"

class Visualization
{
private:
    /* data */
public:
    void SetWindow(int x = 30, int y = 30);
    void SetCursor(int x, int y);
    void Display_Circular(Position position);
    void Display_Square(Position position);
    void Display_Start(Position position);
    void Display_Snake(Snake snake);
    void Display_Food(Food food);
    void Display_Wall(Wall wall);
};

# endif
