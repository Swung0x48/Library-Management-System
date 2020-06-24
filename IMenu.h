//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_IMENU_H
#define CLASSROOMBOOKING_IMENU_H


class IMenu
{
protected:
    int _option = -1;
public:
    virtual void Run() = 0;
    virtual bool IsSelected(int input);
    virtual int GetOption() { return _option; }
    virtual ~IMenu();
};


#endif //CLASSROOMBOOKING_IMENU_H
