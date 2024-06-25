// change the relation from is-a to has-a - Diamond problem
#include <iostream>
 
class D
{
private:
    int val;
public:
    D(int x) { val = x; std::cout << "D Constructor, val = " << val << std::endl;}
    ~D() { std::cout << "D destructor called " << std::endl;}
    void printVal() { std::cout << "Val in D = " << val << std::endl;}
    
};
 
class P : virtual public D
{
    public:
        P() : D(1) { std::cout << "P Constructor" << std::endl;}
        ~P() { std::cout << "P destructor called " << std::endl;}
        void print() { std::cout << "Printing..." << std::endl;}
};
 
class S : virtual public D
{
    public:
        S() : D(2)
        { std::cout << "S Constructor" << std::endl;}
        ~S() { std::cout << "S destructor called " << std::endl;}
        void scan() { std::cout << "Scanning..." << std::endl;}
};
 
class PS : public P, public S
{
    public:
        PS(int x) : D(x) { std::cout << "PS Constructor" << std::endl;}
        ~PS() { std::cout << "PS destructor called " << std::endl;}
};
 
void printTask(P* pptr)
{
    pptr->print();
}
 
void scanTask(S* sptr)
{
    sptr->scan();
}
 
int main()
{
    P pObj;
    S sObj;
    PS psObj{10};
 
    printTask(&pObj);
    printTask(&psObj);
 
    scanTask(&sObj);
    scanTask(&psObj);
    
    return 0;
}
