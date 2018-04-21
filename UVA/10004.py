def bicolorableUsingBFS(vector):
    queue = []
    color = [ 0 for i in range(int(len(vector)))]
    visited = [False for i in range(int(len(vector)))]
    # let starting point is node 0
    source = 0
    queue.insert(0,source)
    # mark True for black node and False for red node
    color[source] = True
    visited[source] = True
    while len(queue) > 0:
        u = queue.pop()
        for neibour in vector[u]:
            if visited[neibour] is False:      # mark adjacent node with opposite color
                if color[u] is True:
                    color[neibour] = False
                else:
                    color[neibour] = True
                queue.insert(0, neibour)
                visited[neibour] = True
            for v in vector[neibour]:
                if color[neibour] is color[v]:
                    return False

    return True

while True:
    nodeNo = int(input())
    if nodeNo == 0:
        break
    edgeNo = int(input())
    edge =[ [] for row in range(nodeNo)] # create a adjacency list for storing the graph
    for i in range(edgeNo):
        a = list(map(int, input().split(' ')))
        """
        x = int(input()) # node x
        y = int(input()) # node y. edge x --> y
        """
        x = a[0]
        y = a[1]
        edge[x].append(y)
        edge[y].append(x)

    # now call bfs method to check either it is bicolorable or not
    if( bicolorableUsingBFS(edge)):
        print("BICOLORABLE.")
    else:
        print("NOT BICOLORABLE.")
    edge.clear()