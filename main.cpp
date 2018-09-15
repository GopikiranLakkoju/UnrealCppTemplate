#include <iostream>
#include <map>
#define TMap std::map

using int32 = int;
using FString = std::string;

// prototype is mandatory if no header or outside of class
void structureMap();

main(int argc, char const *argv[])
{
    structureMap();
    system("pause");
    return 0;
}

void structureMap()
{
    TMap<FString, int32> mapDetails {{"Gopikiran", 33}, {"Ushadeepika", 33}};
    
    for(auto&& map : mapDetails)
    {
        std::cout << map.first << "\t" << map.second << std::endl;
    }
    std::cout << mapDetails["Gopikiran"];    
}