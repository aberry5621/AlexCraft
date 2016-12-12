//
//  bedrock.cpp
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "bedrock.h"

Bedrock::Bedrock() {
    test_id = 456;
    m_char = 'B';
}

Bedrock::Bedrock(int p_id, char p_char) {
    m_id = p_id;
    m_char = p_char;
}

void Bedrock::set_id(int p_id) {
    m_id = p_id;
}

void Bedrock::set_char(char p_char) {
    m_char = p_char;
}

char Bedrock::get_char() {
    return m_char;
}