#include<iostream>
#include<iomanip>
using namespace std;
int choice,row=5,col=5;
void mirrorLeftAT(int n,char ch)
{
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           cout<<" "<<ch;
       }cout<<endl;
   }
}
void leftAT(int n,char ch)
{
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<i+1;j++)
       {
           cout<<" "<<ch;
       }cout<<endl;
   }
}
void rightAT(int n,char ch)
{
   for(int i=1;i<=n;i++)
   {
       for(int j=n-i;j>0;j--)
       {
           cout<<"  ";

       }
       for(int k=i;k>0;k--)
       {
           cout<<" "<<ch;

       }
       cout<<endl;
   }
}
void pyramid(int n,char ch)
{
   for(int i=1;i<=n;i++)
   {
       for(int j=n-i;j>0;j--)
       {
           cout<<" ";

       }
       for(int k=i;k>0;k--)
       {
           cout<<" "<<ch;

       }
       cout<<endl;
   }
}
void mirrorRightAT(int n,char ch)
{
   for(int i=n;i>=0;i--)
   {
       for(int j=i;j<n;j++)
       {
           cout<<"  ";

       }
       for(int k=0;k<=i;k++)
       {
           cout<<" "<<ch;

       }
       cout<<endl;
   }
}
void mirrorPyramid(int n,char ch)
{
   for(int i=n;i>=0;i--)
   {
       for(int j=i;j<n;j++)
       {
           cout<<" ";

       }
       for(int k=0;k<=i;k++)
       {
           cout<<" "<<ch;

       }
       cout<<endl;
   }
}

int main()
{
    do
    {
        cout<<"1.Left Aligned Triangle"<<endl;
        cout<<"2.Right Aligned Triangle"<<endl;
        cout<<"3.Pyramid"<<endl;
        cout<<"4.Mirrored Left Aligned Triangle"<<endl;
        cout<<"5.Mirrored Right Aligned Triangle"<<endl;
        cout<<"6.Mirrored Pyramid"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter Your Choice :";
        cin>>choice;
        switch(choice)
        {
        case 1:
            int n;char ch;
            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            leftAT(n,ch);
            break;
        case 2:

            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            rightAT(n,ch);
            break;
        case 3:

            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            pyramid(n,ch);
            break;
        case 4:

            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            mirrorLeftAT(n,ch);
            break;
        case 5:
            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            mirrorRightAT(n,ch);
            break;
        case 6:
            cout<<"Enter n:";
            cin>>n;
            cout<<"Character to print:";
            cin>>ch;
            mirrorPyramid(n,ch);
            break;
        case 0:
            break;
        }
    }while(choice!=0);

    return 0;
}
