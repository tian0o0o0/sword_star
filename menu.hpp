#pragma once
#include <SFML/Graphics.hpp>
class menu{
    public:
    menu();
    void initiate_background();
    void background_process();
    private:
    sf::Texture bg;
};