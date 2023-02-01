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
    double price; 

cout << "Enter a monitor type (s, v) followed by the quantity: ";
cin >> computerType;
cin >> quantity;
cout << "Do you live in Ohio (1 for yes/ 2 for no)? ";
cin >> liveOhio;
cout << "Monitors Invoice" << "_________________" << endl;
cout << "Monitor brand: ";

if(computerType == 's')
{
    cout << "Samsung" << endl;
    price = 190.00;
}else
{
    cout << "ViewSonic" << endl;
    price =170.00;
}
    
cout << "Quantity: " << quantity << endl;
cout << "Price: $" << price << endl;
cout << "Ohio Resident: ";

if(liveOhio ==1)
{
    cout << "Yes" << endl;
}else
{
    cout << "No" << endl;
}

double totalPrice = price*quantity;
cout << "Total price: $" << totalPrice;
cout << "_________________" << endl;
    return 0;
} /// main
