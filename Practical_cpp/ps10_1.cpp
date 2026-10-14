#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("sample.txt");
    char ch;
    int lines = 0, words = 0, chars = 0;

    while (f.get(ch))
    {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
            words++;
    }

    f.close();

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << chars;

    return 0;
}