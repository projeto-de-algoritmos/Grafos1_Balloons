import collections
TAM = 8

# BFS algorithm
def bfs(xx,yy):
    x_init, y_init = ord(xx[0])-96, int(xx[1])
    inicio = x_init*10 + y_init
    x_fim, y_fim   = ord(yy[0])-96, int(yy[1])
    fim = x_fim*10 + y_fim

    visited, queue = set(), collections.deque([inicio])
    visited.add(inicio)

    qntMovimento = collections.deque([0])

    while queue:

        # Dequeue a vertex from queue
        vertex = queue.popleft()
        m = qntMovimento.popleft()

        if inicio == fim:
            return m

        # If not visited, mark it as visited, and
        # enqueue it
        for i in range(8):
          
          x = vertex//10
          y = vertex%10
          
          #all possible moves
          if i == 0:  
            if x+2 <= TAM and y+1 <= TAM:
              neighbour = (x+2)*10 + y+1
            else:
              neighbour = 0

          if i == 1:
            if x-2 > 0 and y-1 > 0:
              neighbour = (x-2)*10 + y-1
            else:
              neighbour = 0
          
          if i == 2:  
            if x-1 > 0 and y-2 > 0:
              neighbour = (x-1)*10 + y-2
            else:
              neighbour = 0
          
          if i == 3:  
            if x+1 <= TAM and y-2 > 0:
              neighbour = (x+1)*10 + y-2
            else:
              neighbour = 0
          
          if i == 4:  
            if x+1 <= TAM and y+2 <= TAM:
              neighbour = (x+1)*10 + y+2
            else:
              neighbour = 0
          
          if i == 5:  
            if x+2 <= TAM and y-1 > 0:
              neighbour = (x+2)*10 + y-1
            else:
              neighbour = 0

          if i == 6:  
            if x-2 > 0 and y+1 <= TAM:
              neighbour = (x-2)*10 + y+1
            else:
              neighbour = 0

          elif i == 7:  
            if x-1 > 0 and y+2 <= TAM:
              neighbour = (x-1)*10 + y+2
            else:
              neighbour = 0
          

          if neighbour == fim:
            return m+1

          if neighbour not in visited and neighbour != 0:
              visited.add(neighbour)
              queue.append(neighbour)
              qntMovimento.append(m+1)
              # print(queue , m)

    return m


#main
while True:
  try:
    xx,yy = input().split()
    qnt = bfs(xx,yy)
    print('To get from', xx, 'to', yy, 'takes', qnt, 'knight moves.')
  except:
    break
