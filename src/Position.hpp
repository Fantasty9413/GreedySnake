# ifndef _POSOTION_H_
# define _POSOTION_H_

struct Position
{
    int x;
    int y;
};

bool operator==(const Position& pos1, const Position& pos2);

# endif