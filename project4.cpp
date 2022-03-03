#include "iostream"
#include "fstream"
using namespace std;

int main()
{
    ifstream dannyFile("danny.txt");

    if (dannyFile.fail())
    {
        cout << "error";
    }
    else
    {
      int line  = 0 ;
      while (dannyFile >> line)
      {
          cout<<line<<endl;
      }
      
    }

    return 0;
}