#include <iostream>
#include "Console/console.h"
using namespace std;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        cout << "You need to select an option\n";
    }
    else
    {
        selectFunctionToRun();
    }
}