#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

using namespace std;
#include <vector>

class SearchingAlgorithm {
    private:
        int numberComparisons;
        int totalComparisons;
        int totalSearch;
        int averageComparisons;
    public:
        SearchingAlgorithm();
        virtual ~SearchingAlgorithm() = default;

        virtual int search(vector<int>& v, int x) = 0; // const vector<int>& v
        
        void displaySearchResults(ostream& s, int results, int target);
};


#endif