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

int main() {
    
    cout << "AlexCraft\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    // demo blocks
    // Block b1;
    // cout << b1.get_char() << " ";
    // Bedrock b2;
    // cout << b2.get_char() << endl;
    // display_block_type(b2);
    
    cout << endl;
    
    cout << "Array World\n";
    // build 2d array of blocks for a world
    /* not gonna work with Virtual Blocks
    Block world_array[16][16] = {};
    
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            world_array[i][j] = Block();
        }
    }
    
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            cout << "[" << world_array[i][j].get_char() << "]";
        }
        cout << endl;
    }
    */
    
    cout << "Matrix World\n";
    // try a 2d vector of blocks for a world
    vector<vector<Block *>> world_matrix(16);
    /*
    int * moving_vector_pointer = world_matrix;
    
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            *moving_vector_pointer = new Bedrock()
            moving_vector_pointer++;
        }
    }
    */
    // print_matrix(world_matrix);
    
    cout << "Print Matrix World:\n";
    for (int row = 0; row < world_matrix.size(); row++) {
        for (int col = 0; col < world_matrix[row].size(); col++) {
            cout << "[" << world_matrix[row][col]->get_char() << "]";
        }
    }
    
    cout << "Matrix get chars?\n";
    
    // straight objects / get chars
    //Block block1;
    Bedrock bedrock1;
    Cobble cobble1;
    
    //cout << "block 1 char : " << block1.get_char() << endl;
    cout << "bedrock 1 char : " << bedrock1.get_char() << endl;
    cout << "cobble 1 char : " << cobble1.get_char() << endl;
    /* bunch of bad guessing 
    // vector of base pointers
    vector<Block*> some_blocks;
    
    // vector 0
    Bedrock * bedrock_ptr = &bedrock1;
    some_blocks.push_back(bedrock_ptr);
    
    // vector 1
    //Block block_x = Block(77, 'X');
    //some_blocks.push_back(&block_x);
    
    // vector 2
    some_blocks.push_back(new Bedrock());
    some_blocks[2]->set_char('H');
    some_blocks[2]->set_id(721);
    
    // pointer obj for push to vector
    Cobble cobble_block = Cobble(99, 'Z');
    Cobble * cobble_ptr = &cobble_block;
    
    // vector 3
    some_blocks.push_back(cobble_ptr);
    
    cout << endl;
    
    for (int i = 0; i < some_blocks.size(); i++) {
        cout << "some blocks " << i << " test id: " << some_blocks[i]->test_id << endl;
        cout << "some blocks " << i << " get_char(): " << some_blocks[i]->get_char() << endl;
    }
     */
    
    vector<Block *> derived_blocks_container;
    derived_blocks_container.push_back(new Cobble);
    derived_blocks_container.push_back(new Cobble);
    derived_blocks_container.push_back(new Bedrock);
    derived_blocks_container.push_back(new Bedrock);
    
    for(int i = 0; i < derived_blocks_container.size() ; i++)
    {
        if (i < 2) {
            derived_blocks_container[i]->set_id(1);
            derived_blocks_container[i]->set_char('C');
        } else {
            derived_blocks_container[i]->set_id(2);
            derived_blocks_container[i]->set_char('B');
        }

    }
    
    for(int i = 0; i < derived_blocks_container.size() ; i++)
    {
        cout << derived_blocks_container[i]->get_char() << "  ";
    }
    
    cout << endl;
    
    return 0;
    
}
