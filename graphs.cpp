/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "graphs.h"
#include "queue.h"
#include "stacks.h"
#include <iostream>
#include<string>
using namespace std;

graph::graph(int v) {
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            matrix[i][j] = 0;
        }
    }
    maxes = v;
}

void graph::AddEdge(int v, int w) {
    if (matrix[v][w] > 0) {
        cout << "edge already exist" << endl;
    } else {
        matrix[v][w] = 1;
        matrix[w][v] = 1;
        cout << "edges " << v << ", " << w << " and " << w << ", " << v << " have been entered" << endl;
    }
}

void graph::AddWeight(int v, int w) {
    matrix[v][w]++;
    matrix[w][v]++;
    cout << "edges " << v << ", " << w << " and " << w << ", " << v << " weight has been increased to " << matrix[v][w] << endl;
}

void graph::DeleteEdge(int v, int w) {
    matrix[v][w] = 0;
    matrix[w][v] = 0;
    cout << "edges " << v << ", " << w << " and " << w << ", " << v << " have been removed" << endl;
}

void graph::printAdjacent(int v) {
    int t = 0;
    for (int j = 0; j < maxes; j++) {
        if (matrix[v][j] > t) {
            t = matrix[v][j];
        }
    }

    if (t != 0) {
        for (int j = 0; j < maxes; j++) {
            if (matrix[v][j] != 0) {
                cout << j << ", ";
            }
        }
    } else {
        cout << "no neighbors" << endl;
    }

}

void graph::printMatrix() {
    cout << "This is the current graph" << endl;
    cout << "  ";
    for (int k = 0; k < maxes; k++) { //prints top of graph
        cout << k << " ";
    }
    cout << endl;
    for (int i = 0; i < maxes; i++) {
        cout << i << " ";
        for (int j = 0; j < maxes; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

string graph::Connectivity() {
    int r[maxes];
    for (int i = 0; i < maxes; i++) {
        r[i] = 0;
    }

    for (int i = 0; i < maxes; i++) {
        for (int j = 0; j < maxes; j++) {

            r[i] += matrix[i][j];


        }
    }

    for (int i = 0; i < maxes; i++) {
        if (r[i] == 0)
            return "Non-Connected Graph";
    }

    return "Connected Graph";
}

string graph::Complete() {
    for (int i = 0; i < maxes; i++) {
        for (int j = 0; j < maxes; j++) {
            if (i != j) {
                if (matrix[i][j] == 0) {
                    return " Non-Complete Graph";
                }
            }

        }
    }
    return "Complete Graph";
}

void graph::BFS(int v) {
    for (int i = 0; i < maxes; i++) {
        visited[i] = false;
    }

    Queues r;

    r.InserAtEndQ(v);
    visited[v] = true;

    while (r.EmptyQ() == false) {
        r.DeleteFrontQ();
        cout << v << endl;
        for (int i = 0; i < maxes; i++) {
            if (matrix[v][i] != 0 && visited[i] == false) {
                r.InserAtEndQ(i);
                visited[i] = true;
                v = i;
            }

        }
    }


}

void graph::DFS(int v) {
    for (int i = 0; i < maxes; i++) {
        visited[i] = false;
    }

    Stacks r;

    r.InsertInFrontS(v);
    visited[v] = true;

    while (r.EmptyS() == false) {
        r.DeleteFrontS();
        cout << v << endl;
        for (int i = 0; i < maxes; i++) {
            if (matrix[v][i] != 0 && visited[i] == false) {
                r.InsertInFrontS(i);
                visited[i] = true;
                v = i;
            }

        }
    }


}