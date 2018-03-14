#include "../inc/common.h"
#include "../inc/jigsaw.h"
#include "../inc/menu.h"

Menu menu;
JigsawPiece jigsaw;

std::vector <JigsawPiece> gameSet;

int main()
{
    std::string input = "50";
    int intInput = 0, c = 0;
    bool isGoodInput = 0;
    
    while (isGoodInput == 0)
    {
        
        std::cout << std::endl << "choose a game option: ";
        std::cin >> input;
        std::cout << std::endl;
        
        intInput = menu.stringToInt(input);
        
        if (intInput != 0 && intInput <= 50)
        {
            std::cout << std::endl << intInput;
            
            break;
        }
        
    }
    
    std::cout << gameSet.size();
    
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
