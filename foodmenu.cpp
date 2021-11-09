#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<istream>
#include<ctime>
#include"myfile.h"
using namespace std;
void food()
{
    system("clear");
    int total=0;
    int quantity;
    cout<<"*****************************************\n";
    cout<<"\t*\tFood Menu\t*\t\n";
    cout<<"*****************************************\n";
    cout<<"Enter the Number for Selected Food\n";
    cout<<"\n";
    cout<<"#1\tPizza       90.00\n";
    cout<<"#2\tFries       50.00\n";
    cout<<"#3\tSandwich    40.00\n";
    cout<<"#4\tBurger      60.00\n";
    cout<<"#5\tNoodles     75.00\n";
    int choice;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch (choice)
    {
         case 1:
        {
            cout<<"\nEnter the Quantity : ";
            cin>>quantity;
            total=total+90*(quantity);
            cout<<"\nYour Total Amount is : "<<total;
            break;
        }
        case 2:
        {
            cout<<"\nEnter the Quantity : ";
            cin>>quantity;
            total=total+50*(quantity);
            cout<<"\nYour Total Amount is : "<<total;
            break;
        }
        case 3:
        {
              cout<<"\nEnter the Quantity : ";
            cin>>quantity;
            total=total+40*(quantity);
            cout<<"\nYour Total Amount is : "<<total;
            break;
        }
        case 4:
        { 
            cout<<"\nEnter the Quantity : ";
            cin>>quantity;
            total=total+60*(quantity);
            cout<<"\nYour Total Amount is : "<<total;
            break;
        }
        case 5:
        {
            cout<<"\nEnter the Quantity : ";
            cin>>quantity;
            total=total+75*(quantity);
            cout<<"\nYour Total Amount is : "<<total;
            break;
        }
        default:
        cout<<"\nPlease enter a valid choice";
        food();
        break;
    }
    cout<<"\n\nPress 1 to Confirm your Order: ";
    cout<<"\nPress 2 to  Cancel your Order: ";
    cout<<"\nPress 3 to Return Mainmenu:";
    int ch;
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        {
            system("clear");
             // Declaring argument for time()
            time_t tt;
            // Declaring variable to store return value of
            // localtime()
            struct tm * ti;
             // Applying time()
             time (&tt);
             // Using localtime()
             ti = localtime(&tt);
            ofstream view("info.txt",ios::app);
            //view<<"*********************************************************\n";
            view<<"Grand Total : "<<total<<endl<<"\n";
            view.close();
            char name[20];
            char address[50];
            int number;
            cout<<"\n\tFill customer details\n";
            cout<<"\nEnter your name: ";
            cin>>name;
            cout<<"Enter your address : ";
            cin>>address;
            cout<<"Enter Mobile Number : ";
            cin>>number;
            ofstream data("info.txt",ios::app);
            data<<"Order by : "<<name<<endl<<"Delivery Address : "<<address<<endl<<"Phone Number  : "<<number<<endl<<"\n";
            data<<"\t\t\t"<<asctime(ti)<<"\n";
            data<<"*********************************************************\n";
            data.close();
            system("clear");
            cout<<"Your details has been recorded Successfully..\n";
            cout<<"\n*************************************************\n";
            cout<<"\tYour order will be in 5 minutes...";
            cout<<"\n\tThank You...";
            cout<<"\n*************************************************\n";
            cout<<"\nPress Enter key to return Mainmenu....";
            cin.get();
            cin.get();
            mainmenu();
            break;
        }
    case 2:
        {
            system("clear");
            cout<<"\nYour Order is Cancelled...";
            cout<<"\n\n Press 1 to Order Again: \n";
            cout<<"Press 2 to Return Mainmenu: ";
            int ch2;
            cout<<"\nEnter your choice : ";
            cin>>ch2;
            switch (ch2)
            {
            case 1:
                food();
                break;
            case 2:
                mainmenu();
                break;
            default:
                cout<<"\nPlease Enter a valid choice";
                food();
                break;
            }
            break;
        }
    case 3: 
        mainmenu();
        break;
    default:
        cout<<"\nPlease enter a valid choice";
        food();
        break;
    }
}
    
           