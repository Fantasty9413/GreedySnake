# include <iostream>
# include <deque>
# include "Position.hpp"
# include "Direction.hpp"

class Snake
{
    public:
    std::deque<Position> position;
    Position tail_last;
    Direction direction;

    public:
    Snake();
    void move();
    void extend();
    void eat_food();
};