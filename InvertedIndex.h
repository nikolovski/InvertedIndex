//
// Created by Martino Nikolovski on 6/23/16.
//

#ifndef INVERTEDINDEX_INVERTEDINDEX_H
#define INVERTEDINDEX_INVERTEDINDEX_H

#include <string>
#include <map>
#include <vector>

using namespace std;

class InvertedIndex{
private:
    map<string,pair<int,vector<pair<int,int>>>> words;
public:
    InvertedIndex(string,string);
    bool filter_word(string &);
    void print_header(ofstream &);
};
#endif //INVERTEDINDEX_INVERTEDINDEX_H
