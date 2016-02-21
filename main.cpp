#include <iostream>
#include <string>
#include <fstream>
int main(int argc, char* argv[])
{
  using namespace std;
  if(int(argc) == 1)
    {
      char filename[100];
      string text;
      cout << "Welcome to Dirt Editor" << endl;
      cout << "Enter name of the file to edit: " << endl;
      cout << "NOTE: If the file does not exist, it will be created!" << endl;
      cin >> filename;
      ofstream editfile;
      editfile.open(filename);
      cout << "Put the text now!" << endl;
      cin >> text;
      editfile << text << endl;
      cout << "Closing file!" << endl;
      editfile.close();
    }
}
