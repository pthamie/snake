#pragma once

class grid
{
public:
    grid();
    grid(int witdth, int height);
    ~grid();

private:
    int widht = 0;
    int height = 0;
    int cells[];
};
