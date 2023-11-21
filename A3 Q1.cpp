#include <iostream>
using namespace std;
struct Student {
    int studentID;
    double GPA;
};
void printStudentInfo(Student s) {
   std::cout<<"Student ID is :"<<s.studentID<<", GPA :" <<s.GPA;


}

int main(){

Student alice={101,3.8};
printStudentInfo(alice);
return 0;

}
