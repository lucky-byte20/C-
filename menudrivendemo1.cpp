#include<iostream>
#include<iomanip>

using namespace std;
class Employee
{
    public:
    string ename;
    int empid;
    long salary;
}emp[100];

int main()
{
    int choice=0,n=0,totalrecord=0,found;
    do{
        cout<<"1.Add record."<<endl;
        cout<<"2.Display record."<<endl;
        cout<<"3.Search record by empno."<<endl;
        cout<<"4.Update record by empno."<<endl;
        cout<<"5.Delete record by empno."<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter how many employee record you want to add:";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter employee id:";
                cin>>emp[i].empid;
                cout<<"Enter employee name:";
                cin>>emp[i].ename;
                cout<<"Enter salary:";
                cin>>emp[i].salary;
            }
            totalrecord+=n;
            break;
        case 2:
            cout<<left<<setw(12)<<"Employee id"<<setw(20)<<"Employee name"<<right<<setw(8)<<"Salary"<<endl;
            for(int i=0;i<totalrecord;i++)
            {
                cout<<left<<setw(12)<<emp[i].empid<<setw(20)<<emp[i].ename<<right<<setw(8)<<emp[i].salary<<endl;
            }break;
        case 3:
            found=0;
            int id;
            cout<<"Employee ID to be searched:";
            cin>>id;
            for(int i=0;i<totalrecord;i++)
            {
                if(emp[i].empid==id)
                {
                    cout<<left<<setw(12)<<emp[i].empid<<setw(20)<<emp[i].ename<<right<<setw(8)<<emp[i].salary<<endl;
                    found=1;
                }
                if(!found)
                    cout<<"Record Does Not Exist"<<endl;
            }break;
        case 4:
            found=0;
            int empno;
            cout<<"Enter employee id to update:"<<endl;
            cin>>empno;
            for(int i=0;i<totalrecord;i++)
            {
                if(emp[i].empid==id){
                cout<<"Enter new employee name:";
                cin>>emp[i].ename;
                cout<<"Enter new salary:";
                cin>>emp[i].salary;
                found=1;
                cout<<"Record updated successfully"<<endl;
            }}
            if(!found)
                cout<<"Record not found"<<endl;
            break;
        case 5:
            found=0;
            int temp=0;
            int no;
            cout<<"Enter employee id to delete:"<<endl;
            cin>>no;
            for(int i=0;i<totalrecord;i++)
            {
                if(emp[i].empid==id)
                {
                    temp=1;
                    found=1;
                }emp[i]=emp[i+temp];
            }
            if(found)
                cout<<"Record deleted successfully"<<endl;
            else
                cout<<"Record not found"<<endl;
            break;

        }
    }while(choice!=0);

    return 0;
}

