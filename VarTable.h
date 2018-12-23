//
// Created by adiel on 23/12/18.
//

#ifndef PROJECT_VARTABLE_H
#define PROJECT_VARTABLE_H

#include <vector>
#include <string>
#include <map>

using namespace std;

class VarTable {
    map<string, double> m_symbolTable;
    map <string, string> var_map;
public:
    VarTable(map<string, double> values, map <string, string> addresses);

    void addVar(vector<string> op);
};


#endif //PROJECT_VARTABLE_H
