#pragma once

#include "Reference.h"

/**
 * Book class inherits from Reference
 * 
 * Unique methods: <string> GetPublisher(), <void> SetPublisher(string),
 * <int> GetNumberOfPages(), <void> SetNumberOfPages(int)
 * 
 * Unique private data members: <string> publisher, <int> number_of_pages
 * 
 */
class Book : public Reference
{
    public:
        Book(/* args */); // constructor for initialization 
        Book( string publisher, int number_of_pages ); // constructor with default params
        ~Book(); // destructor 

        /**
         * Get the publisher name from Book class object
         * @return <string> publisher
         * 
         */
        string GetPublisher() const;

        /**
         * Modify the publisher name from Book class object
         * @param string publisher
         * 
         */
        void SetPublisher(string);

        /**
         * Get the number of pages from Book class object
         * @return <int> number_of_pages
         * 
         */
        int GetNumberOfPages() const;

        /**
         * Modify the number of pages from Book class object
         * @param int number_of_pages
         * 
         */
        void SetNumberOfPages(int);

        /**
         * Print to console all the available data members from Book class object
         * 
         */
        void PrintBookInfo() const;

    private:
        string publisher; // publisher name of the book instance
        int number_of_pages; // number of pages that the book instance has

};