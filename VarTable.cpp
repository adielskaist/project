//
// Created by adiel on 23/12/18.
//

#include "VarTable.h"
VarTable::VarTable(map<string, double> values, map <string, string> addresses) {
    this->m_symbolTable = values;
    this->var_map = addresses;
}

void VarTable::addVar(vector<string> line) {
    var_map.insert(line[1], line[4]);
    m_symbolTable.insert({line[1], 0});
}
