#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "searching_algorithm.h"

class LinearSearch : public SearchingAlgorithm {
    public:
        LinearSearch() {};
        virtual ~LinearSearch() = default;

        int search(vector<int>& v, int x) override {
            for (size_t i = 0; i < v.size(); i++) if (v[i] == x) return i;
            return -1;
        };
};


#endif