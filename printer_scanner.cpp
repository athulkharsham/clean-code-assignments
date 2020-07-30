#include <iostream>
using namespace std;

class IPrinterScanner{
public:
    virtual void print() {} = 0; //pure virtual for interface/abstraction
};

class Printer : public IPrinterScanner{
public:
    virtual void print() {
        cout << "Printing";
    }
};

class Scanner: public IPrinterScanner{
public:
    virtual void print() {
        cout << "Scanning";
    }
};


int main()
{
    IPrinterScanner * obj1 = new Printer();
    obj1->print(); // Printing

    IPrinterScanner * obj2 = new Scanner();
    obj2->print(); //Scanning

    return 0;
}
