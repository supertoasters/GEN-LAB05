//
// Created by Caroline on 14.06.2019.
//

#include "RegularMoviePrice.h"

double RegularMoviePrice::movieType(unsigned int dayRented) {
    double amount = 2;
    if (dayRented > 2) {
        amount += (dayRented - 2) * 1.5;
    }
    return  amount;
}