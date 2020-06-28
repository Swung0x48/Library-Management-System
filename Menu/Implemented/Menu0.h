#pragma once
#ifndef MENU0_H
#define MENU0_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu0 : public IMenu
{
protected:
    int _option = 0;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU0_H