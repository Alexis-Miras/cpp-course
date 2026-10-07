#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "searching_algorithm.h"

class BinarySearch : public SearchingAlgorithm {
    public:
        BinarySearch();
        virtual ~BinarySearch() = default;

        int search(vector<int> v, int x) override {
            sort(v.begin(), v.end());
            int n = v.size();
            for (size_t i = 0; i < n; i++) {
                if (v[i] <= v[n]) return i;
                if (v[i] < v[n/2]) {
                    n = n/2;
                } else {
                    n = n + n/2;
                }
            }
            return -1;
        };
};


#endif