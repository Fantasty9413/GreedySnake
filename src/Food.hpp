# ifndef _FOOD_H_
# define _FOOD_H_

# include "Position.hpp"

class Food
{
    public:
    static int num;         // quantity of food
    Position position;
    int score;

    public:
    Food();
    ~Food();
    void SetFood();
};

# endif