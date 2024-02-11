#include<iostream>
#include<cstring>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
 
class Car {
   
    private:
    int price;
    char model[10];
     public:
     int num;
    string name;
    Car(int num){
        this -> num=num;

    }
    int getprice() { return price; }
    void setprice(int value) { price = value;}
 };

class Students{
    string m_first;
    string m_last;
    string m_id;
    int m_avg;
public: 
    Students(string first,string last,string id,int avg){
        m_first = first;
        m_last = last;
        m_id=id;
        m_avg=avg;
    }
    int getAvg(){
        return m_avg;
    }
    string getFirst()const {
        return m_first;
    }
    string getLast()const{
        return m_last;
    }
    string getid()const{
        return m_id;
    }
    void print() const {
        cout<<m_first<<" "<<m_last<<" "<<m_id<<" "<<m_avg<<endl;
    }
    

};



class Course{
    string m_name="Course";
    vector<Students> m_students;
public:
    Course(){}
    Course(string name) {
        m_name = name;
    }   
    string getname() const 
    {   
         return m_name;
    }
    void addStudent(const Students s)
    {
        m_students.push_back(s);
    }
   const vector<Students> getStudent() const { 
        return m_students;
    }
    void loadFromFile(const string& filename){

        ifstream fin(filename);
    
        string first, last,id;
        int avg;

        while (fin>>first){
            fin>>last>>id>>avg;
            addStudent(Students(first,last,id,avg));
            
        }

    }
    // vector<m_students> students()  {
    //     return m_students;
    // }
    void delall(){
        return m_students.clear();
    }
    // string getelement(int i)  {
    //     return m_students[i];
    // }
    void print() const {
        for(const auto& s : m_students)
        {
            s.print();
        }
    }
};

int main() {

   
   Students s2("priyanshu","paul","23FE10CSE00780",100);
   Students s3("yadvi","aggarwal","23FE1sdoifhh0780",100);
    //cout<<s3.getAvg()<<endl;
    cout<<"---------------------------------------|"<<endl;
    cout<<"------------Course Name----------------|"<<endl;
    Course COMP4300("COMP4300");
    cout<<COMP4300.getname()<<endl;
    cout<<"---------------------------------------|"<<endl;
    
    COMP4300.addStudent(s2);
    COMP4300.addStudent(s3);
    COMP4300.print();
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------|"<<endl;
    cout<<"------------Course Name----------------|"<<endl;
    Course c("CSE10011");
    cout<<c.getname()<<endl;
    cout<<"---------------------------------------|"<<endl;
   
    c.loadFromFile("students.txt");
    c.print();
    cout<<"---------------------------------------|"<<endl;
    Course d("OOPs");
    cout<<d.getname()<<endl;
    cout<<"---------------------------------------|"<<endl;
    //d.delall();
    //cout<<d.getelement(3)<<endl;
    // for(auto a:d.m_students){
    //     cout<<a<<endl;
    // }

    d.loadFromFile("students(oops).txt");
    d.print();


    return 0;
}





//     cout<<"size : " << sizeof(c1)<<endl;
//     // cout<<"price : "<< c1.getprice()<<endl;
//     c1.setprice(100);
//     cout<<"name :"<<c1.name<<endl<<"price : "<< c1.getprice()<<endl;
    
//     Car *c2 = new Car;
//     //strcpy(c2->name, "test");
//    // c2.name="test";
//     //cout<<(*c2).name<<endl;
//     c2->setprice(200);
//     // c2->name="Honda";
//     cout<<"price : "<< c2->getprice()<<endl;
//     return 0;


  
 