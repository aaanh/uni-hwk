#pragma once

#include "Book.h"

class TextBook : public Book
{
    public:
        TextBook(/* args */);
        virtual ~TextBook();

        string GetURL();
        void SetURL(string);

    private:
        string url;

};