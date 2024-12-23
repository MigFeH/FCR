#include <iostream>

using std::cout; // cout will be the same as std::cout
using std::endl; // endl will be the same as std::endl

void set23(int& number)
{
    number = 23;
}

int main()
{
    int* p;          // p is a pointer to an int
    int number = 101; // number is an int

    cout << "number: " << number << endl;

    p = &number; // copy to p the address of number. p now points to number
    *p = 555;    // write 555 in the address pointed by p, i.e., in number

    cout << "number: " << number << endl;
    cout << "*p: " << *p << endl;

}



