# include <iostream>
# include "Snake.hpp"
# include "Food.hpp"
# include "Visualization.hpp"

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
    vis.SetCursor(10, 10);
    Position p = {10, 10};
    vis.Display_Circular(p);

    p.x ++;
    p.y ++;
    vis.Display_Square(p);

    p.x ++;
    p.y ++;
    vis.Display_Start(p); 

    Wall wall;
    vis.Display_Wall(wall);


    system("pause");
    return 0;
}