'''
This problem detects with there is a cicle in a graph.
We use DFS and represent our graph with an adjacency 
list. In this problem we have a directed graph.
'''

# Guarantees that the online judge's recursion stack will not overflow
import sys
sys.setrecursionlimit(1048576)

# Adjacency list
dependencies = []

# Visited list
visited_dependencies = []

has_cicle = False


def isVisited(vertex):
    '''
    Check if a vertex is already visited
    '''
    if visited_dependencies[vertex] == 1:
        return True
    return False

    
def DFS(vertex):
    '''
    An implementation of Depth First Search for graphs
    with a small change to allow detection of cycles
    '''

    visited_dependencies[vertex] = 1

    global has_cicle

    for i in range(len(dependencies[vertex])):
        document = dependencies[vertex][i]
        if visited_dependencies[document] == 1:
            has_cicle = True
            return
        elif visited_dependencies[document] == 0:
            DFS(document)

    visited_dependencies[vertex] = 2


test_cases = int(input())

for i in range(test_cases):
    line = input().split()

    amount_of_documents = int(line[0])
    amount_of_dependecies = int(line[1])

    dependencies.clear()
    visited_dependencies.clear()
    has_cicle = False

    # Initialize adjacency list and visited list
    for _ in range(amount_of_documents):
        vertex_list = []
        dependencies.append(vertex_list)
        visited_dependencies.append(0)

    for _ in range(amount_of_dependecies):
        line = input().split()
        document_a = int(line[0])
        document_b = int(line[1])

        dependencies[document_a - 1].append(document_b - 1)

    for vertex in range(amount_of_documents):
        if not isVisited(vertex):
            DFS(vertex)
        
        if has_cicle:
            break

    print('SIM' if has_cicle else 'NAO')
