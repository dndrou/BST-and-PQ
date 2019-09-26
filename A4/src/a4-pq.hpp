/**
 *
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Submission by Danielle Drouin
 */

#ifndef _A4_PQ_HPP_
#define _A4_PQ_HPP_

#include <queue>
#include <vector>
#include <algorithm>

struct Comp {
    bool operator()(const int& lhs,const int& rhs) const {
        //returns false if lhs has higher priority than rhs
        bool lhsEven=false, rhsEven=false;
        if(lhs%2==0){
            lhsEven = true;
        }
        if(rhs%2==0){
            rhsEven = true;
        }
        if(lhsEven && !rhsEven){
            return false;
        }
        if(!lhsEven && rhsEven){
            return true;
        }
        if(!lhsEven && !rhsEven){
            if(lhs>rhs){
                return false;
            }
            if(rhs>lhs){
                return true;
            }
        }
        if(lhsEven && rhsEven){
            if(lhs>rhs){
                return false;
            }
            if(rhs>lhs){
                return true;
            }
        }
        return true;
    }
};


void arrangeSeq(int* begin, int* end) {
    std::priority_queue<int, std::vector<int>, Comp> priorityq;
    int* lookThru = begin;
    int counter=0;

    for(int i=0;lookThru != end;i++){
        priorityq.emplace(*lookThru);
        lookThru++;
        counter++;
    }

    if(counter>0) {
        for (int j = 0; j < counter; j++) {
            *begin = priorityq.top();
            priorityq.pop();
            begin++;
        }
    }

}

#endif //_A4_PQ_HPP_
