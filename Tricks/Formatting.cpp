#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << left << setw(15) << "Name" << right << setw(10) << "Age\n";
  cout << left << setw(15) << "John" << right << setw(10) << "25\n";
  cout << left << setw(15) << "Sarah" << right << setw(10) << "27\n";
}