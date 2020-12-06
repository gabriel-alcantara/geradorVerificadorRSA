// my_class.cpp
#include "../hpp/file.hpp" // header in local directory
#include <iostream>        // header in standard library
#include <iostream>
#include <fstream>

using namespace N;
using namespace std;

void file::read(string pathFile)
{
    cout << "path file: " << pathFile << endl;
    string line;
    ifstream myfile(pathFile);

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";
}
