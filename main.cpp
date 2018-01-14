/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul
 *
 * Created on November 28, 2017, 1:09 PM
 */

#include <iostream>
#include<string>
#include "graphs.h"
#include "queue.h"
#include "stacks.h"
using namespace std;

/*
 * 
 */
int main() {

    cout << "Enter num of vertices" << endl;
    int max = 0;
    cin>>max;
    graph r(max);
    int x = 0;
    while (x != 11) {
        cout << endl;
        cout << "Enter a command" << endl;
        cout << "1.  Insert an edge" << endl;
        cout << "2.  Delete an edge" << endl;
        cout << "3.  Add weight to an edge" << endl;
        cout << "4.  Print Adjacency Matrix" << endl;
        cout << "5.  List all vertices that are adjacent to a specified vertex" << endl;
        cout << "6.  Print out vertices using depth first search" << endl;
        cout << "7.  Print out vertices using breadth first search" << endl;
        cout << "8.  Check for connectivity " << endl;
        cout << "9.  Check for completeness " << endl;
        cout << "10. Find the minimum spanning tree for the graph, if the graph is connected " << endl;
        cout << "11. Exit program" << endl;
        cin>>x;

        if (x == 1) {
            cout << "Enter x and y location of vertex" << endl;
            int w, y;
            cin>>w;
            cin>>y;

            if (w < max && y < max) {
                r.AddEdge(w, y);
            } else {
                cout << "location does not exist" << endl;
            }

        } else if (x == 2) {
            cout << "Enter x and y location of edge" << endl;
            int w, y;
            cin>>w;
            cin>>y;

            if (w < max && y < max) {
                r.DeleteEdge(w, y);
            } else {
                cout << "location does not exist" << endl;
            }
        } else if (x == 3) {
            cout << "Enter x and y location of edge" << endl;
            int w, y;
            cin>>w;
            cin>>y;

            if (w < max && y < max) {
                r.AddWeight(w, y);
            } else {
                cout << "location does not exist" << endl;
            }
        } else if (x == 4) {
            r.printMatrix();
        } else if (x == 5) {
            cout << "Enter x location of edge to start" << endl;
            int w;
            cin>>w;

            if (w < max) {
                r.printAdjacent(w);
            } else {
                cout << "location does not exist" << endl;
            }
        } else if (x == 6) {
            cout << "Enter x location of edge to start " << endl;
            int w;
            cin>>w;

            if (w < max) {
                cout << endl;
                r.DFS(w);
            } else {
                cout << "location does not exist" << endl;
            }
        } else if (x == 7) {
            cout << "Enter x location of edge to start " << endl;
            int w;
            cin>>w;

            if (w < max) {
                cout << endl;
                r.BFS(w);
            } else {
                cout << "location does not exist" << endl;
            }
        } else if (x == 8) {
            string print = r.Connectivity();
            cout << print << endl;
        } else if (x == 9) {
            string print = r.Complete();
            cout << print << endl;
        } else if (x == 10) {

        } else if (x == 11) {
            cout << "GoodBye";
        } else {
            cout << "Not valid input try again" << endl;
        }
    }



}

