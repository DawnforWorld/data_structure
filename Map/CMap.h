#pragma once
#include "Node.h"
#include "Edge.h"
#include <vector>
#include <iostream>
using namespace std;

class CMap
{
public:
    CMap(int capacity);
    ~CMap();
    bool addNode(Node *pNode);
    void resetNode();
    bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);
    bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);
    void printMatrix();
    void depthFirstTraverse(int nodeIndex);
    void breadthFirstTraverse(int nodeIndex);
    void primTree(int nodeIndex);
    void kruskalTree();
private:
    bool getValueFromMatrix(int row, int col, int &val);
    void breadthFirstTraverseImpl(vector<int> preVec);
    int getMinEdge(vector<Edge> edgeVec);
    bool isInSet(vector<int> nodeSet, int target);
    void mergeNodeSet(vector<int> &nodeSetA, vector<int> nodeSetB);
private:
    int m_iCapacity;
    int m_iNodeCount;
    Node *m_pNodeArray;
    Edge *m_pEdge;
    int *m_pMatrix;
};