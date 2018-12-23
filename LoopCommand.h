#ifndef PROJECT_LOOPCOMMAND_H
#define PROJECT_LOOPCOMMAND_H

#include "Command.h"
#include <list>

class LoopCommand : public Command{
    std::list<Command> m_commands;
    bool condition;
public:
    void addCommand(Command command, bool condition);
    void execute();
};


#endif //PROJECT_LOOPCOMMAND_H
