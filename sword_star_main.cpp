#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
 
//& "c:\Users\User\sword_star\library\SFML-3.0.2\compiler\mingw64\bin\g++.exe" -g "c:\Users\User\sword_star\sword_star_main.cpp" -o "c:\Users\User\sword_star\sword_star_main.exe" -I"c:\Users\User\sword_star\library\SFML-3.0.2\include" -L"c:\Users\User\sword_star\library\SFML-3.0.2\lib" -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system; $env:PATH = "c:\Users\User\sword_star\library\SFML-3.0.2\bin;$env:PATH"; & "c:\Users\User\sword_star\sword_star_main.exe"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");
 
    // Load a sprite to display
    const sf::Texture texture("cute_image.jpg");
    sf::Sprite sprite(texture);
 
    // Create a graphical text to display
    const sf::Font font("arial.ttf");
    sf::Text text(font, "Hello SFML", 50);
 
    // Load a music to play
    sf::Music music("nice_music.ogg");
 
    // Play the music
    music.play();
 
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }
 
        // Clear screen
        window.clear();
 
        // Draw the sprite
        window.draw(sprite);
 
        // Draw the string
        window.draw(text);
 
        // Update the window
        window.display();
    }
}