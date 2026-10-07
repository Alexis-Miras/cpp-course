#include <iostream>
#include "searching_algorithm.h"
using namespace std;


SearchingAlgorithm::SearchingAlgorithm():
totalComparisons(0)
{
}

/* 
// Fonction virtuelle pure = classe abstraite
int search(vector<int> v, int x);
*/

void SearchingAlgorithm::displaySearchResults(ostream& s, int results, int target) {
    totalSearch++;

    s << "TotalComparisons = " << numberComparisons << endl;
    s << "TotalComparisons = " << totalComparisons << endl;
    s << "TotalComparisons = " << averageComparisons << endl;
};
