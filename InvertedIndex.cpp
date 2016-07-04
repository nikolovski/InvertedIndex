//
// Created by Martino Nikolovski on 6/23/16.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include "InvertedIndex.h"


/*
 * Constructor with 2 input parameters, input file and output file
 */
InvertedIndex::InvertedIndex(string input_file) {

    int word_count=0;
    vector<pair<int,int>> current_vector;
    string line;
    ifstream infile;
    infile.open(input_file);
    print_header();
    cout<<"Input file path:"<<input_file<<endl<<endl;

    //populating the map
    for (int line_number = 0; getline(infile,line); ++line_number) { //iterating lines
        stringstream ss(line);
        string word;
        for (int position = 0; ss>>word; ++position) { //iterating words
            if(!filter_word(word)) continue;
            if(words.count(word)){ word_count=words[word].first+1; }
            else{ word_count=1; }
            current_vector=words[word].second;
            current_vector.push_back(make_pair(line_number,position));
            words[word]=make_pair(word_count,current_vector);
        }
    }
    //outputing the result
    for (map<string,pair<int,vector<pair<int,int>>>>::iterator map_it=words.begin(); map_it!=words.end(); ++map_it){
        cout << map_it->first<<" "<<map_it->second.first<<" [";
        current_vector=map_it->second.second;
        for (int i = 0; i < current_vector.size(); ++i) {
            cout<<"("<<current_vector[i].first<<","<<current_vector[i].second<<")";
        }
        cout<<"]"<<endl;
    }
    infile.close();
}
/**
 * Function that takes string as a reference and removes the special characters
 * return false if the filtered string is empty. Otherwise, true
 *
 */
bool InvertedIndex::filter_word(string &str) {
    string temp = "";
    for (int i = 0; i < str.length(); ++i) {
        if((str.at(i)>='a' && str.at(i)<='z')||( str.at(i)>='A' && str.at(i)<='Z')){temp+=str.at(i);}
    }
    str=temp;
    return str==""?false:true;
}

void InvertedIndex::print_header(){
    cout<<"================================================="<<endl;
    cout<<"InvertedIndex provided by\n"
            "          .--.  ,---.  _______ ,-..-. .-. .---.\n"
            "|\\    /| / /\\ \\ | .-.\\|__   __||(||  \\| |/ .-. )\n"
            "|(\\  / |/ /__\\ \\| `-'/  )| |   (_)|   | || | |(_)\n"
            "(_)\\/  ||  __  ||   (  (_) |   | || |\\  || | | |\n"
            "| \\  / || |  |)|| |\\ \\   | |   | || | |)|\\ `-' /\n"
            "| |\\/| ||_|  (_)|_| \\)\\  `-'   `-'/(  (_) )---'\n"
            "'-'  '-'            (__)         (__)    (_)"<<endl<<endl;
    cout<<"================================================="<<endl;
}
