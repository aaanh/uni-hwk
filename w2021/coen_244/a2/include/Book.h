#pragma once

#include "Reference.h"

/**
 * Book class inherits from Reference
 * 
 * Unique methods: <string> GetPublisher(), <void> SetPublisher(string),
 * <int> GetNumberOfPages(), <void> SetNumberOfPages(int)
 */
class Book : public Reference
{
    public:
        Book(/* args */);
        ~Book();

        string GetPublisher() const;
        void SetPublisher(string);

        int GetNumberOfPages() const;
        void SetNumberOfPages(int);

        void PrintBookInfo() const;

    private:
        string publisher;
        int number_of_pages;

};