# ifndef _FOOD_H_
# define _FOOD_H_

# include "Position.hpp"

class Food
{
    protected:
    static int num;         // quantity of food
    Position position;
    int score;

    public:
    Food();
    ~Food();
    void SetFood();
    friend class Visualization;
    friend class GameSystem;
};

# endif