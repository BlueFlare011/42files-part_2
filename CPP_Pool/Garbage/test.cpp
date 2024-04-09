#include <iostream>
using namespace std;
//order of execution of constructors in inheritance
class Base
{
   int x;
   public:
   // default constructor
   Base()
   {
      cout << "Base class default constructor\n";
} //parameterized constructor 
	  Base(int x) { this->x = x;
      cout << " Base class parameterized constructor\n";
   }
};

class Derived : public Base
{
   int y;
   public:
   // default constructor
   Derived()
   {
      cout << "Derived class default constructor\n";
   }
   // parameterized constructor
   Derived(int i):Base(i)
   {
      cout << "Derived class parameterized constructor\n";
   }
};

int main()
{
   Base b; //construct base class object
   Derived d1; //construct derived class object with default constructor
   Derived d2(10); //construct derived class object with parameterized constructor
}