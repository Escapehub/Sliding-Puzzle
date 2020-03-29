#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.hpp"
#include "Tile.hpp"

int main() 
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Sliding Puzzle");
    sf::Vector2i mousePos = sf::Mouse::getPosition();

    Board board;
    Tile tile1(1, sf::Color::Blue, sf::Vector2f(0.f, 0.f));
    Tile tile2(2, sf::Color::Red, sf::Vector2f(75.f, 0.f));
    Tile tile3(3, sf::Color::Yellow, sf::Vector2f(150.f, 0.f));
    Tile tile4(4, sf::Color::White, sf::Vector2f(225.f, 0.f));
    Tile tile5(5, sf::Color::Magenta, sf::Vector2f(0.f, 75.f));

    while (window.isOpen()) 
    {
        window.clear();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            std::cout << "Left mouse pressed" << std::endl;
        }
        
        //std::cout << "Mouse x: " << mousePos.x << " Mouse y: " << mousePos.y << std::endl;
        window.draw(board.getBoard());

        window.draw(tile1.getTile());
        window.draw(tile1.getTileText());

        window.draw(tile2.getTile());
        window.draw(tile2.getTileText());

        window.draw(tile3.getTile());
        window.draw(tile3.getTileText());

        window.draw(tile4.getTile());
        window.draw(tile4.getTileText());

        window.draw(tile5.getTile());
        window.draw(tile5.getTileText());

        window.display();
    }
    return EXIT_SUCCESS;
}