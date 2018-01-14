
## Directions
##Write a program to implement an undirected graph.   
Use the adjacency matrix to implement the graph.  
Let your program be menu driven. 

Represent a vertex by using the index value of the array. 
Let the maximum number of vertices be 100.  
For example, if the number of vertices is 5, the vertices are 0, 1, 2, 3 and 4. 
Start the program by prompting the user for the number of vertices. 
Then create a graph with no edges.


Allowing the user the following options:
1. Insert an edge 
2. Delete an edge
3. Add weight to an edge
4. Print Adjacency Matrix 
5. List all vertices that are adjacent to a specified vertex.
6. Print out vertices using depth first search.
7. Print out vertices using breadth first search.
8. **Check for connectivity **
9. **Check for completeness **
10. **Find the minimum spanning tree for the graph, if the graph is connected. **
11. Exit program

**Bold indicates extra credit options**

### Programming Guidelines:

- **Options 1, 2, 3, 4, 5, 6, 7 and 11 are required.  Additional implemented options are extra credit.**
- Option 1 - Allows the user to insert an edge.  The user must specify the two vertices that the edge will connect.
- Option 2 - Allows the user to delete an edge. The user must specify the two vertices connecting the edge that is to be deleted.
- Option 3 – Allows the user to add weight to an edge, if the edge already exists in the graph.  
		The user must specify the two vertices connecting the edge to which a weight is to be added. 
		Let the weight be a value greater than 0.
- Option 4 – Print out the adjacency matrix (one row per line of output)
- Option 5 - The user enters a vertex, and the program prints out all of the vertices that are adjacent to the specified vertex.
- Option 6 - Print out the vertices using the depth first search. Prompt the user for a vertex to start the traversal.
- Option 7 - Print out the vertices using the breadth first search. Prompt the user for a vertex to start the traversal.
- Option 8 - Print out whether or not the graph is connected
- Option 9 - Print out whether or not the graph is a complete graph
- Option 10 - If the graph is connected, find a minimum spanning tree and print out the list of edges for the minimum spanning tree.


### Sample graph class definition:

```
const int MAX = 100;
class graph
{ 

  private:
      int n; // number of vertices    	
      int matrix[MAX][MAX];//adjacency matrix    	
      bool visited[MAX];
  
  public:
      graph(int v);
        /* initializes the number of vertices to v, and fills matrix with zeros */
      
      void AddEdge(int v, int w);
        //add an edge between v and w
            
      void DeleteEdge(int v, int w);
        //delete the edge between v and w
 
      void AddWeight(int v, int w);
        // add weight to edge (v, w) if edge (v, w) exists.
       
      int printAdjacent(int v); 
        // print all vertices that are adjacent to v
        
      void printMatrix();
       /* print the content of the adjacency matrix with one row per line of output. */    	

       //Add in other methods as needed
};

```
