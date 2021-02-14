#include "TextBook.h"

// constructor, destructor

TextBook::TextBook() 
{
    
}

TextBook::TextBook(string url="<Not set>") {
    this->url = url;
}

TextBook::TextBook(const TextBook &ref) 
{
    
}

TextBook::~TextBook() 
{
    cout << "TextBook object destroyed." << endl;
}

// url functions

string TextBook::GetURL() 
{
    return this->url;
}

void TextBook::SetURL(string url) 
{
    this->url = url;
}
