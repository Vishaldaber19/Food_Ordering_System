#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include"myfile.h"
using namespace std;
void order()
{
    //combine both total and info file nd then read line by line
    //ifstream total("total.txt")
    system("clear");
    string t;
    ifstream data("info.txt");
    while (getline(data,t))
    {
        cout<<t<<endl;;
    }
    cout<<"\nPress Enter key to return Mainmenu....";
            cin.get();
            cin.get();
            mainmenu();
    
}