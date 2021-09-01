# ifndef _UI_H_
# define _UI_H_

# include <deque>
# include "Content.hpp"

class UI
{
    protected:
    std::string name;
    std::deque<Content> contents;

    public:
    virtual void Initial() = 0;
    friend class Visualization;
};

class UI_End: public UI
{
    public:
    void Initial();
    friend class Visualization;
};

# endif