#include <vector>
#include <list>
#include <queue>         
#include <algorithm>
#include <stdlib.h>
#include <iostream>
using namespace std;

class node{
    public:
        int g,h;
        vector<vector<int>> state;
        node(){state = {{'4', '1', '2'},{'8', '3', '6'},{'5', '7', '0'}}; g = 0; h = 0;}

};

void generalSearch(node *A) {
    auto comp = [](const node*A, node*B){return ((A->g + A->h) > (B->g + B->h)); };
    priority_queue < node*,vector < node* >, decltype(comp)> pqueue(comp);
    node *curr = A;
}

