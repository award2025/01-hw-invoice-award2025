/**
 *   @file: invoice.cc
 * @author: Arthur Ward
 *   @date: 1/31/2023
 *  @brief: Program ask user the monitor type and quantity. It also asks user if they live in Ohio
 * and will either give a discount or add taxes onto the total. 
 * The program then provides a total price of the sale.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    double total;
    int liveOhio;
    char computerType;
    int quantity;

cout << "Enter a monitor type (s, v) followed by the quantity: ";
cin >> computerType;
cin >> quantity;
cout << endl << "Do you live in Ohio (1 for yes/ 2 for no)? ";
cin >> liveOhio;
cout << endl << "Monitors Invoice" << endl;
cout << computerType << " " << quantity << " " << liveOhio;










    return 0;
} /// main
