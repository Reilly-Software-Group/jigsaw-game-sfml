#include "../inc/common.h"
#include "../inc/jigsaw.h"
#include "../inc/menu.h"

Menu menu;
JigsawPiece jigsaw;

void setUpJigsawVector();

std::vector <JigsawPiece> gameSet;

int main()
{
    std::string input;
    int intInput = 0, c = 0;
    bool isGoodInput = 0;
    
    while (isGoodInput == 0)
    {
        
        std::cout << std::endl << "choose a game option: ";
        std::cin >> input;
        std::cout << std::endl;
        
        menu.setGameSizeChoice(input);
        
        intInput = menu.stringToInt(input);
        
        if (intInput != 0 && intInput <= 50)
        {
            std::cout << std::endl << intInput << std::endl ;
            
            break;
        }
        
    }
    
    setUpJigsawVector();
    
    std::cout << std::endl << gameSet.size() << std::endl;
    
    return 0;
}

void setUpJigsawVector()
{
    int n = 0;
    
    n = menu.getIntGameSizeChoice();
    
    for (int i = 0; i < n; i++)
    {
        
        gameSet.push_back(JigsawPiece());
        
    }
    
}
