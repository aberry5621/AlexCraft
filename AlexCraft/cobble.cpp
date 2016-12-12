//
//  cobble.cpp
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "cobble.h"

Cobble::Cobble() {
    m_char = 'C';
}

Cobble::Cobble(int p_id, char p_char) {
    m_id = p_id;
    m_char = p_char;
}

void Cobble::set_id(int p_id) {
    m_id = p_id;
}

void Cobble::set_char(char p_char) {
    m_char = p_char;
}

char Cobble::get_char() {
    return m_char;
}