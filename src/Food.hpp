# include <iostream>
# include "Position.hpp"

class Food
{
    protected:
    static int num;         // quantity of food
    Position position;
    int score;

    public:
    void SetFood();
};