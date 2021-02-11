#pragma once

#include "Reference.h"

class Book : public Reference
{
    public:
        Book(/* args */);
        ~Book();

        string GetPublisherInfo() const;
        void SetPublisherInfo(string);

        int GetNumberOfPages() const;
        void SetNumberOfPages(int);

    private:
        string publisher_info;
        int number_of_pages;

};