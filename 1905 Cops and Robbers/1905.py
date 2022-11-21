def dfs(v, viseted, i,j):
    global flag

    if i == 4 and j == 4:
        flag = True
        return
    if i < 0 or i > 4 or j < 0 or j > 4:
        return
    if v[i][j] == 1:
        return
    if viseted[i][j] == 1:
        return
    viseted[i][j] = 1
    dfs(v, viseted, i + 1, j)
    dfs(v, viseted, i - 1, j)
    dfs(v, viseted, i, j + 1)
    dfs(v, viseted, i, j - 1)
    viseted[i][j] = 0

 
 


a = [[ 0, 0, 0, 0, 1],
    [ 1, 1, 0, 0, 1],
    [ 0, 1, 0, 0, 0],
    [ 0, 0, 0, 1, 1],
    [ 1, 1, 0, 0, 0]]


b = [[ 0, 0, 0, 0, 1],
    [ 1, 1, 0, 0, 1],
    [ 0, 1, 0, 0, 0],
    [ 0, 0, 1, 1, 1],
    [ 1, 1, 0, 0, 0]]

#add Edges to graph conforming to the matrix when 0 is free and 1 is blocked
flag = False
viseted = [[0 for i in range(5)] for j in range(5)]


T = int(input())

for t in range(T):
    M = []

    k = 0    
    while k < 5:
        temp = input().split()

        if temp:

            M.append(list(map(int, temp)))
            k += 1
          
    dfs(M, viseted, 0, 0)
    if flag == True:
        print('COPS')
    else:
        print('ROBBERS')
    flag = False
    visited = [[0 for i in range(5)] for j in range(5)]
        

 