#include <vector>
#include <list>
#include <queue>         
#include <algorithm>
#include <stdlib.h>
#include <iostream>

using namespace std;

vector<vector<int>> goal = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}}; // Default set goal

class node{
    public:
        int g,h;
        vector<vector<int>> state;
        node(){state = {{4, 1, 2},{8, 3, 6},{5, 7, 0}}; g = 0; h = 0;} // default initial state 
        node(node*copy){
            this->g = copy->g; // copy
            this->h = copy->h;
            this->state = copy->state;
        }

};
class searches{
    public:
        virtual void heuristic(node*) = 0; 
};


class ucs:public searches{
    public:
        void heuristic(node* h){} // nothing to do for hardcoded 0 for heuristics
};

class misplaced:public searches{
    public:
        void heuristic(node* h){
            int value = 0;
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    if(h->state[i][j] != goal[i][j]) value++; // if the current state is not the same, add weight
                }
            }
            h->h = value;
        }
};

class manhattan:public searches{
    public:
        void heuristic(node* h){
            int temp1 = 0,temp2 = 0,temp3 = 0,total = 0;
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    temp1 = h->state[i][j];
                    if(temp1 != 0) {
                        temp2 = (temp1 - 1)/3;
                        temp3 = (temp1 - 1)%3;
                        total += abs(temp2 - i) + abs(temp3 - j); // math to calculate the path and movement needed 
                    }
                    
                    
                }
            }
            h->h = total;
        }
};

searches* cheese = new ucs();



bool moveUp(node *B) {
    for(int i = 1; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(B->state[i][j] == 0) {
                B->state[i][j] = B->state[i-1][j];
                B->state[i-1][j] = 0;
                return true;
            }
        }
    }
    return false;
}

bool moveDown(node *B) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(B->state[i][j] == 0) {
                B->state[i][j] = B->state[i+1][j];
                B->state[i+1][j] = 0;
                return true;
            }
        }
    }
    return false;
}

bool moveLeft(node *B) {
    for(int i = 0; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
            if(B->state[i][j] == 0) {
                B->state[i][j] = B->state[i][j-1];
                B->state[i][j-1] = 0;
                return true;
            }
        }
    }
    return false;
}

bool moveRight(node *B) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            if(B->state[i][j] == 0) {
                B->state[i][j] = B->state[i][j+1];
                B->state[i][j+1] = 0;
                return true;
            }
        }
    }
    return false;
}

void printBoard(node *A) {
    for(int i = 0; i < 3; i++) {
        cout << "\t\t";
        for(int j = 0; j < 3; j++) {
            cout << A->state[i][j] << " ";
        }
        if(i != 2) cout << endl;
    }
}

void printFirst(node *A) {
    for(int i = 0; i < 3; i++) {
        if(i != 0) cout << "\t\t";
        for(int j = 0; j < 3; j++) {
            cout << A->state[i][j] << " ";
        }
        if(i != 2) cout << endl;
    }
}


void generalSearch(node *A) {
    unsigned int expanded = 0;
    unsigned int maxnum = 0;
    auto comp = [](const node*A, node*B){return ((A->g + A->h) > (B->g + B->h)); };
    priority_queue < node*,vector < node* >, decltype(comp)> pqueue(comp);
    node *curr;
    node *temp;
    pqueue.push(A);
    while(!pqueue.empty()) {
        curr = pqueue.top();
        if(pqueue.size() > maxnum) maxnum = pqueue.size();
        pqueue.pop();
        if(curr->state == goal) {
            cout << "Goal!!\n" << endl;
            cout << "To solve this problem the search algorithm expanded a total of " << expanded << " nodes." << endl;
            cout << "The maximum number of nodes in the queue at any one time was " << maxnum << '.' << endl;
            cout << "The depth of the goal node was " << curr->g << '.' << endl;
            return;
        }
        
        if(pqueue.empty()){
            cout << "Expanding state ";
            printFirst(curr);
            cout << endl << endl;
        }
        else{
            cout << "The best state to expand with a g(n)= " << curr->g << " and h(n) = " << curr->h << " is..." << endl;
            printBoard(curr); 
            cout << "Expanding this node..." << endl << endl;
        }
        curr->g++;
        
        temp = new node(curr);
        if(moveUp(temp)){ cheese->heuristic(temp);expanded++; /*set heuristic value to node*/ pqueue.push(temp); }  temp = new node(curr);
        if(moveDown(temp)){ cheese->heuristic(temp);expanded++; pqueue.push(temp); } temp = new node(curr);
        if(moveLeft(temp)){ cheese->heuristic(temp);expanded++; pqueue.push(temp); } temp = new node(curr);
        if(moveRight(temp)){ cheese->heuristic(temp);expanded++; pqueue.push(temp); }
    }
    return;
}





