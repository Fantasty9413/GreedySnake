# ifndef _SNAKE_H_
# define _SNAKE_H_

# include <deque>
# include "Position.hpp"
# include "Direction.hpp"

class Snake
{
    private:
    std::deque<Position> position;
    Position tail_last;
    Direction direction;

    public:
    Snake();
    void move();
    void extend();
    void eat_food();
    void os();
    friend class Visualization;
    friend class GameSystem;
};

# endif