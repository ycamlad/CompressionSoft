//#ifndef ZPIPE_H
//#define ZPIPE_H
//#define SET_BINARY_MODE(file)
//#include <iostream>
//#include <cstring>
//#include <cassert>
//#include "zlib.h"
//#include <stdio.h>
//#include <cstdio>
//
//
//class Zpipe {
//public:
//   
//    const long int CHUNK = { 16384 };
//    int def(FILE*, FILE*, int); // compress
//    int inf(FILE*, FILE*); // decompress
//    void zerr(int);
//    void usage(char**);
//};
//#endif


#ifndef ZPIPE_H
#define ZPIPE_H

#include <iostream>
#include <fstream>
#include <cassert>
#include "zlib.h"

class Zpipe {
public:
    const long int CHUNK = 16384;
    int compressFile(const std::string& inputFile, const std::string& outputFile);
    int decompressFile(const std::string& compressedFile, const std::string& outputFile);
    void zerr(int);
   // void usage(char**);
};

#endif
