#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.hpp"
#include "Tile.hpp"

int main() 
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Sliding Puzzle");
    Board board;
    Tile tile(1);
    while (window.isOpen()) 
    {
        window.clear();
        sf::Event event;
        while (window.pollEvent(event)) 
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
        window.draw(board.getBoard());
        window.draw(tile.getTile());
        window.display();

    }
    return EXIT_SUCCESS;
}