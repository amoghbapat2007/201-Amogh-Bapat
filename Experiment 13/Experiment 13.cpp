#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string source, destination;
    cout <<" Enter source file name: ";
    cin >> source;
    cout <<" Enter destination file name: ";
    cin >> destination;
    ifstream fin(source);

    if (!fin)
    {
        cout <<" Error opening source file! ";
        return 1;
    }

    ofstream fout(destination);

    if (!fout)
    {
        cout << " Error opening destination file! ";
        fin.close();
        return 1;
    }

    fout << fin.rdbuf();
    cout << " File copied successfully! ";

    fin.close();
    fout.close();

    return 0;
}
