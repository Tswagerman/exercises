//#define XERR
#include "string.ih"

String::String(const String& other)
//:
{
    cout << "Copied!" << endl;
    d_size = other.d_size;
    d_string = new char[d_size];
    memcpy(d_string, other.d_string, d_size);
}
