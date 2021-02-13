#include "TextBook.h"

// constructor, destructor

TextBook::TextBook() 
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
