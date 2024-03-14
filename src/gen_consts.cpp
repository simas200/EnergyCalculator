#include "gen_consts.h"
#include "generator.h"
#include <string>

using namespace energy_generator;

Generator GEN_CONSTS::GEN_LIST[7] = {
    Generator("Wind turbine", 1.2, 1, 5), //0
    Generator("Coal Generator", 1.6, 2, 25), //1
    Generator("Steam Engine", 1.2, 3, -100), //2
    Generator("Fission Reactor", 11, 10, 200), //3
    Generator("Fusion Reactor", 45, 16, 100), //4
    Generator("Dyson Sphere", 100000, 40, 1000), //5
    Generator("Dilution Refrigirator", 1, 20, -2500), //6
    //Generator("Perpetual Generator", 1.27, 1, 0)
};

const int GEN_CONSTS::MAX_HEAT = 600;
const int GEN_CONSTS::MAX_SPACE = 340;
const int GEN_CONSTS::LENGTH = 7; 
