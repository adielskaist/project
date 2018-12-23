#include "LoopCommand.h"

void LoopCommand::addCommand(Command command, bool condition)
{
    m_commands.push_back(command);
    this->condition = condition;
}
void LoopCommand::execute()
{
    list<Command>::iterator i;
    while (condition){
        for (i = m_commands.begin(); i != m_commands.end(); i++){
            i->execute();
        }
    }
}