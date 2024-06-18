#include<iostream>
using namespace std;
class Person{
private:
  string name;
public:
  void setName(string n){
     name = n;
  }
public:
 string getName(){
     return name;
 }
};
class Athlete{
 public:
 string sport;
 public:
 void setSport(string s){
  sport = s;
 }
 string getSport(){
  return sport;
 }
};
class Student : public Person,public Athlete {
   public:
   int studentID;
   void setStudentId(int a){
     studentID = a;
    
   }
   void setSportName(string s){
    sport = s;
   }
   string getSport(){
  return sport;
 }
   int getStudentId(){
    return studentID;
   }
};
int main(){
  Person p1;
  p1.setName("swaraj");
  cout<<"name: "<<p1.getName()<<endl;
  cout<<"now calling child class"<<endl;
  Student s1;
  s1.setStudentId(1225);
  s1.setSportName("Football");
  cout<<"student id: "<<s1.getStudentId()<<endl;
  cout<<"sport name: "<<s1.getSport()<<endl;
}