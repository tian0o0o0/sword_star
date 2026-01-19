#include <SFML/Graphics.hpp>
 
//& ".\library\SFML-3.0.2\compiler\mingw64\bin\g++.exe" -g ".\sword_star_main.cpp" -o ".\sword_star_main.exe" -I".\library\SFML-3.0.2\include" -L".\library\SFML-3.0.2\lib" -lsfml-graphics -lsfml-window -lsfml-system; $env:PATH = ".\library\SFML-3.0.2\bin;$env:PATH"; & ".\sword_star_main.exe"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    // Create a simple shape to display
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({350.f, 250.f});
 
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit (X button)
            if (event->is<sf::Event::Closed>())
                window.close();
            
            // Also close with Escape key
            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::Escape)
                    window.close();
            }
        }
 
        // Clear screen
        window.clear();
 
        // Draw the circle
        window.draw(circle);
 
        // Update the window
        window.display();
    }
}