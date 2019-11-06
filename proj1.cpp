#include <vector>
#include <list>
#include <queue>         
#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include "proj1.h"
using namespace std;




int general() {
 
}



 

int uniform(int alpha, int beta) {
    int row, col;
    row = 2;
    col = 2;

    // Find head node
    // left
    // down
    // right
    uniform(1,2); // recursion through the nodes to find best path

}

int AStarMisplaced() {
    
}

int AStarManhattan() {

}



// int left(node->head) {
//     if(node->left != NULL)
//         curr->left;
//     uniform(curr,goal);

    
// }




int main() {
    int check, type;
    cout << "Type '1' to use a default puzzle, or '2' to enter your own puzzle." << endl;
    cin >> check;
    cout << "Type '1' for uniform, '2' for Misplaced, '3' for Manhattan." << endl;
    cin >> type;
    switch (type)
    {
    case 1:
        /* code */

        break;
    case 2:
        /* code */
        
        break;
    case 3:
        /* code */
        
        break;
    
    default:
        break;
    }

}