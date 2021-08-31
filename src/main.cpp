# include <iostream>
# include "Snake.hpp"
# include "Food.hpp"
# include "Visualization.hpp"
# include "GameSystem.hpp"

int main()
{
    // test
    // Snake snake;
    // std::cout << "head.x: " << snake.position.front().x << '\n';
    // std::cout << "head.y: " << snake.position.front().y << '\n';
    // snake.move();
    // std::cout << "head.x: " << snake.position.front().x << '\n';
    // std::cout << "head.y: " << snake.position.front().y << '\n';
    // snake.move();
    // snake.extend();
    // snake.move();
    // snake.extend();
    // std::cout << "head.x: " << snake.position.front().x << '\n';
    // std::cout << "head.y: " << snake.position.front().y << '\n';
    // std::cout << "back.x: " << snake.position.back().x << '\n';
    // std::cout << "back.y: " << snake.position.back().y << '\n';

    // Food* p = NULL;
    // p = new Food();

    // std::cout << "num of food: " << p->num << '\n';
    // std::cout << "x: " << p->position.x << ' ' << "y: " << p->position.y << '\n';
    // delete p;

    // std::cout << "num of food: " << p->num << '\n';
    // std::cout << "x: " << p->position.x << ' ' << "y: " << p->position.y << '\n';

    // p = new Food();
    // std::cout << "num of food: " << p->num << '\n';
    // std::cout << "x: " << p->position.x << ' ' << "y: " << p->position.y << '\n';

    // delete p;
    // p = new Food();
    // std::cout << "num of food: " << p->num << '\n';
    // std::cout << "x: " << p->position.x << ' ' << "y: " << p->position.y << '\n';   

    Visualization vis;
    vis.SetWindow();

    GameSystem gs;

    Snake* p_snake = NULL;
    p_snake = new Snake();
    // vis.Display_Snake(*p_snake);

    Food* p_food = NULL;
    p_food = new Food();
    // vis.Display_Food(*p_food);

    Wall* p_wall = NULL;
    p_wall = new Wall();
    // vis.Display_Wall(*p_wall);

    while(1)
    {
        p_snake->os();
        p_snake->move();
        gs.GameEngine(p_snake, p_food, p_wall);
        vis.Display_GameModel(*p_snake, *p_food, *p_wall);   
    }

    system("pause");
    return 0;
}