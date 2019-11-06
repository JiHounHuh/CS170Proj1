#include <vector>
#include <list>
#include <queue>         
#include <algorithm>
#include <stdlib.h>
#include <iostream>
using namespace std;

vector<vector<int>> goal = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '0'}};
class node{
    public:
        int g,h;
        vector<vector<int>> state;
        node(){state = {{'4', '1', '2'},{'8', '3', '6'},{'5', '7', '0'}}; g = 0; h = 0;}
        node(node*copy){
            this->g = copy->g;
            this->h = copy->h;
            this->state = copy->state;
        }

};

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

void generalSearch(node *A) {
    auto comp = [](const node*A, node*B){return ((A->g + A->h) > (B->g + B->h)); };
    priority_queue < node*,vector < node* >, decltype(comp)> pqueue(comp);
    node *curr;
    node *temp;
    pqueue.push(A);
    while(!pqueue.empty()) {
        curr = pqueue.top();
        pqueue.pop();
        if(curr->state == goal) {
            cout << "SUCCESS" << endl;
            return;
        }
        curr->g++;
        temp = new node(curr);
        if(moveUp(temp)) pqueue.push(temp); temp = new node(curr);
        if(moveDown(temp)) pqueue.push(temp); temp = new node(curr);
        if(moveLeft(temp)) pqueue.push(temp); temp = new node(curr);
        if(moveRight(temp)) pqueue.push(temp);
    }
    return;
}



