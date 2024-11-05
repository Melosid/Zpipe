#pragma once
#ifndef ZPIPE_H
#define ZPIPE_H
#define SET_BINARY_MODE(file)
#define CHUNK 16384
#include <iostream>
#include <cstring>
#include <cassert>
#include "zlib.h"

class Zpipe {
public:
    int def(FILE*, FILE*, int); // compress
    int inf(FILE*, FILE*); // decompress
    void zerr(int);
    void usage(char**);
};
#endif