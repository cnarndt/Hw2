//Clayton Arndt
//Homework 2
//9/20/20
//CS 201

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::endl;
using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::find;
using std::getline;

void InputNames(vector<string> & names){


    for (int i=0; i < 10; i++ ){
        string name;
        cout << "Please enter a name:";
        getline(cin,name);
        names.push_back(name);

    }


}

bool DoesNameExist(const string & nameToFind, const vector<string> & names)
{

    if (find(names.begin(), names.end(), nameToFind) != names.end())
    {
        cout << "The name " << nameToFind << " exists in the list.\n" << endl; // using algorithim from the include
        return true;
    }
    else
    {
        cout << "The name " << nameToFind << " does not exist in the list.\n" << endl;
        return false;
    }
}

void PrintNames(const vector<string> & names)
{
cout << "Here is your list of names:\n";
for (int i = 0; i < names.size(); i++)
{
cout << names.at(i) << endl;
}


}

void PrintNamesBack(const vector<string> & names){
    cout<<"This is your list, with each name inverted:\n";
    for(int i = 0; i < names.size(); i++){
        string rvs = names.at(i);
        for (int k = rvs.length() - 1; k >= 0; k--)
        {
            cout << rvs[k];
        }
        cout << endl;
    }
}




int main() {
    string name = "John Doe";
    vector<string> names;

    InputNames(names);

    DoesNameExist(name, names);

    PrintNames(names);

    PrintNamesBack(names);
    return 0;

}