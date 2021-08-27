# ifndef _WALL_H_
# define _WALL_H_

# include <deque>
# include "Position.hpp"
# include "Visualization.hpp"

class Visualization;
class Wall
{
private:
    std::deque<Position> position;

public:
    Wall();
    friend class Visualization;
};

# endif