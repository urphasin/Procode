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
    after reset with defaultfloat it would still print significant figures are the current setprecision till you reset to setprecision(6)
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


  // Task 3 : 
}