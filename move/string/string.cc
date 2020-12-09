//#define XERR
#include "string.ih"

String::~String()
{
    delete d_string;
}
