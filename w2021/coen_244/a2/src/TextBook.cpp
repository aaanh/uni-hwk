#include "TextBook.h"

// constructor, destructor

TextBook::TextBook(/* args */) 
{
    
}

TextBook::~TextBook() 
{
    
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
