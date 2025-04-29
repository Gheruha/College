#include <iostream>
#include <typeinfo>
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
    else
    {
        cout << "This option does not exist. Use -help to see all the available options";
    }
}

void selectSpecialFunctionToRun(int argc, const char *argv[])
{
    string option1 = string(argv[1]);
    string option2 = string(argv[2]);

    if (option1 == "-tsp" && option2 == "-b")
    {
        travelingSalesmanProblem();
    }
}