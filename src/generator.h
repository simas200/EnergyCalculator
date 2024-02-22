#ifndef GENERATOR_CLASS
#define GENERATOR_CLASS

#include <string>

namespace energy_generator{
    class Generator
    {
    private:
        static int id;
        float power = 1;
        int space = 1, heat = 0, gen_id;
        std::string name;

    public:
        Generator(std::string name, float power, int space, int heat);
        Generator();
        ~Generator();
        std::string getName();
        float getPower();
        int getSpace();
        int getHeat();
        int getId();
        std::string to_string();
    };
}

#endif /* GENERATOR_CLASS */