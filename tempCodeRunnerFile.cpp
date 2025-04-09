#include<iostream>

using namespace std;

class Employee{
    private:
string name;
public:
Employee(string n){
    name=n;
}
void displayName(){
    cout<<"Name :"<<name<<endl;
}

};

int main() {

  Employee emp("JOhn Doe ");
  emp displayName();

return 0;
}