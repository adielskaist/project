#ifndef PROJECT_DEFINEVARCOMMAND_H
#define PROJECT_DEFINEVARCOMMAND_H

#include "Command.h"
#include <map>
#include "VarTable.h"

using namespace std;

class DefineVarCommand : public Command{
    VarTable* varTable;
    vector<string> line;
public:
    DefineVarCommand(vector<string> line, VarTable* varTable1);
    void execute();
};


#endif //PROJECT_DEFINEVARCOMMAND_H
