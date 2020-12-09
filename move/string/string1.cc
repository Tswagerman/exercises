//#define XERR
#include "string.ih"

String::String()
//:
{
    cout << "Constructor 1 called!" << endl;
    d_size = 0;
    d_string = new char[d_size];
}
