# include "UI.hpp"

void UI_End::Initial()
{
    name = "End";
    Content *c = new Content[3];
    c[0] = {"Game over !!!", {15, 9}};
    c[1] = {"Once again (left arrow)", {5, 18}};
    c[2] = {"exit (right arrow)", {20, 18}};

    for(int index=0; index<3; index++)
    {
        contents.push_back(c[index]);
    }
}

void UI_Start::Initial()
{
    name = "Start";
    Content *c = new Content[1];
    c[0] = {"Greedy Snake", {12, 9}};

    for(int index=0; index<1; index++)
    {
        contents.push_back(c[index]);
    }    
}