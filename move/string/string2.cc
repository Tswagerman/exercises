//#define XERR
#include "string.ih"

String::String(const char* string)
    //:
{
    cout << "Constructor 2 called!" << endl;
    d_size = strlen(string);
    d_string = new char[d_size];
    memcpy(d_string, string, d_size);
}
