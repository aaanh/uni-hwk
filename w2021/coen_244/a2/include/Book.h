#pragma once

#include "Reference.h"

class Book : public Reference
{
    public:
        Book(/* args */);
        ~Book();

        string GetPublisher() const;
        void SetPublisher(string);

        int GetNumberOfPages() const;
        void SetNumberOfPages(int);

    private:
        string publisher;
        int number_of_pages;

};