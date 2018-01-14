/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graphs.h
 * Author: Abdul
 *
 * Created on November 28, 2017, 1:09 PM
 */


#ifndef GRAPHS_H
#define GRAPHS_H

#include <iostream>
#include<string>
using namespace std;

const int MAX = 100;

class graph { 
public:
    graph(int v); /* initializes the number of vertices to v, and fills matrix with zeros */
    void AddEdge(int v, int w); //add an edge between v and w     
    void DeleteEdge(int v, int w); //delete the edge between v and w
    void AddWeight(int v, int w); // add weight to edge (v, w) if edge (v, w) exists.
    void printAdjacent(int v); // print all vertices that are adjacent to v
    void printMatrix(); // print the content of the adjacency matrix with one row per line of output.   
    void BFS(int v); // print all vertices using breath first search Queue
    void DFS(int v); // print all vertices using Depth first search Stack
    string Connectivity(); //shows if connected graph
    string Complete(); // shows if graph is complete

private:
    int maxes; // number of vertices    	
    int matrix[MAX][MAX]; //adjacency matrix    	
    bool visited[MAX];
};

#endif /* GRAPHS_H */

