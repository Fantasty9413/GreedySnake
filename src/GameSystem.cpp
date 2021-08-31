# include "GameSystem.hpp"
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
        std::cout << "Game over" << '\n';
    }

    if (SnakeHitSelf(snake))
    {
        std::cout << "Game over" << '\n';
    }
}