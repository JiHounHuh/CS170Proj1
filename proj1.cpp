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
    cout << "Welcome to Ji Houn Huh's 8-puzzle solver." << endl;
    cout << "Type \"1\" to use a default puzzle, or \"2\" to enter your own puzzle." << endl << endl;
    
    cin >> check;

    switch (check)
    {
    case 1:
        /* code */
        // USING DEFAULT
        break;
    case 2:
        // MAKE INPUT FOR CUSTOM PUZZLE
        cout << "\t Enter your puzzle, use a zero to represent the blank" << endl;
        cout << "\t Enter the first row, use space or tabs between numbers\t";
        //vector<int>first[3];
        //cin >> first;
        cout << "\t Enter the second row, use space or tabs between numbers\t";
        //vector<int>second[3];
        //cin >> second;
        cout << "\t Enter the third row, use space or tabs between numbers\t";

        /* code */
        break;
    
    default:
        break;
    }
    cout << "\tEnter your choice of algorithm" << endl;
    cout << "\t    1. Uniform Cost Search" <<endl;
    cout << "\t    2. A* with the Misplaced Tile heuristic" << endl;
    cout << "\t    3. A* with the Manhattan distance heuristic" << endl << endl;
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
    cout << endl;
    generalSearch(B);
}