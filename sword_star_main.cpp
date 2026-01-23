#include<SFML/Graphics.hpp>
#include<iostream>
#include"menu.hpp"

int main()
{
    sf::RenderWindow screen(sf::VideoMode::getDesktopMode(),"Sword star");
    
    menu mymenu;
    mymenu.make_texture();
    screen.setFramerateLimit(165);
    while(screen.isOpen()){
        while(const std::optional event = screen.pollEvent()){
            if(event->is<sf::Event::Closed>())
            screen.close();
        }
    screen.clear(sf::Color::Red);
    screen.draw(mymenu.send_sprite());
    
    screen.display();
    }

}