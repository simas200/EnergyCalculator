#include "genList.h"
#include "generator.h"
#include <string>

using namespace energy_generator;

Generator GEN_CONSTS::GEN_LIST[7] = {
    Generator("Coal Generator", 1.6, 2, 25),
    Generator("Steam Engine", 1.2, 3, -100),
    Generator("Fission Reactor", 11, 10, 200),
    Generator("Fusion Reactor", 45, 16, 100),
    Generator("Dyson Sphere", 100000, 40, 1000),
    Generator("Dilution Refrigirator", 1, 20, -2500),
    Generator("Perpetual Generator", 1.27, 1, 0)
};

const int GEN_CONSTS::MAX_HEAT = 600;
const int GEN_CONSTS::MAX_SPACE = 340;