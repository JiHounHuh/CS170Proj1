#include <vector>
#include <list>
#include <queue>         
#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include "proj1.h"
using namespace std;


int main() {
    int check, type;
    node*B = new node();
    cout << "Type '1' to use a default puzzle, or '2' to enter your own puzzle." << endl;
    cin >> check;

    switch (check)
    {
    case 1:
        /* code */
        // USING DEFAULT
        break;
    case 2:
        // MAKE INPUT FOR CUSTOM PUZZLE
        /* code */
        break;
    
    default:
        break;
    }
    cout << "Type '1' for uniform, '2' for Misplaced, '3' for Manhattan." << endl;
    cin >> type;
    switch (type)
    {
    case 1:
        /* code */
        cheese = new ucs();
        break;
    case 2:
        /* code */
        cheese = new misplaced();
        break;
    case 3:
        /* code */
        cheese = new manhattan();
        break;
    
    default:
        cheese = new ucs();
        break;
    }
    generalSearch(B);
}