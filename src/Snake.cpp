# include "Snake.hpp"
# include "OperatingSystem.hpp"

Snake::Snake()
{
    Position body;
    body.x = 15;
    body.y = 15;
    position.push_front(body);
    direction = Direction::UP;
}

void Snake::move()      // snake move a step
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

void Snake::os()
{
    Key key = OS_Key();
    switch (key)
    {
    case Key::key_UP:
        if (direction != Direction::DOWN)
            direction = Direction::UP;
        break;

    case Key::key_DOWN:
        if (direction != Direction::UP)
            direction = Direction::DOWN;
        break;

    case Key::key_LEFT:
        if (direction != Direction::RIGHT)
            direction = Direction::LEFT;
        break;

    case Key::key_RIGHT:
        if (direction != Direction::LEFT)
            direction = Direction::RIGHT;
        break;

    case Key::key_None:
        break;

    default:
        break;
    }
}