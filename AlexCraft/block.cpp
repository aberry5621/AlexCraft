//
//  main_classes.cpp
//  AlexCraft
//
//  Created by ax on 12/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "block.h"

Block::Block() {
    test_id = 123;
    m_id = 0;
    m_char = 'X';
}

Block::Block(int p_id, char p_char) {
    m_id = p_id;
    m_char = p_char;
}

int Block::get_id() {
    return m_id;
}

char Block::get_char() {
    return m_char;
}