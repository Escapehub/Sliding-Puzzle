#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Tile 
{
public:
    Tile()
    {

    }

    Tile(int i, sf::Color color, sf::Vector2f pos)
    {
        _tile.setSize(sf::Vector2f(75.f, 75.f));
        _tile.setFillColor(color);
        _tile.setPosition(pos);
        number.setPosition(pos);
        setNumber(i);
    }

    ~Tile()
    {
        
    }

    sf::RectangleShape getTile()
    {
        return _tile;
    }

    sf::Text getTileText()
    {
        return number;
    }
    
private:
    sf::RectangleShape _tile;
    sf::Text number;
    sf::Font numberFont;

    void setNumber(int tileNumber)
    {
        number.setString(std::to_string(tileNumber));
        numberFont.loadFromFile("fonts/slidingpuzzle.ttf");
        number.setFont(numberFont);
    }
};