#pragma once
#include "menu.hpp"
#include<SFML/Graphics.hpp>

menu::menu(){}



void menu::initiate_background(){
    bg.loadFromFile("scene/title.png");
    background_process();
}
void menu::background_process(){
}

