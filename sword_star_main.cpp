#include <SFML/Graphics.hpp>
#include<iostream>

int main()
{
    sf::RenderWindow screen(sf::VideoMode::getDesktopMode(),"Sword star");

    screen.setFramerateLimit(165);
    while(screen.isOpen()){
        while(const std::optional event = screen.pollEvent()){
            if(event->is<sf::Event::Closed>())
            screen.close();
        }
    screen.clear();
    screen.display();
    }

}