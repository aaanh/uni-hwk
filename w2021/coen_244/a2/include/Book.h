#pragma once

#include "Reference.h"

class Book : public Reference
{
    public:
        Book(/* args */);
        ~Book();

        string GetPublisherInfo();
        void SetPublisherInfo(string);

        int GetNumberOfPages();
        void SetNumberOfPages(int);

    private:
        string publisher_info;
        int number_of_pages;

};