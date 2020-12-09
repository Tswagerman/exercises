//#define XERR
#include "string.ih"

String::String(String&& tmp)
//:   
{
    cout << "Moved!" << endl;
    d_size = tmp.d_size;
    d_string = tmp.d_string;
    tmp.d_size = 0;
    tmp.d_string = nullptr;
}
