#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "searching_algorithm.h"

class JumpSearch : public SearchingAlgorithm {
    public:
        JumpSearch() {};
        int search(vector<int> v, int x) override {
            sort(v.begin(), v.end());
            int n = sqrt(v.size());
            for (size_t i = 0; i < n; i+=n) {
                if (v[i] <= v[n]) {
                    for (size_t j = i; j < j+n; i++) {
                        if (v[i] == x) return i;
                    }
                }
            }
            return -1;
        };
};


#endif