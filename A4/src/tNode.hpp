/**
 * A4/src/tNode.hpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 */

#ifndef _TNODE_HPP_
#define _TNODE_HPP_

namespace cse250 {
    template <typename T>
    struct tNode;
}

template <typename T>
struct cse250::tNode {
    T value;
    cse250::tNode<T>* left;
    cse250::tNode<T>* right;
};

#endif //_TNODE_HPP_
