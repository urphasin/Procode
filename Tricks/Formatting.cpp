#include <iostream>
#include <iomanip>

using namespace std;

const char* underline = "\x1b[4m";
const char* endformat = "\x1b[0m";
const std::string yellow = "\x1b[1;93m";


int main() {
  // Task 0 : Decimal Point vs Significant Figures
  cout << underline << "\nTask 0: Decimal Point vs Significant Figures" << endformat << "\n";

  double num = 0.020137809;
  cout << setprecision(7);
  cout << left << setw(30) << "7 significant figures" << setw(5) << "->" << right << setw(10) << num << endl;

  cout << fixed << setprecision(4);
  cout << left << setw(30) << "4 decimal places" << setw(5) << "->" << right << setw(10) << num << endl;

  /*
    fixed is independent of setprecion.
    after reset with defaultfloat it would still print significant figures,
    at the current setprecision till you reset to setprecision(6)
    then it prints default 6-significant figures rather than 6-decimal places.

    cout << defaultfloat << setprecision(6) << endl;
    num = 62.0123456;
    cout << num << "\n";
  */


  // Task 1 : Basic Width
  cout << underline << "\nTask 1 : Basic Width" << endformat << "\n";
  cout << left << setw(15) << "Name" << right << setw(10) << "Age\n";
  cout << left << setw(15) << "John" << right << setw(10) << "25\n";
  cout << left << setw(15) << "Sarah" << right << setw(10) << "27\n";


  // Task 2 : Decimal Formatting
  cout << underline << "\nTask 2 : Decimal Formatting" << endformat << "\n";
  double a = 12.345678;
  double b = 98.1;
  double c = 7.0;

  cout << fixed << setprecision(2) << a << "\n";
  cout << b << "\n";
  cout << c << "\n";


  // Task 3 : Build a Table
  cout << defaultfloat << setprecision(6); // reset to normal formatting
  cout << underline << "\nTask 3 : Build a Table" << endformat << "\n";
  char* item1 = "Apple"; // make char* then compiler cries because "Apple" is string literal not modifiable. 
  double price1 = 1.5;
  int quantity1 = 4;

  const char* item2 = "Banana"; // fix: make char* into const char*, then the left is unmodifiable and so it the "Banana" on the right.
  double price2 = 0.75;
  int quantity2 = 12;

  const char* item3 = "Orange";
  double price3 = 2.25;
  int quantity3 = 3;


  /*
    Texts/labels you generally want to left align
    Numbers you generally want to right align
  */

  cout << left << setw(15) << "Item" << right << setw(10) << "Price" << right << setw(12) << "Quantity\n";

  cout << left << setw(15) << item1 << right << setw(10) << fixed << setprecision(2) << price1
    << defaultfloat << setprecision(6) << right << setw(12) << quantity1 << "\n";

  cout << left << setw(15) << item2 << right << setw(10) << fixed << setprecision(2) << price2
    << defaultfloat << setprecision(6) << right << setw(12) << quantity2 << "\n";

  cout << left << setw(15) << item3 << right << setw(10) << fixed << setprecision(2) << price3
    << defaultfloat << setprecision(6) << right << setw(12) << quantity3 << "\n";

}