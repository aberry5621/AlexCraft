//
//  main.cpp
//  AlexCraft
//
//  Created by ax on 12/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <vector>
#include "block.h"
#include "bedrock.h"
#include "cobble.h"
#include "dirt.h"
using namespace std;



void display_block_type(Block& block_type) {
    cout << "[";
    cout << block_type.get_char();
    cout << "]";
}

void print_matrix(vector<vector<Block>> p_matrix) {
    cout << "Print Matrix World:\n";
    for (int row = 0; row < p_matrix.size(); row++) {
        for (int col = 0; col < p_matrix[row].size(); col++) {
            cout << "[" << p_matrix[row][col].get_char() << "]";
        }
    }
}

int get_rand(int p_lb, int p_ub) {
    int lb = p_lb, ub = p_ub;
    return lb+rand()%(ub-lb+1);
}

int main() {
    
    cout << "AlexCraft\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    srand(static_cast<int>(time(0)));
    
    // try a 2d vector of blocks for a world
    vector<vector<Block *>> world_matrix(32);

    for (int i = 0; i < 32; i++) {
        world_matrix[i] = vector<Block *>(32);
    }
    
    // populate matrix with blocks
    for (int row = 0; row < world_matrix.size(); row++) {
        for (int col = 0; col < world_matrix[row].size(); col++) {
            if (row == 31) {
                world_matrix[row][col] = (new Bedrock);
                world_matrix[row][col]->set_id(row);
                world_matrix[row][col]->set_char('B');
            } else if (row == 30) {
                int d = get_rand(1,3);
                if (d < 3) {
                    world_matrix[row][col] = (new Cobble);
                    world_matrix[row][col]->set_id(row);
                    world_matrix[row][col]->set_char('C');
                } else {
                    world_matrix[row][col] = (new Bedrock);
                    world_matrix[row][col]->set_id(row);
                    world_matrix[row][col]->set_char('B');
                }
            } else {
                int d = get_rand(8,30);
                if (d <  30 - (row + 8)) {
                    world_matrix[row][col] = (new Dirt);
                    world_matrix[row][col]->set_id(row);
                    world_matrix[row][col]->set_char('D');
                } else {
                    world_matrix[row][col] = (new Cobble);
                    world_matrix[row][col]->set_id(row);
                    world_matrix[row][col]->set_char('C');
                }
            }
        }
    }
    
    for (int row = 0; row < world_matrix.size(); row++) {
        for (int col = 0; col < world_matrix[row].size(); col++) {
            cout << "[" << world_matrix[row][col]->get_char() << "]";
        }
        cout << endl;
    }
    
    cout << endl;
    
    return 0;
    
}
