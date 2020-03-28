#include <SFML/Graphics.hpp>
#include <iostream>

class Board 
{
public:
    Board() 
    {
        
        _board.setSize(sf::Vector2f(300.f, 300.f));
    }
    ~Board()
    {

    }
private:
    sf::RectangleShape _board;
};