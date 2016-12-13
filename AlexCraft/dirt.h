//
//  cobble.hpp
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "block.h"

#ifndef dirt_h
#define dirt_h

class Dirt: public Block {
public:
    Dirt();
    Dirt(int, char);
    void set_id(int);
    void set_char(char);
    char get_char();
};


#endif /* dirt_h */
