//
//  bedrock.h
//  AlexCraft
//
//  Created by ax on 12/11/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "block.h"

#ifndef bedrock_h
#define bedrock_h

class Bedrock: public Block {

public:
    Bedrock();
    Bedrock(int, char);
    void set_id(int);
    void set_char(char);
    char get_char();

};

#endif /* bedrock_h */
