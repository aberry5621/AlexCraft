//
//  cobble.hpp
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "block.h"

#ifndef cobble_h
#define cobble_h

class Cobble: public Block {
public:
    Cobble();
    Cobble(int, char);
    void set_id(int);
    void set_char(char);
    char get_char();
};


#endif /* cobble_hpp */
