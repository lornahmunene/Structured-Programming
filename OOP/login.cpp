#include <iostream>
using namespace std;



int main(){
    int attempts=0;
    string correctUsername="Admin";
    string correctPassword="12345";
    string username;
    string password;
    while (attempts<3){

    cout<<"Enter your username: "<<endl;
    cin>>username;

    cout<<"Enter your password: "<<endl;
    cin>>password;

    if(username== correctUsername &&password==correctPassword){
        cout<<"Login successful!"<<endl;
        break;
    }
    else{
        cout<<"Invalid username or password. Please try again."<<endl;
        attempts++;
    }
}
}