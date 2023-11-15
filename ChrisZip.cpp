#include <iostream>
//#define _crt_secure_no_warnings 1 
//#define _winsock_deprecated_no_warnings 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#include "zpipe.h"




int main(int argc, char ** argv)
{
    Zpipe zpipe;
    int ret;
    FILE* filename, * zipped;
    std::string s;

   zpipe.compressFile("C:/Users/chris/tocompress/1e00-Big House Blues (Nick Version).mkv", "C:/Users/chris/compressed/1e00-Big House Blues (Nick Version).mkv");

   // zpipe.decompressFile("C:/Users/chris/compressed/project c++.txt", "C:/Users/chris/decompressed/project c++.txt");

 /*   if (argc == 2) {
        filename = fopen(argv[1], "rb");
        s = argv[1];
        s = s + ".Z";
        zipped = fopen(&s[0], "w");
        ret = zpipe.def(filename, zipped, Z_DEFAULT_COMPRESSION);
        if (ret != Z_OK) {
            zpipe.zerr(ret);
        }
        return ret;
    }
    else if (argc == 3 && strcmp(argv[1], "-d") == 0) {
        zipped = fopen(argv[2], "rb");
        s = argv[2];
        s = s.substr(0, s.length() - 2);
        filename = fopen(&s[0], "w");
        ret = zpipe.inf(zipped, filename);
        if (ret != Z_OK) {
            zpipe.zerr(ret);
        }
        return ret;
    }
    else {
        zpipe.usage(argv);
        return 1;
    }*/


    return 0;
}


