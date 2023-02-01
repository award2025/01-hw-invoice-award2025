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

    double total; //total price of everything
    int liveOhio; // stores value 1 if user lives in ohio, 2 if not
    char computerType; //either Samsung or ViewSonic
    int quantity; //quantity of computers
    double price; //price of computer depending on brand selected
    double tax;
    double subtotal;
    double discount; 
    double totalPrice;
    double reduction; // discount %

cout << "Enter a monitor type (s, v) followed by the quantity: ";
cin >> computerType;
cin >> quantity;
cout << "Do you live in Ohio (1 for yes/ 2 for no)? ";
cin >> liveOhio;
cout << "Monitors Invoice" << endl << "_________________" << endl;
cout << "Monitor brand: ";

if(computerType == 's') // determines price based on brand selected
{
    cout << "Samsung" << endl;
    price = 190.00;
}else
{
    cout << "ViewSonic" << endl;
    price =170.00;
}

    
cout << "Quantity: " << quantity << endl;
cout << setw(4) << fixed << setprecision(2) << fixed;
cout << "Price: $" << price << endl;
cout << "Ohio Resident: ";

if(liveOhio ==1) //Gives output yes if user lives in Ohio, no if not and sets taxes accordingly
{
    cout << "Yes" << endl;
    tax = .07;
}else
{
    cout << "No" << endl;
}

 if(quantity >= 3)// 5% discount if 3 or monitors was chosen
{
    reduction = .05;
}
   
    totalPrice = price * quantity;
    discount = reduction * totalPrice; 
    subtotal = totalPrice - discount; 
    tax = subtotal * tax; 
    total = tax + subtotal;

cout << "Total price: $" << totalPrice;
cout << endl << "_________________" << endl;
cout << "Discount: $" << discount << endl;
cout << "Subtotal: $" << subtotal << endl;
cout << "Taxes: $" << tax;
cout << endl << "_________________" << endl;
cout << "_________________" << endl;
cout << "Total: $" << total;
cout << endl << "_________________" << endl;
cout << "_________________" << endl;

    return 0;
} /// main
