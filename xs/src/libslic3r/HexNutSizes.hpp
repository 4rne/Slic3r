#ifndef slic3r_HexNutSizes_hpp_
#define slic3r_HexNutSizes_hpp_

#include "libslic3r.h"

namespace Slic3r
{
    class HexNutSizes
    {
        public:
        static void getSize(std::string thread_size, double size[]);
    };
}
#endif