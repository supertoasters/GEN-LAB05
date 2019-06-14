#ifndef GEN_LAB05_REGULARMOVIEPRICE_H
#define GEN_LAB05_REGULARMOVIEPRICE_H

#include "Price.h"

class RegularMoviePrice : public Price {
public:
    double movieType(unsigned int dayRented);
};


#endif //GEN_LAB05_REGULARMOVIEPRICE_H
