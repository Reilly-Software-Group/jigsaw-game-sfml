#include "../inc/menu.h"

Menu::Menu()
{
    if(! (mainFont.loadFromFile("../fnt/Georgia.ttf")))
        std::cout << std::endl << "Error loading font 'Georgia.ttf'" << std::endl;
    
    menuTitleText = "Jigsaw Time!";

    menuHintText = "Hi! Welcome to Jigsaw Time! There is lots of awesome landscape jigsaw puzzle fun to be had!";
    menuExitButtonWordText = "Quit"; 
    
    textColor = sf::Color::Black;
    backgroundColor = sf::Color::White;
    
    buttonColor1.r = 200;
    buttonColor1.g = 202;
    buttonColor1.b = 206;
    
    buttonColor2.r = 227;
    buttonColor2.g = 228;
    buttonColor2.b = 232;
    
    menuTitle.setCharacterSize(titleTextSize);
    menuHint.setCharacterSize(textSize);
    menuExitButtonWord.setCharacterSize(textSize);
    
    menuTitle.setFillColor(textColor);
    menuHint.setFillColor(textColor);
    menuExitButtonWord.setFillColor(textColor);
    
    menuTitle.setString(menuTitleText);
    menuHint.setString(menuHintText);
    menuExitButtonWord.setString(menuExitButtonWordText);
    
    image1.loadFromFile("../img/landscape1.jpg");
    image2.loadFromFile("../img/landscape2.jpg");
    image3.loadFromFile("../img/landscape3.jpg");
    image4.loadFromFile("../img/landscape4.jpg");
    image5.loadFromFile("../img/landscape5.jpg");
    
    choiceImage1.setTexture(image1);
    choiceImage2.setTexture(image2);
    choiceImage3.setTexture(image3);
    choiceImage4.setTexture(image4);
    choiceImage5.setTexture(image5);
    
    titleRect.setFillColor(buttonColor1);
    buttonRect.setFillColor(buttonColor2);
    
    choiceImage1Pos = (sf::Vector2f(0, 0));
    choiceImage2Pos = (sf::Vector2f(0, 0));
    choiceImage3Pos = (sf::Vector2f(0, 0));
    choiceImage4Pos = (sf::Vector2f(0, 0));
    choiceImage5Pos = (sf::Vector2f(0, 0));
    menuTitlePos = (sf::Vector2f(0, 0));
    menuHintPos = (sf::Vector2f(0, 0));
    menuExitButtonWord1Pos = (sf::Vector2f(0, 0));
    titleRectPos = (sf::Vector2f(0, 0));
    buttonRectPos = (sf::Vector2f(0, 0));
    menuWindowLocation = (sf::Vector2f(0, 0));
    
    menuWindowSize = (sf::Vector2f(0, 0));
    
    intGameSizeChoice = 0;
    
}

std::string Menu::setGameSizeChoice(std::string word)
{
    
    gameSizeChoice = word;
    
}

int Menu::stringToInt(std::string word)
{
    int n = 0, c = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= '0' && word[i] <= '9')
        {
            c++;
        }
    }
    
    if (word.size() == c)
    {
        n = std::stoi(word);
        
        return n;
    }
    
    std::cout << std::endl << "ERROR: Size of word is not equal to the amount of numbers it contains" << std::endl;
    
    return 0;
}

int Menu::getIntGameSizeChoice()
{
    intGameSizeChoice = stringToInt(gameSizeChoice);
    
    return intGameSizeChoice;
    
}

void Menu::menuLoop()
{
    
    menuWindow.create(sf::VideoMode(500, 500), "Smart Tab", sf::Style::Titlebar | sf::Style::Close);
    
    sf::RectangleShape rect1;
    rect1.setSize(sf::Vector2f(75, 75));
    rect1.setFillColor(sf::Color::Black);
    
    sf::FloatRect boundingBox;
    
    sf::Vector2f mousePos;
    
    while (menuWindow.isOpen())
    {
        sf::Event event;
        
        while (menuWindow.pollEvent(event))
        {
            mousePos.x = sf::Mouse::getPosition(menuWindow).x;
            mousePos.y = sf::Mouse::getPosition(menuWindow).y;
            
            boundingBox = rect1.getGlobalBounds();
            
            if (event.type == sf::Event::Closed)
                menuWindow.close();
            
            if (boundingBox.contains(mousePos) &&  sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                rect1.setPosition(mousePos.x - (rect1.getSize().x / 2), mousePos.y - (rect1.getSize().y / 2));
            }
            
        }
        
        menuWindow.clear(sf::Color::White);
        menuWindow.draw(rect1);
        menuWindow.display();
        
    }
    
}
