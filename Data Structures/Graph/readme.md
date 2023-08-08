-> Definition : A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph.
    > Example : 
        ![Graph](https://www.simplilearn.com/ice9/free_resources_article_thumb/Graph%20Data%20Structure%20-%20Soni/what-is-graphs-in-data-structure.png)
    
-> Types of Graphs :
    > Directed Graph
    > Undirected Graph
        > Example : ![Undirected & Directed Graph](https://ehindistudy.com/wp-content/uploads/2015/11/wpid-differencebetween_directed_undirected_graphs1.jpg)
    > Cyclic Graph
    > Acyclic Graph
        > Example : ![Cyclic Graph](https://i.imgur.com/2z9J2E5.png)

-> Indegree and Outdegree
    > Indegree : Directed nodes coming towards the node 
    > Outdegree : Directed nodes going from the node

-> Breadth First Search 
    > It is a traversal technique
    > ![Breadth First Search](https://www.freecodecamp.org/news/content/images/2020/03/image-154.png)
    > Algorithm :
        > Step 1 : Find adjacency list and mark all the nodes as non-visited i.e False
        > Step 2 : Take a queue data structure
        > Step 3 : Push the front node into the queue, mark it as visited and pop it from the queue and push it into ans
        > Step 4 : Push the neighbours of that node into the queue and again follow the step 3

-> Depth First Search 
    > It is a traversal technique
    > ![Depth First Search](https://open4tech.com/wp-content/uploads/2019/01/BFS-DFS.png)
    > Algorithm :
        > Step 1 : For loop till every node check if visited or not and not visited then call dfs
        > Step 2 : Create a data structure for keeping a track of visited nodes
        > Step 3 : Create a adjacency list
        > Step 4 : In dfs function 1st mark the node as visited and then call the dfs function with its adjacent node if not visited

-> Kahn's Algortithm :
    > It is basically topological sort using BFS
    > Step 1 : Find indegree of all nodes
    > Step 2 : If indegree of a node is 0 then push it in the ans else pop the parent node so that the indegree of the node will become 0
    > Step 3 : Do BFS
    > Time complexity : O(N + E) i.e Linear

-> Shortest path in undirected graph :
    > Step 1 : Find adj list
    > Step 2 : Do BFS
    > Step 3 : Create data structure of visited nodes and parent nodes
    > Step 4 : Prepare shortest path
    > Step 5 : Reverse the ans to get the right ans

-> Dijkstra's algorithm :
    > Step 1 : Create adj list
    > Step 2 : Create a distance array with initially value of inifinty / INT_MAX
    > Step 3 : Create a set with pair (distanceNode, node);
    > Step 4 : Traverse the set till it becomes empty
    > Step 5 : Like DFS traverse the neighbours of node
    > Step 6 : If nodeDistance + weight of neighbour is less than the distance present in the distance array of neighbour then update it and make updations.

-> Prim's Algorithm (Minimum Spanning Tree) :
    > Definition : when you convert a graph into a tree such that it contains n nodes and n - 1 edges then it is called a spanning tree and every node is reachable from other node
    > Example : ![Spanning Tree](https://www.tutorialspoint.com/data_structures_algorithms/images/spanning_trees.jpg)
    > 

-> Bellman Ford Algorithm :
    > Step 1 : Create a "Dist" vector
    > Step 2 : Initialize the source with 0
    > Step 3 : Traverse the no of "n" vertices for n - 1 times
    > Step 4 : Traverse the edges
    > Step 5 : If distance of source + weight to travel the next node is less than the distance of node update the distance
    > Step 6 : return the distance of destination