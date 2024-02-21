#include "generator.h"
#include "genList.h"
#include "combs.h"

#include <map>
#include <iostream>
#include <string>

using namespace energy_generator;

int main(){
    Combs combs[7];
    Combs *goodCombs;
    for (int i = 0; i < 7; i++)
    {
        std::cout << GEN_CONSTS::GEN_LIST[i].to_string() << std::endl;
        //std::cout << "Hello, World!" << std::endl;
    }

}

void addComb(Combs combs, std::map<int, int> newComb){
    combs.combs[combs.length+1] = newComb;
    combs.length++;
}