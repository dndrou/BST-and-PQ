/**
 * A4/src/main-bst.cpp
 *
 * Copyright 2019 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Note: This file is ignored in your submission.
 */

#include "a4-bst.hpp"
#include "tNode.hpp"
#include <vector>
#include <iostream>

void deleteTree(cse250::tNode<int>* root) {
    if(root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

namespace cse250 {
    size_t depth = 0;
}

void printTree(cse250::tNode<int>* root) {
    if(root != nullptr) {
        std::string padding(cse250::depth,'-');
        
        std::cout << padding << root->value << '\n';
        ++cse250::depth;
        std::cout << padding << "Left:" << '\n';
        printTree(root->left);
        std::cout << padding << "Right:" << '\n';
        printTree(root->right);
        --cse250::depth;
    }
} 

void basicTest();

int main() {
    basicTest();
}


void basicTest() {
    const std::vector<int> data {0,1};
    
    for(size_t testSize = 0; testSize <= data.size(); ++testSize) {
        std::vector<int> test;
        auto pos = data.begin();
        for(size_t index = 0; index < 7; ++index) {
            test.push_back(*pos);
            ++pos;
        }
        
        int* begin = test.data();
        int* end = test.data() + 2;
        cse250::tNode<int>* result = preToTree(begin,end);
        
        std::cout << "Contents of tree:" << std::endl;
        printTree(result);
        std::cout << "----" << std::endl;
        
        deleteTree(result);
    }
}
