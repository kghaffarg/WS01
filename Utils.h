#pragma once
#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
namespace sdds  {
	    void toLowerCaseAndCopy(char des[], const char source[]);
        char ToLower(char ch);
        int StrCmp(const char* s1, const char* s2);
        void StrCpy(char* des, const char* src);
        void endList();
        void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
      
       
}
#endif // !SDDS_UTILS_H__
