#include <iostream>
#include<vector>
#include<string>
using namespace std;

class Students{
  string name;
  int grades;
  public:
  string course;
  Students(string name,int grades){
    this->name=name;
    this->grades=grades;
    
  }
string getname(){
  return name;
}
int getgrades(){
  return grades;
}
void print(){
  cout<<name<<" "<<grades<<" "<<course<<endl;
}

};
void pointers(int  i){
   i=10;
  
};
int main() {
  int a=11;
  int b=12;
  pointers(a);
  pointers(b);
  cout<<a<<" "<< &a<<endl;
  cout<<b<<" "<< &b<<endl;
  
  Students s1("James",90);
  Students s2("priyanshu",80);
 // s1.getname();
  
  s1.course="bba";
  s2.course="compsc";
   s1.print();
  s2.print();
  int *arr = new int;
  *arr=11;
  cout<<*arr<<endl;
  delete arr;
  return 0;
  
}