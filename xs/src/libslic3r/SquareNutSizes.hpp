#ifndef slic3r_SquareNutSizes_hpp_
#define slic3r_SquareNutSizes_hpp_

#include "libslic3r.h"

namespace Slic3r
{
    class SquareNutSizes
    {
        public:
        static void getSize(std::string thread_size, double size[]);
    };
}

#endif