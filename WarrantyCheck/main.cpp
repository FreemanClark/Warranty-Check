#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int args, string arg)
{
    ifstream fin("lmao.txt");
    ofstream fout("lmao.txt");
    if(arg == "-v" || arg == "--valid") {

    } else if(arg == "-s" || arg == "--settings") {

    } else if(arg == "-cs" || arg == "--changesettings") {

    } else if(arg == "-iv" || arg == "--invalid") {

    } else if(arg == "-w" || arg == "--write") {
        Warranty entry;
        entry.tofile();
    }
    return 0;
}
