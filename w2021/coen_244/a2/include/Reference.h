#pragma once

#include <iostream>
#include <string>

using namespace std;

class Reference {
    public:
        Reference();
        Reference(const Reference &ref);

        static int instance_count;

        string GetTitle();
        void SetTitle(string);

        string GetAuthor();
        void SetAuthor(string);

        int GetPubYear();
        void SetPubYear(int);

        int GetUID();
        void SetUID(int);

        ~Reference();

    private:
        int uid; // unique identifier
        string title;
        string author;
        int pub_year; // year of publication

};