//
//  MST.hpp
//  Minimum_spanning_tree
//
//  Created by Mattia Gaggi on 1/26/18.
//  Copyright © 2018 Mattia Gaggi. All rights reserved.
//

#ifndef MST_hpp
#define MST_hpp

#include <stdio.h>
#include <vector>
#include "graph.hpp"
#include "node.hpp"
#include "priority_queue.hpp"
/* The minimim spanning tree class stores all the explored node in a vector according to their index and all unexplored nodes in a heap as tokens (node number and priority, which is the shortest edge distance between that node and all the nodes in explored_nodes vector or infinity if no edge). We keep an int spanning length which denotes the current length spanned. */

class MST{

public:
    
    MST(Graph& input_graph);
    
    // heap is initialised with all nodes in the graph and their priority set to infinity as there are no nodes in the explored_nodes vector.
    void heap_initialisation(void);
    
    unsigned int get_MSL(void);
    
    void search_and_update(token current_token);
    
    vector< unsigned int> return_explored(void);

private:
    
    Graph graph;
    Heap heap;
    unsigned spanning_length;
    std::vector<unsigned int> explored_nodes;

};

#endif /* MST_hpp */
