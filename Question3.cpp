/* Admission number 110800
Introduction to Programming*/

#include <iostream>
using namespace std;

int main(){
   int opt; //Switch...case variable
   string name, pass;

   cout<<"Please log in to your account"<<endl<<endl;
   cout<<"Enter user name: ";
   getline(cin, name);
   cout<<"Enter password: ";
   getline(cin, pass);

    if(name == "User" && pass == "123"){ //password should be 123 and username User
        cout<< "Success!";
    }
    else{
        cout<<"Unsuccessful";
    }
    
   cout<<"\n1.About Us \n2.Services\n3.Profile Page\n4.Log out"<<endl<<endl;
   cout<<"Please select one (eg. 1, 2, 3 etc....)"<<endl;
   cin>>opt;

   switch(opt){
    //First possible value of the switch case
    case 1:
        cout<<"My name is Nduku"<<endl;
        break; //Directs the compiler to stop execution and jump out
    
   case 2:
        cout<<"I am an assistant QS ready to work"<<endl;
        break;

    case 3:
        cout<<"Nduku Mwania"<<endl;
        cout<<"Age: 22"<<endl;
        break;

    case 4:
        cout<<"Log out successful"<<endl;
        break;

    

    default:
        cout<<"Invalid input. That value is not part of the timetable. Kindly input another choice between 1 and 4";    
   } // End of switch case
   
   return 0; 
}