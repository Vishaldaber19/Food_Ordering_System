#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<istream>
#include"myfile.h"
using namespace std;
void registerr()
{
    system("clear");
    string username;
    string password;
    cout<<"enter the username: ";
    cin>>username;
    cout<<"enter the password: ";
    cin>>password;
    ofstream regs("database.txt",ios::app);
    regs<<username<<' '<< password <<endl;
    system("clear");
    cout<<"Registration Successful\n";
    login();
}
void login1()
{
    system("clear");
    int exist=0;
    string username;
    string password;
    string user="",pass="";
    cout<<"enter the username : ";
    cin>>username;
    cout<<"enter the password : ";
    cin>>password;
    ifstream data("database.txt");
    while (data>>user>>pass)
    {
        if (user==username && pass==password)
        {
            exist=1;
        }
    }
    data.close();
    if (exist==1)
    {
        system("clear");
        cout<<"Hello "<<username<<" Glad you are here\n";
        cout<<"......Press Enter key to continue....";
        cin.get();
        cin.get();
        mainmenu();
    }
    else
    {
        cout<<"User not exist"<<endl;
        cout<<"......Press Enter key to continue....";
        cin.get();
        cin.get();
        system("clear");
        login();
    } 
}
void forget()
{
    system("clear");
    int exist=0;
    string username;
    string user="",pass="";
    cout<<"enter your account username: ";
    cin>>username;
    ifstream data("database.txt");
    while (data>>user>>pass)
    {
        if(user==username)
        {
            exist=1;
            break;
        }
    }
    data.close();
    if (exist==1)
    {
        cout<<"Congrats your account found\n";
        cout<<"Your username is : "<<user<<endl;
        cout<<"Your password is : "<<pass<<endl;
        cout<<"......Press Enter key to continue....";
        cin.get();
        cin.get();
        login();
    }
    else
    {
        cout<<"Your account not found\n";
        cout<<"......Press Enter key to continue....";
        cin.get();
        cin.get();
        login();
    }
}
void login()
{
    system("clear");
    int choice;
    cout<<"************* Login ************\n";
    cout<<"1.Login";
    cout<<"\n2.Register";
    cout<<"\n3.Forget Password";
    cout<<"\n4.Exit";
    cout<<"\nEnter the choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        login1();
        break;
    case 2:
        registerr();
        break;
    case 3:
        forget();
        break;
    case 4:
        cout<<"\n\tThanks for using this app";
        exit(0);
    default:
        cout<<"Enter a valid choice\n\n";
        login();
        break;
    }
}