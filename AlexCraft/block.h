//
//  main_header.h
//  AlexCraft
//
//  Created by ax on 12/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef main_header_h
#define main_header_h

class Block {
protected:
    int m_id;
    char m_char;
public:
    int test_id;
    // constructors
    Block();
    Block(int, char);
    // general public access methods
    virtual void set_id(int) = 0;
    int get_id();
    virtual void set_char(char) = 0;
    char get_char();
};

#endif /* main_header_h */
