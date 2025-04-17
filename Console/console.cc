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
    else
    {
        cout << "This option does not exist. Use -help to see all the available options";
    }
}