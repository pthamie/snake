#include <string>

class CFood
{
    public:
        CFood();
        ~CFood();
    
    private:
        std::string _color = "red";

    public:
        void SetColor (const std::string &newColor);
        std::string GetColor();
};
