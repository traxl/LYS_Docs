
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //ofstream myfile;
   // myfile.open ("example.txt");
    //myfile << "Writing this to a file.\n";
   // myfile.close();
    //return 0;

    std::string line;
    std::string variable;
   // std::thingToWrite;
    variable = "contact=";
      ifstream myfile ("example.txt");
      if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {

            if(line.find(variable,0) != string::npos)
            {
                cout << line << '\n';


            }
        }
       //cout<<thingToWrite<<'\n';
        myfile.close();
      }

      else cout << "Unable to open file";

      return 0;
}


