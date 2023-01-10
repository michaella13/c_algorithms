#include <iostream>
using namespace std;
 
// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
class Car: public Vehicle{
 
};
 
// main function
int main()
{  
    // creating object of subclass will
    // invoke the constructor of base classes
    Car obj;
    
	   return 0;
}

