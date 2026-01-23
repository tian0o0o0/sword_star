#include "menu.hpp"
#include<SFML/Graphics.hpp>
menu::menu():background{}{
    
    
}
void menu::make_texture(){
    texture.loadFromFile("scene/title.png");
    background.setTexture(texture);
}
sf::Sprite& menu::send_sprite(){
    return background;
}