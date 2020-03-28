#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Tile 
{
public:
    Tile() 
    {

    }

    Tile(int i) 
    {
        _tile.setSize(sf::Vector2f(75.f,75.f));

        setNumber(i);
    }

    ~Tile() 
    {

    }

    sf::RectangleShape getTile() 
    {
        return _tile;
    }

private:
    sf::RectangleShape _tile;
    sf::Text number;
    sf::Font numberFont;

    void setNumber(int tileNumber) 
    {
        number.setString(std::to_string(tileNumber));
        numberFont.loadFromFile("font/slidingpuzzle.ttf");
        number.setFont(numberFont);
    }
};