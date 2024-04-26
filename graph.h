
#ifndef GRAPH_H
#define GRAPH_H_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector> 
#include <queue>


using namespace std;
template <class D, class K> // D is data type and K is key type
class Graph{
    
    private: 
        struct Node{
            D data;
            K key;
            Node* pi;
            int distance;
            int f1;
            int f2;
            Node* dpi;
            char color;
            bool colorbfs;
            int place;
        };

        vector<Node*> V;
        vector<vector<K>> E;

        void dfs();
        int dfs_visit(Node* u, int time);

    public:
        Graph(vector<K> keys, vector<D> data, vector<vector<K>> edges); // Constructor

        Node* get(K key); // Pointer to vertex of the given key
        bool reachable(K u, K v); // Check if vertex of key v is reachable from vertex of key u
        void bfs(K source); // BFS from source vertex of the given key
        void print_path(K u, K v); // Print shortest path from vertex of key u to vertex of key v
        string edge_class(K u, K v); // String representation of the edge classification of edge from u to v
        void bfs_tree(K source); // Print bfs tree for the vertex of the given key

};

// #include "graph.cpp"

#endif
