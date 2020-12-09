//#define XERR
#include "string/string.ih"
#include "page/page.ih"
#include "book/book.ih"

int main()
{
    String string; //Constructor 1
    const char* s1 = "hoi, hoi!";
    String string1(s1); //Constructor 2
    String string2("Hey!"); //Constructor 2
    String string3(move(string2)); //Moved: resets string2 to default
    String string4(String("Doei")); //Constructor 2
    String string5(string4); //Copied
}
