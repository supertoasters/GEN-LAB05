// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "price/Price.h"
#include "price/RegularMoviePrice.h"

class Movie {
public:
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;
    static const int CHILDREN    = 2;

    Movie( const std::string& title, Price* priceCode = new RegularMoviePrice());

    Price* getPriceCode() const;
    void setPriceCode( Price* arg );
    std::string getTitle() const;

private:
    std::string _title;
    Price* _priceCode;
};

inline Movie::
Movie( const std::string& title, Price* priceCode )
        : _title( title )
        , _priceCode( priceCode )
{}

inline Price* Movie::
getPriceCode() const { return _priceCode; }

inline void Movie::
setPriceCode( Price* arg ) { _priceCode = arg; }

inline std::string Movie::
getTitle() const { return _title; }

#endif // MOVIE_H