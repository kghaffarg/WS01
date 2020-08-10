#pragma once
const int MAX_WORD_LEN = 21;
#ifndef SDDS_WORD_H__
#define SDDS_WORD_H__
namespace sdds {
    struct Word {
        char letters[MAX_WORD_LEN];
        int count;
    };


    int StrLen(const char* str);
    bool isAlpha(char ch);
    void trim(char word[]);
    void addWord(Word words[], int* index, const char newWord[]);
    int searchWords(const Word words[], int num, const char word[]);
    void print(const Word* w, bool gotoNextLine, int len);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word* words, int num);
    void wordStats();
    void programTitle();


}
#endif // !SDDS_WORD_H__

