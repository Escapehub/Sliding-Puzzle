#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Tile 
{
public:
    Tile() 
    {

    }

    Tile(std::string tileNumber) 
    {
        number.setString(tileNumber);
        numberFont.loadFromFile("font/slidingpuzzle.ttf");
        number.setFont(numberFont);
    }

    ~Tile() 
    {

    }

    sf::RectangleShape getTile() 
    {
        return square;
    }

private:
    sf::RectangleShape square;
    sf::Text number;
    sf::Font numberFont;
};