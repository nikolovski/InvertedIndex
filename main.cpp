//
// Created by Martino Nikolovski on 6/23/16.
//
#include <iostream>
#include "InvertedIndex.h"
using namespace std::chrono;
using namespace std;

int main(int argc, char* argv[]) {
    if(argc!=3){
        cout<<"Please enter the path of the input file + the file name + the file extension and the output file name + the output file name extension! "<<endl;
    }
    else {
        InvertedIndex ii(argv[1],argv[2]);
    }
}