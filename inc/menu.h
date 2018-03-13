#ifndef MENU_H
#define MENU_H

#include "common.h"

class Menu
{
    
private:
    
    sf::RenderWindow menuWindow;
    
    sf::Font mainFont;
    
    sf::Texture image1;
    sf::Texture image2;
    sf::Texture image3;
    sf::Texture image4;
    sf::Texture image5;
    
    sf::Text menuTitle;
    sf::Text menuHint;
    sf::Text menuExitButtonWord;
    
    sf::Sprite choiceImage1;
    sf::Sprite choiceImage2;
    sf::Sprite choiceImage3;
    sf::Sprite choiceImage4;
    sf::Sprite choiceImage5;
    
    sf::RectangleShape titleRect;
    sf::RectangleShape buttonRect;
    
    sf::Vector2f choiceImage1Pos;
    sf::Vector2f choiceImage2Pos;
    sf::Vector2f choiceImage3Pos;
    sf::Vector2f choiceImage4Pos;
    sf::Vector2f choiceImage5Pos;
    sf::Vector2f menuTitlePos;
    sf::Vector2f menuHintPos;
    sf::Vector2f menuExitButtonWord1Pos;
    sf::Vector2f titleRectPos;
    sf::Vector2f buttonRectPos;
    
    sf::Vector2f menuWindowLocation;
    sf::Vector2f menuWindowSize;
    
    sf::Color textColor;
    sf::Color backgroundColor;
    sf::Color buttonColor1;
    sf::Color buttonColor2;
    
    const int gameSizeSmall = 12;
    const int gameSizeMedium = 25;
    const int gameSizeLarge = 50;
    const int titleTextSize = 40;
    const int textSize = 25;
    const int subTextSize = 10;
    
    int intGameSizeChoice;
    
    std::string gameSizeChoice;
    std::string menuTitleText;
    std::string menuHintText;
    std::string menuExitButtonWordText;
    
    int stringToInt(std::string word);
    
public:
    
    Menu();
    int getIntGameSizeChoice();
    
};

#endif
