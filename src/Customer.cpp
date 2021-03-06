// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"
#include "price/Price.h"

using std::ostringstream;
using std::vector;

using namespace std;

double Customer::calculateAmount(Rental rental) {
    return rental.getMovie().getPriceCode()->movieType(rental.getDaysRented());
}

int Customer::addFrequentRenterPoints(Rental rental) {
    int frequentRenterPoints = 1;

    /* Add bonus for a two day new release rental */
    if ((rental.getMovie().getPriceCode() == Movie::NEW_RELEASE)
        && rental.getDaysRented() > 1) {
        ++frequentRenterPoints;
    }

    return frequentRenterPoints;
}

string Customer::statement() {

    double totalAmount = 0;
    int frequentRenterPoints = 0;
    vector<Rental>::iterator iter = _rentals.begin();
    vector<Rental>::iterator iter_end = _rentals.end();
    ostringstream result;

    result << "Rental Record for " << getName() << "\n";

    for (; iter != iter_end; ++iter) {
        double thisAmount = 0;
        Rental thisRental = *iter;

        /* Determine amounts for each line */
        thisAmount = calculateAmount(thisRental);

        /* Add frequent renter points */
        frequentRenterPoints += addFrequentRenterPoints(thisRental);

        // show figures for this rental
        result << "\t" << thisRental.getMovie().getTitle() << "\t"
               << thisAmount << "\n";
        totalAmount += thisAmount;
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n";
    result << "You earned " << frequentRenterPoints
           << " frequent renter points";
    return result.str();
}