#include <iostream>
#include "./include/food.h"
#include <vector>

int main(int, char**) {

    std::vector<CFood> foods;

    CFood food0;
    CFood food1;

    food1.SetColor("blue");

    foods.push_back(food0);
    foods.push_back(food1);

    for (unsigned int i = 0; i < foods.size(); i++)
    {
        std::cout << "Food "<<i<<" color : " << foods[i].GetColor() << std::endl;
    }

}
