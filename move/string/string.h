#ifndef INCLUDED_BOOK_
#define INCLUDED_BOOK_

#include <string>

class String
{
    size_t d_size;
    char* d_string;
    public:
        String();
        String(const char* string);
        String(const String& book);
        String(String&& book);
        ~String();

        void Print();

    private:
};
        
#endif
