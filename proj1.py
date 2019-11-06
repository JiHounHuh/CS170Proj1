import sys
import copy
from copy import deepcopy
import queue
import math

GOALSTATE = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', '0']]
INITIALSTATE = [['4', '1', '2'], ['8', '3', '6'], ['5', '7', '0']]
PUZZLETYPE = 8
MAXSIZE = (math.sqrt(PUZZLETYPE + 1))
#class PriorityQueue(problem):
 #   print("help")
  #  def __init__(self):
   #     self.elements = []

class Node():
    def __init__(self, head, pos=0):
        self.head = copy.deepcopy(head)
        self.pos = pos
        
        self.f = 0
        self.g = 0
        self.h = 0
        self.queue = [] # Creating Queue for the nodes
    def __eq__(self, other): # Return if they are equal
        return self.pos == other.pos
    
    def getState(self):
        return self.head.getState()

    def getDistance(self):
        return self.g
    
    def getTotal(self):
        return self.f
    
    def updateTotal(self, hVal):
        self.f = hVal

    def queuing(self):
        self.queue.insert(0,self.head)



class Movement:
    alpha = 0
    beta = 0
    row = 2
    col = 2
    def __init__ (self, alpha = 0, beta = 0):
        self.alpha = alpha
        self.beta = beta

   # Directions = [:left, :right, :up, :down]
    #attr_reader :puzzle, :__path__
    # Init state

    # Move Up

    # Move Down
    # Move Left
    # Move Right
    def moveUp(self):
        newSpot = list(self.state)
        if(row < 2):
            newSpot[alpha][beta], newSpot[alpha-1][beta] = newSpot[alpha-1][beta], newSpot[alpha][beta]
            self._blank.set(x = (alpha - 1))


#class Queueing:
#    def __init__ (self, )


def hashCheck(node):
    value = hash(node)
    for i in hashesCode:
        if value == i:
            return True
    hashesCode.append(value)
    return False


   # def branch_toward(direction):
        #blank_position = Puzzle.zero_position
       # blankx = blank_position % 3
        # cell = case direction
        #when :left
            #blank_position - 1 unless == blankx
        #when :right
            #blank_position + 1 unless 2 == blankx
       # when :up
            #blank_position - 3 unless 0 == blanky
       # when :down
            #blank_position + 3 unless 2 == blanky
        #end
        #State.new Puzzle.swap(cell), @path + [direction] if cell
    #end
openList = []
closedList = []

def copy(self, rootNode): # create similar matrix copy
    temp = []
    for i in rootNode:
        init = []
        for j in i:
            init.append(j)
        temp.append(init)
    return temp

#class Puzzle:
#    def __init__(self, init = INITIALSTATE, shape = DIMENSION):
#        self.state = list(init)
#        for i in range(shape):
#            for j in range(shape):
#                if(init[i,j] == ' '):
#                    self.space = Movement(i,j)

print(GOALSTATE)
print(INITIALSTATE)
print(INITIALSTATE[2][1])
init_state = str(INITIALSTATE)
goal_state = str(GOALSTATE)
print("Hashed init state is: " + str(hash(init_state)))
print("Hashed goal state is: " + str(hash(goal_state)))
#Record cost and estimated distance
row = 2 
col = 2 
#if(i < col):
    #can move right
    
#if(col > 0):
    #can move left

#if(j < row):
    #can move down

#if(row > 0):
    #can move up


def general_search(problem, heuristic):
    #nodes = Make_Queue(Make_Node(problem.INITIALSTATE))
    print("test")

def uniformCostSearchHeurisitic(problem):
    return 0 # A-Star with heuristic as 0

def misplacedTileSearchHeuristic(problem):
    print("test")    



print("Initial State", end=' ')
for i in range(3):
    print('')
    for j in range(3):
        print(INITIALSTATE[i][j], end =' ')

print()

temp_state = INITIALSTATE[1][2]
INITIALSTATE[1][2] = INITIALSTATE[2][2]
INITIALSTATE[2][2] = temp_state
print()
print("Next State",end=' ')
for i in range(3):
    print('')
    for j in range(3):
        print(INITIALSTATE[i][j], end =' ')

