#include <iostream>
#include <iomanip>

using namespace std;
int q1,q2,q3,q4;
float p1,p2,p3,p4,sum,dis,pay;
void line()
{
    cout<<"====================================================="<<endl;
}
void totalAmount()
{
    sum=(p1*q1)+(p2*q2)+(p3*q3)+(p4*q4);
    cout<<setw(40)<<"Total Amount ="<<setw(10)<<sum<<endl;
}
void discount()
{
    dis=sum*0.1;
    cout<<setw(40)<<"Discount ="<<setw(10)<<dis<<endl;
}
void payment()
{
    pay=sum-dis;
    cout<<setw(35)<<"Amount To Be Paid ="<<setw(5)<<pay<<endl;
}
int main()
{

    cout<<"enter p1"<<endl;
    cin>>p1;
    cout<<"enter q1"<<endl;
    cin>>q1;
    cout<<"enter p2"<<endl;
    cin>>p2;
    cout<<"enter q2"<<endl;
    cin>>q2;
    cout<<"enter p3"<<endl;
    cin>>p3;
    cout<<"enter q3"<<endl;
    cin>>q3;
    cout<<"enter p4"<<endl;
    cin>>p4;
    cout<<"enter q4"<<endl;
    cin>>q4;
    system("cls");

    cout<<setw(30)<<"XYZ MART PVT LTD"<<endl;
    cout<<setw(34)<<"3\\top, PQR Shopping Mall"<<endl;
    cout<<setw(27)<<"Gandhinagar"<<endl;
    line();
    cout<<"Bill No:101"<<setw(40)<<"07-FEB-2024"<<endl;
    line();
    cout<<left<<setw(7)<<"SR.NO"<<setw(20)<<"ITEM NAME"<<right<<setw(10)<<"PRICE"<<setw(7)<<"QTY"<<setw(10)<<"TOTAL"<<endl;
    cout<<left<<setw(7)<<"1."<<setw(20)<<"Monitor"<<right<<setw(10)<<p1<<setw(7)<<q1<<setw(10)<<p1*q1<<endl;
    cout<<left<<setw(7)<<"2."<<setw(20)<<"Printer"<<right<<setw(10)<<p2<<setw(7)<<q2<<setw(10)<<p2*q2<<endl;
    cout<<left<<setw(7)<<"3."<<setw(20)<<"Mouse"<<right<<setw(10)<<p3<<setw(7)<<q3<<setw(10)<<p3*q3<<endl;
    cout<<left<<setw(7)<<"4."<<setw(20)<<"CPU"<<right<<setw(10)<<p4<<setw(7)<<q4<<setw(10)<<p4*q4<<endl;
    line();
    totalAmount();
    discount();
    payment();
    line();
    return 0;
}
