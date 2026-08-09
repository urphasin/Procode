#include <sstream>
#include <iostream>
// #include <type_traits> // c++20
// #include <random>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
// #include <tuple>
#include <stack>
#include <queue>
#include <deque>
// #include <list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// #include <bit>
#include <bitset>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include <memory>
using namespace std;


// CONSTANTS
const double pi = M_PI;
const std::string endColor = "\x1b[0m";
const std::string yellow = "\x1b[1;93m";


// Default Classes and Structs
class A {
    public:
        void hello() {
            cout << "Hello from A\n";
        }
};

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof";
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow";
    }
};
class Base {
public:
    ~Base() { cout << "Base destructor\n"; }   // NOT virtual
};
class Derived : public Base {
public:
    ~Derived() { cout << "Derived destructor\n"; }
};








// solve
void solve() {
    
}


//##############################

// MAIN
int main() {
    // Write below this line
    
    Base* p = new Derived();
    delete p;
  
  
  return 0;
}


