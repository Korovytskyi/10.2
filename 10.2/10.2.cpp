#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("1.txt");
    char text_change[10000];
    ofstream out("2.txt");
    while (input.getline(text_change, sizeof(text_change)))
    {
        for (int i = 0; i < sizeof(text_change); i++)
        {
            if ((text_change[i] == ' ') )
            {
                text_change[i] = '/';
            }
            
        }
        out << text_change;
    }
    input.close();
    out.close();
    system("pause");
    return 0;
}
