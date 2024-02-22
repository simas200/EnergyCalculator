#include "generator.h"

using namespace energy_generator;

int Generator::id = 0;

Generator::Generator(std::string name, float power = 1, int space = 1, int heat = 0)
{
    this->name = name;
    this->power = power;
    this->space = space;
    this->heat = heat;
    this->gen_id = Generator::id++;
}

Generator::Generator()
{
    this->name = "";
    this->power = 0;
    this->space = 1;
    this->heat = 0;
    this->gen_id = Generator::id++;
}

Generator::~Generator()
{
}

std::string Generator::getName() { return this->name; }
float Generator::getPower() { return this->power; }
int Generator::getSpace() { return this->space; }
int Generator::getHeat() { return this->heat; }
int Generator::getId() { return this->gen_id; }

std::string Generator::to_string(){
    std::string myString;
    myString = std::to_string(this->id) + ". " + this->name + ": power " + std::to_string(this->power) + ", space " + std::to_string(this->space)+ ", heat " + std::to_string(this->heat);
    return myString; 
}