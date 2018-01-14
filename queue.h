/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   queue.h
 * Author: Abdul
 *
 * Created on November 30, 2017, 3:13 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include<string>
using namespace std;

typedef int ElementType;

struct nodeQ{
     ElementType data;
    nodeQ * next;
};

class Queues{
public:
    Queues(); // Create an empty list
    bool EmptyQ(); // Return true if the list is empty, otherwise return false
    void InserAtEndQ(ElementType x); // Insert a value x at the end of the list
    void DeleteFrontQ(); // delete value on top
    void DisplayQ(); // Display the data values in the list

private:
    nodeQ * firstQ; // Pointer
    int NQ;     //number of nodes
};



#endif /* QUEUE_H */

