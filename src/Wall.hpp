# ifndef _WALL_H_
# define _WALL_H_

# include <deque>
# include "Position.hpp"
# include "Visualization.hpp"

class Wall
{
private:
    std::deque<Position> wall;

public:
    Wall();
    friend void Visualization::Display_Wall(Wall wall);
};

# endif