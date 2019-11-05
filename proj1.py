import sys
import copy
import queue
import math

GOALSTATE = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', ' ']]
INITIALSTATE = [['4', '1', '2'], ['8', '3', '6'], ['5', '7', ' ']]
PUZZLETYPE = 8
MAXSIZE = (math.sqrt(PUZZLETYPE + 1))
class PriorityQueue(problem):
    print("help")
    def __init__(self):
        self.elements = []


class Movement:
    alpha = 0
    beta = 0
    def __init__ (self, alpha = 0, beta = 0):
        self.alpha = alpha
        self.beta = beta
    
    # Init state
    # Move Up
    # Move Down
    # Move Left
    # Move Right

class Puzzle:
    def __init__(self, init = INITIALSTATE, shape = DIMENSIONS):
        self.state = list(init)
        for i in range(shape):
            for j in range(shape):
                if(init[i,j] == ' '):
                    self.space = Movement(i,j)


print ("hello")
K = queue.Queue(maxsize=3)
print ("test")
print(K.qsize())
K.put(1)
K.put(3)
K.put(2)
print("Full: ", K.full()) 
print(K.get())
print ("hello")



