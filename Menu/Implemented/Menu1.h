//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef MENU1_H
#define MENU1_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu1: public IMenu
{
protected:
    int _option = 1;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU1_H
