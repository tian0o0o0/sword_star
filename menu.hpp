#pragma once
#include<SFML/Graphics.hpp>

class menu{

    public:
    menu();
    sf::Sprite background;
    void make_texture();
    sf::Sprite& send_sprite();

    private:
    sf::Texture texture;


};