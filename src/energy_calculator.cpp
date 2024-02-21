#include "generator.h"
#include "genList.h"
#include "combs.h"

#include <map>
#include <iostream>
#include <string>

using namespace energy_generator;

int main(){
    Combs combs[7];
    for (int i = 0; i < 7; i++)
    {
        std::cout << GEN_CONSTS::GEN_LIST[i].to_string() << std::endl;
        //std::cout << "Hello, World!" << std::endl;
    }

}