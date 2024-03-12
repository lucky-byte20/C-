#include<iostream>
#include<iomanip>

using namespace std;
int row,col;
void name()
{
    for(row=1;row<=10;row++)
    {
        for(col=1;col<=5;col++)
         {
             if((col==1&&row==1)||(col==1&&row==2)||(col==1&&row==3)||(col==1&&row==4)||row==5)
                cout<<"* ";
             else
                cout<<"  ";
         }cout<<" ";
         for(col=1;col<=5;col++)
         {
             if(row==1 || row==3 || (col==1&&(row==2||row==4||row==5))||(col==5&&(row==2||row==4||row==5)))
                cout<<"* ";
             else
                cout<<"  ";
         }
         cout<<" ";
         for(col=1;col<=5;col++)
         {
             if(col==1&&(row==1||row==2||row==3||row==4||row==5) || (col==3&&(row==2||row==4) )|| (col==5 &&(row==1||row==5)))
                cout<<"* ";
             else
                cout<<"  ";
         }
         cout<<" ";
         for(col=1;col<=5;col++)
         {
             if(row==1 || row==3 || row==5 || (col==1&&row==2) || (col==5&&row==4))
                cout<<"* ";
             else
                cout<<"  ";
         }
         cout<<" ";
          for(col=1;col<=5;col++)
         {
             if(col==1&&(row==1||row==2||row==3||row==4||row==5) ||col==5&&(row==1||row==2||row==3||row==4||row==5)||row==3)
                cout<<"* ";
             else
                cout<<"  ";
         }cout<<" ";
          for(col=1;col<=5;col++)
         {
             if((row==1&&(col==1||col==5))||(row==2&&(col==2||col==4))||(col==3&&(row==3||row==4||row==5)))
                cout<<"* ";
             else
                cout<<"  ";
         }cout<<" ";
         for(col=1;col<=5;col++)
         {
             if(row==1 || row==3 || (col==1&&(row==2||row==4||row==5))||(col==5&&(row==2||row==4||row==5)))
                cout<<"* ";
             else
                cout<<"  ";
         }

          cout<<endl;


     }
}
int main()
{
    cout<<setw(70)<<"Name Printed using nested loop"<<endl;
    cout<<"============================================================================================================"<<endl;
        name();


}
