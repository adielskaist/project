#include "DefineVarCommand.h"

DefineVarCommand::DefineVarCommand(vector<string> line, VarTable* varTable1)
{
     this->varTable = varTable1;
     this->line = line;
}

void DefineVarCommand::execute() {
     varTable->addVar(line);
}
