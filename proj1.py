import sys
import copy
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

#Class Puzzle
# def zero_position
#   @cells.index(0)
# end
# def swap swap_index
#   new_cells = @cells.clone
#   new_cells[zero_position] = new_cells[swap_index]
#   new_cells[swap_index] = 0
#   Puzzle.new new_cells
# end
#end

class Movement:
    alpha = 0
    beta = 0
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
#Record cost and estimated distance
row = 2
col = 2
if(i < col):
    #can move right
    
if(col > 0):
    #can move left

if(j < row):
    #can move down

if(row > 0):
    #can move up







for i in range(3):
    print('')
    for j in range(3):
        print(INITIALSTATE[i][j], end =' ')



for i in range(3):
    print('')
    for j in range(3):
        print(INITIALSTATE[i][j], end =' ')




#print ("hello")
#K = queue.Queue(maxsize=3)
#print ("test")
#print(K.qsize())
#K.put(1)
#K.put(3)
#K.put(2)
#print("Full: ", K.full()) 
#print(K.get())
#print ("hello")



