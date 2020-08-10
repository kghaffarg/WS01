#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstringt.h>
using namespace std;

#include "Utils.h"
#include "Word.h"
namespace sdds {

    char ToLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') ch += ('a' - 'A');
        return ch;
    }

    int StrCmp(const char* s1, const char* s2) {
        int i;
        for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
        return s1[i] - s2[i];
    }
    void StrCpy(char* des, const char* src) {
        int i;
        for (i = 0; src[i]; i++) des[i] = src[i];
        des[i] = 0;
    }
    void endList() {
            cout << "------------------------------------------------" << endl;
        }
        void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord) {
            cout << "Total number of words used: " << totNoWrds << endl;
            cout << "Total number of words overall: " << totalOverAll << endl;
            cout << "Longest word used had " << longestWord << " characters." << endl;
        }

       

        
}

