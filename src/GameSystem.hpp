# ifndef _GAMESYSTEM_H_
# define _GAMESYSTEM_H_

# include "Snake.hpp"
# include "Food.hpp"
# include "Wall.hpp"

class GameSystem
{
private:
    /* data */
public:
    bool SnakeGetFood(Snake* snake, Food* food);
    bool SnakeHitWall(Snake* snake, Wall* wall);
    bool SnakeHitSelf(Snake* snake);
    void GameEngine(Snake* snake, Food* food, Wall* wall);
};

# endif