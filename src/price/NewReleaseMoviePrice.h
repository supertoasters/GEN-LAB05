//
// Created by Caroline on 14.06.2019.
//

#ifndef GEN_LAB05_NEWRELEASEMOVIEPRICE_H
#define GEN_LAB05_NEWRELEASEMOVIEPRICE_H

#include "Price.h"

class NewReleaseMoviePrice : public Price {
public:
    double movieType(unsigned int dayRented);
};


#endif //GEN_LAB05_NEWRELEASEMOVIEPRICE_H
