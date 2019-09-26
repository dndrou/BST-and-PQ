/**
 * A4/src/main-pq.cpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Note: This file is ignored in your submission.
 */

#include "a4-pq.hpp"

#include <vector>
#include <iostream>


void basicTest();

int main() {
    basicTest();
}

void basicTest() {
    const std::vector<int> data {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
    for(size_t testSize = 0; testSize <= data.size(); ++testSize) {
        std::vector<int> test;
        auto pos = data.begin();
        for(size_t index = 0; index < testSize; ++index) {
            test.push_back(*pos);
            ++pos;
        }
        
        int* begin = test.data();
        int* end = test.data() + testSize;
        
        std::cout << "Sequence before: ";
        for (int val : test) {
            std:: cout << val << ' ';
        }
        std::cout << std::endl;
        
        arrangeSeq(begin,end);
        
        std::cout << "Sequence after: ";
        for (int val : test) {
            std:: cout << val << ' ';
        }
        std::cout << "----" << std::endl;
    }
}
