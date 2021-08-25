# include "Food.hpp"

int Food::num = 0;

Food::Food()
{
    score = 10;
    position.x = rand() % 28 + 2;
    position.y = rand() % 28 + 2;
    num++;
}

Food::~Food()
{
    num--;
}