#include <iostream>
#include <string>
#include "Console/console.h"
#include <fstream>
using namespace std;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        cout << "You need to select an option\n";
    }
    else
    {
        string option = string(argv[1]);
        if (option == "-help")
        {
            ifstream helpFile("main/help.txt");
            string line = "";

            if (!helpFile.is_open())
            {
                cout << "Help file could not be opened.";
                return 0;
            }

            cout << "\n\n";
            while (getline(helpFile, line))
            {
                cout << line;
            }
            helpFile.close();
        }
        else
        {
            selectFunctionToRun(option);
        }
    }
}