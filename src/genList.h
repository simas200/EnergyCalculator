#ifndef GEN_CONSTS_CLASS
#define GEN_CONSTS_CLASS

#include "generator.h"

namespace energy_generator {
    class GEN_CONSTS{
    public:
        static energy_generator::Generator GEN_LIST[7];
        static const int MAX_HEAT;
        static const int MAX_SPACE;
        static const int LENGTH;
    };
}
#endif /* GEN_CONSTS_CLASS */ 