//
//  Dirt.cpp
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "dirt.h"

Dirt::Dirt() {
    m_char = 'C';
}

Dirt::Dirt(int p_id, char p_char) {
    m_id = p_id;
    m_char = p_char;
}

void Dirt::set_id(int p_id) {
    m_id = p_id;
}

void Dirt::set_char(char p_char) {
    m_char = p_char;
}

char Dirt::get_char() {
    return m_char;
}