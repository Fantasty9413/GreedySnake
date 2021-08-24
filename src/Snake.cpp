# include "Snake.hpp"

Snake::Snake()
{
    Position body;
    body.x = 15;
    body.y = 15;
    position.push_front(body);
    direction = UP;
}

void Snake::move()
{
    Position head = position.front();
    switch (direction)
    {
    case Direction::UP:
        head.x = head.x;
        head.y = head.y - 1;
        break;

    case Direction::DOWN:
        head.x = head.x;
        head.y = head.y + 1;
        break;

    case Direction::LEFT:
        head.x = head.x - 1;
        head.y = head.y;
        break;

    case Direction::RIGHT:
        head.x = head.x + 1;
        head.y = head.y;
        break;

    default:
        break;
    }
    position.push_front(head);
    tail_last = position.back();
    position.pop_back();
}

void Snake::extend()
{
    position.push_back(tail_last);
}

void Snake::eat_food()
{
    
}