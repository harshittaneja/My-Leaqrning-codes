// CPP program to illustrate 
// concept of Virtual Functions 

#include <iostream> 
using namespace std; 

class base { 
public: 
	virtual void print() 
	{ 
		cout << "print base class" << endl; 
	} 

	void show() 
	{ 
		cout << "show base class" << endl; 
	} 
}; 

class derived : public base { 
public: 
	void print() 
	{ 
		cout << "print derived class" << endl; 
	} 

	void show() 
	{ 
		cout << "show derived class" << endl; 
	} 
}; 

int main() 
{ 
	base* bptr; 
	derived d; 
	bptr = &d; 

	// virtual function, binded at runtime 
	//virtual function declared then it will call derived class function but refernec here is of derived
	bptr->print(); 

	// Non-virtual function, binded at compile time  
	//non virtual function here base class function is called but refernec here is of derived
	bptr->show(); 
} 
/*
A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at Run-time.
*/

