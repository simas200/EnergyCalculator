#include "generator.h"
#include "genList.h"
#include "combs.h"

#include <map>
#include <iostream>
#include <string>

using namespace energy_generator;

int main(){
    Combs combs[GEN_CONSTS::LENGTH];
    Combs *goodCombs;
    for (int i = 0; i < GEN_CONSTS::LENGTH; i++)
    {
        std::cout << GEN_CONSTS::GEN_LIST[i].to_string() << std::endl;
        //std::cout << "Hello, World!" << std::endl;
    }
    for(int i = 0; i < GEN_CONSTS::MAX_SPACE; i++){
        
    }
}

void addComb(Combs combs, std::map<int, int> newComb){
    combs.combs[combs.length+1] = newComb;
    combs.length++;
}