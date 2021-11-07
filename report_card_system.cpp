// [10:06 PM, 11/7/2021] Amjad Ali Shah Quest: 
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class project
{
public:
    float percentage;
    int batch;
    string name;
    int option;
    string rollno;
    float marks1,marks2,marks3,marks4,marks5;
    float total=marks1+marks2+marks3+marks4+marks5;
public:
    void menu();
    void result(){
         cout<<"\t\t\t  --------------------------------- \n";
        cout<<"\t\t\t *DEPARTMENT INFORNATION TECHNOLOGY* "<<endl;
        cout<<"\t\t\t  ---------------------------------";
        cout<<"\n \n";
        cout<<"\t\t\t ENTER THE Roll number of student : ";
         cin>>rollno;
        cout<<"\t\t\t The Name of student is :";
        cin>>name;
        cout<<"\t\t\t ENTER THE OF STUDENT  BATCH :";
        cin>>batch;
        cout<<"\n";
        cout<<"\t\t\t  ENTER  THE MARKS OF ICT :";
        cin>>marks1;
        cout<<"\n";
        cout<<"\t\t\t ENTER THE MARKS OF PF :";
        cin>>marks2;
        cout<<"\n";
        cout<<"\t\t\t ENTER THE MARKS OF ENGLISH :";
        cin>>marks3;
        cout<<"\n";
        cout<<"\t\t\t ENTER THE MARKS OF DS :";
        cin>>marks4;
        cout<<"\n";
        cout<<"\t\t\t ENTER THE MARKS OF PHYSICS :";
        cin>>marks5;
        cout<<"\n";
        percentage=total/440*100;
        cout<<"\t\t\t THE PERCENTAGE OF "<< "IS"<<percentage;
        cout<<"\n";
        cout<<"\t\t\t CONGRETULATION YOU ARE PASS ";
        cout<<"\t\t\tGRADE IS A+"<<endl;
        cout<<"\n";
    }
};
void project::menu(){
	cout<<"\t\t\t         ================================="<<endl;
    cout<<"\t\t\t         QUAID-E-AWAM UNIVERSTY NAWABSHAH \n"<<"";
    cout<<"\t\t                 ======ETHICAL HACKER GROUP=======\n";
  
    cout<<endl<<endl;
    cout<<endl<<endl;
    
    cout<<"\t\t\t            *********PROJECT***********\n";
	cout<<"\t\t\t            | STUDENT REPORT CARD SYSTEM |\n";
	cout<<"\t\t\t            ***************************";
    cout<<"\n";
    cout<<"\t \t\t\t     MAIN MENU \n";
    cout<<"\t  \t\t\t     01 : MAKE A RECORD FOR NEW STUDENT  \n";
    cout<<"\t  \t\t\t     02 : SEARCH RECORD OF STUDENT  \n";
    cout<<"\t  \t\t\t     03 : DISPLAY RECORD OF STUDENT  \n";
    cout<<"\t  \t\t\t     SELECT YOUR OPTION (1-3)  ";
    cin>>option;
     system("cls");
    switch (option)
    {
    case 1 :
        result();
        break;
    
    default :
    cout<<"your option is invalid";
        break;
    }
}
int main(){
    project student;
    student.menu();
    return 0;
}