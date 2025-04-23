#include <iostream>
#include <string>
#include <vector>
#include "console.h"
#include "Optimisation/methods.h"
using namespace std;

void selectFunctionToRun(string option)
{

    if (option == "-pb")
    {
        permutBacktrack();
    }
    else if (option == "-tsp -b")
    {
        travelingSalesmanProblem();
    }
    else
    {
        cout << "This option does not exist. Use -help to see all the available options";
    }
}

void selectSpecialFunctionToRun(int argc, const char *argv[]){
    for(int i = 0; i < argc; i++){
        cout << argv[i] << "\n";
    }
}