#pragma once

#include "Book.h"

class TextBook : public Book
{
    public:
        TextBook(); // default constructor
        /**
         * overloading constructor with initializer list for TextBook class
         * 
         * @param int uid
         * @param string title
         * @param string author
         * @param int pub_year
         * 
         * @param string publisher
         * @param int number_of_pages
         * 
         * @param string url
         * 
         */
        TextBook(int, string, string, int, string, int, string);
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