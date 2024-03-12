#include<iostream>
#include<iomanip>
using namespace std;
int tp;
class Subject
{
public:
    string sname;
    int scode;
    int tmarks;
    int pmarks;

}sub[10];
string name,mname,fname;
int date,month,year,rno,n,totalt=0,totalp=0,total=0;
void marksheet()
{
    cout<<setw(50)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
    cout<<setw(38)<<"MARKSHEET"<<endl;
    cout<<setw(56)<<"ALL INDIA SECONDARY SCHOOL EXAMINATION, 2023"<<endl;
    cout<<"========================================================================"<<endl;
    cout<<"Candidate's Name :"<<" "<<name<<endl;
    cout<<"Candidate's Roll No :"<<" "<<rno<<endl;
    cout<<"Mother's Name :"<<" "<<mname<<endl;
    cout<<"Father's Name :"<<" "<<fname<<endl;
    cout<<"Candidate's DOB:"<<" "<<date<<"/"<<month<<"/"<<year<<endl;
    cout<<"========================================================================"<<endl;
    cout<<left<<setw(4)<<"SCd"<<setw(30)<<"SUBJECT"<<setw(10)<<"THEORY"<<setw(10)<<"PRACTICAL"<<setw(7)<<"TOTAL"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<left<<setw(4)<<sub[i].scode<<setw(30)<<sub[i].sname<<right<<setw(10)<<sub[i].tmarks<<setw(10)<<sub[i].pmarks<<setw(7)<<tp<<endl;
    }
    cout<<"========================================================================"<<endl;
    cout<<setw(44)<<totalt<<setw(10)<<totalp<<setw(8)<<"Total="<<total<<endl;
}

int main()
{

    cout<<"enter name of student:";
    cin>>name;
    cout<<"enter roll no:";
    cin>>rno;
    cout<<"enter mother's name:";
    cin>>mname;
    cout<<"enter father's name:";
    cin>>fname;
    cout<<"enter date of birth \n"<<endl;
    cout<<"date:";
    cin>>date;
    cout<<"month:";
    cin>>month;
    cout<<"year:";
    cin>>year;
    cout<<"enter no of subjects:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter subject "<<i+1<<"code:";
        cin>>sub[i].scode;
        cout<<"enter subject "<<i+1<<"name:";
        cin>>sub[i].sname;
        cout<<"enter subject "<<i+1<<"marks:";
        cin>>sub[i].tmarks;
        cout<<"enter subject practical "<<i+1<<"marks:";
        cin>>sub[i].pmarks;
        totalt+=sub[i].tmarks;
        totalp+=sub[i].pmarks;
        tp=sub[i].tmarks+sub[i].pmarks;
    }

    total=totalp+totalt;
    marksheet();
    return 0;
}
