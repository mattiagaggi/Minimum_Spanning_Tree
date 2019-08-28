//
//  main.cpp
//  Minimum_spanning_tree
//
//  Created by Mattia Gaggi on 1/26/18.
//  Copyright © 2018 Mattia Gaggi. All rights reserved.
//

#include <iostream>
#include "graph.hpp"
#include "MST.hpp"

int main(int argc, const char * argv[]) {
    Graph n("/Users/Mattia/Desktop/c++_course/c++/Minimum_spanning_tree/Minimum_spanning_tree/sample_data.txt");
    cout <<n;
    MST m(n);
    cout << "MST is:" << m.get_MSL() <<"\n \n";
    cout << "the history: ";
    vector<unsigned int> explored=m.return_explored();
    for (int i=0; i < explored.size() ; i++){
        cout  << explored[i]  << ", ";
        
    }
    cout <<"\n \n";
    
    return 0;
}
