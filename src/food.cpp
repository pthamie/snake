#include "../include/food.h"

CFood::CFood()
{

}

CFood::~CFood()
{

}

std::string CFood::GetColor()
{
    return _color;
}

void CFood::SetColor(const std::string &newColor)
{
    _color = newColor;
}

