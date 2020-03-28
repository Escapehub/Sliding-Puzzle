#include <SFML/Graphics.hpp>
#include <iostream>

int main() 
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Sliding Puzzle");

    while (window.isOpen()) 
    {
        window.clear();
        sf::Event event;
        while (window.pollEvent(event)) 
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        window.display();

    }
    return EXIT_SUCCESS;
}