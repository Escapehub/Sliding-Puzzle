#include <SFML/Graphics.hpp>
#include <iostream>

class Board 
{
public:
    Board() 
    {
        _board.setSize(sf::Vector2f(300.f, 300.f));
        _board.setFillColor(sf::Color::Cyan);
    }

    ~Board()
    {
        
    }

    sf::RectangleShape getBoard() 
    {
        return _board;
    }

    sf::Vector2f getBoardPos()
    {
        return _board.getPosition();
    }
    
private:
    sf::RectangleShape _board;
};