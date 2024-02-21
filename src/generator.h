#ifndef GENERATOR_CLASS
#define GENERATOR_CLASS

#include <string>

namespace energy_generator{
    class Generator
    {
    private:
        static int id;
        int gen_id;
        float power = 1;
        int space = 1, heat = 0;
        std::string name;

    public:
        Generator(std::string name, float power, int space, int heat);
        ~Generator();
        std::string getName();
        float getPower();
        int getSpace();
        int getHeat();
        std::string to_string();
    };
}

#endif /* GENERATOR_CLASS */