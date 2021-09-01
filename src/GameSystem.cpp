# include "GameSystem.hpp"
# include "System.hpp"
# include <iostream>
# include <deque>
# include <algorithm>

bool GameSystem::SnakeGetFood(Snake* snake, Food* food)
{
    return snake->position.front() == food->position;
}

bool GameSystem::SnakeHitWall(Snake* snake, Wall* wall)
{
    std::deque<Position>::iterator pos;
    pos = find(wall->position.begin(), wall->position.end(), snake->position.front());
    if(pos != wall->position.end())
        return true;
    else
        return false;
}

bool GameSystem::SnakeHitSelf(Snake* snake)
{
    std::deque<Position>::iterator pos;
    pos = find(snake->position.begin()+1, snake->position.end(), snake->position.front());
    if(pos != snake->position.end())
        return true;
    else
        return false;
}

void GameSystem::GameEngine(Snake* snake, Food* food, Wall* wall)
{
    if (SnakeGetFood(snake, food))
    {
        snake->extend();
        delete food;
        food = new Food();
    }

    if (SnakeHitWall(snake, wall))
    {
        sp_pointer = SystemProcess::SP_end;
    }
    
    if (SnakeHitSelf(snake))
    {
        sp_pointer = SystemProcess::SP_end;
    }
}