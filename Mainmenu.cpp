#include<iostream>
#include<stdlib.h>
#include"myfile.h"
using namespace std;
void mainmenu()
{
    system("clear");
    cout<<"\n***********************************************";
    cout<<"\n\tWelcome to Food Ordering System\t";
    cout<<"\n***********************************************\n";
    int choice;
    cout<<"\n1.Search for Food";
    //cout<<"\n2.Play Games";
    cout<<"\n2.View Orders";
    cout<<"\n3.Log out";
    cout<<"\n\nEnter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        food();
        break;
    case 2:
        order();
       // games();
        break;
    case 3:
        cout<<"\nLog out Successfully...\n\n";
        login();
    
    default:
        cout<<"\nEnter a valid choice\n";
        mainmenu();
    }
}