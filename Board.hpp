#include <SFML/Graphics.hpp>
#include <iostream>

class Board 
{
public:
    Board() 
    {
        _board.setSize(sf::Vector2f(300.f, 300.f));
        _board.setFillColor(sf::Color::Cyan);
        _board.setPosition(sf::Vector2f(250.f, 250.f));
    }

    ~Board()
    {
        
    }

    sf::RectangleShape getBoard() 
    {
        return _board;
    }
    
private:
    sf::RectangleShape _board;
};