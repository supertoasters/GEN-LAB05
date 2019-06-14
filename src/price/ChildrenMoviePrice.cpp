//
// Created by Caroline on 14.06.2019.
//

#include "ChildrenMoviePrice.h"

double ChildrenMoviePrice::movieType(unsigned int dayRented) {
    double amount = 1.5;
    if (dayRented > 3) {
        amount += (dayRented - 3) * 1.5;
    }
    return  amount;
}