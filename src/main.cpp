#include "../inc/common.h"
#include "../inc/jigsaw.h"
#include "../inc/menu.h"

Menu menu;
JigsawPiece jigsaw;

std::vector <JigsawPiece> gameSet;

int main()
{
    std::cout << "Hello world! Desktop test 1";
    
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
