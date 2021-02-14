#pragma once

#include "Book.h"

class TextBook : public Book
{
    public:
        TextBook();
        TextBook(string url); // default constructor
        TextBook(const TextBook &ref); // copy constructor
        ~TextBook(); // destructor

        /**
         * Get the uniform source locator (url) data member from the TextBook class object
         * @return <string> url
         * 
         */
        string GetURL();

        /**
         * Modify the url data member from the TextBook class object
         * @param string url
         * 
         */
        void SetURL(string);

    private:
        string url;

};