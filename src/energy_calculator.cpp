#include "generator.h"
#include "genList.h"

#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace energy_generator;

int main(){
    std::vector<std::map<int, int>> combs[GEN_CONSTS::LENGTH];
    std::vector<std::map<int, int>> goodCombs;
    for (int i = 0; i < GEN_CONSTS::LENGTH; i++)
    {
        std::cout << GEN_CONSTS::GEN_LIST[i].to_string() << std::endl;
        //std::cout << "Hello, World!" << std::endl;
    }
    for(int i = 0; i < GEN_CONSTS::MAX_SPACE; i++){
        
    }
}