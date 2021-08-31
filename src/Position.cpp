# include "Position.hpp"

bool operator==(const Position& pos1, const Position& pos2)
{
    if((pos1.x == pos2.x)&&(pos1.y == pos2.y))
        return true;
    else
        return false;
}