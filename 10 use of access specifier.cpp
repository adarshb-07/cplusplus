#include <iostream>
using namespace std;

class base
{
 	private:        // This is by default and can't access outside the class
        int a;

 	protected:      // This can't access outside the class expect derived class
 	    int b;

 	public:         //It can be access anywhere in the programk
 	    int c;

 	base()
 	{
 	   a = 10;
 	   b = 20;
 	   c = 30;
 	}
};

class child: public base
{
 	public:
 	    void output()
 	    {
 	        cout << "a is not accessible because it is private member of parent class" << endl;      //Because it is the private member of parent class
            cout << "value of b is " << b << endl;      //b becomes protected member in child class
            cout << "value of c is " << c << endl;      //c becomes public members in child class
 	    }
};
int main()
{
     child c; //object of Child class
     c.output();
     //c.a = 1;    private member can't be accessed outside of class
     //c.b = 2;    b is now private member of derived class
     //c.c = 3;    c is also now a private member of derived class
     return 0;
}
