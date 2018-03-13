#include "../inc/common.hpp"

Menu menu;
JigsawPiece jigsaw;

std::vector <JigsawPiece()> gameSet;

int main()
{
    std::cout << "Hello world! Desktop test 1";
    
    return 0;
}

void setUpJigsawVector()
{
    int n = 0;
    
    menu.gameSizeIntToString();
    
    n = getIntGameSizeChoice();
    
    for (int i = 0; i < n; i++)
    {
        
        gameSet.push_back(Jigsaw());
        
    }
    
}
