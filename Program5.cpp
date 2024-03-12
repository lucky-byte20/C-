#include<iostream>
#include<iomanip>
using namespace std;
int x,y,choice;
namespace car{
    void print(){
        cout<<"car::print()-> I come from car!"<<endl;
        }
    }
namespace bike{
    void print(){
        cout<<"bike::print()-> I come from bike"<<endl;
        }
    }
void arithmetic()
{
    cout<<"Arithmetic Operator:"<<endl;
            cout<<left<<setw(15)<<"Addition(+)"<<right<<setw(2)<<"="<<setw(7)<<(x+y)<<endl;
            cout<<left<<setw(15)<<"Subtraction(-)"<<right<<setw(2)<<"="<<setw(7)<<(x-y)<<endl;
            cout<<left<<setw(15)<<"Multiplication(*)"<<right<<setw(2)<<"="<<setw(7)<<(x*y)<<endl;
            cout<<left<<setw(15)<<"Division(/)"<<right<<setw(2)<<"="<<setw(7)<<(x/(float)y)<<endl;
            cout<<left<<setw(15)<<"Modulus(%)"<<right<<setw(2)<<"="<<setw(7)<<(x%y)<<endl;
            cout<<"======================================"<<endl;
}
void relational()
{
    cout<<"Relational Operator:"<<endl;
    cout<<left<<setw(21)<<"First no < Second no"<<right<<setw(2)<<"="<<setw(2)<<boolalpha<<(x<y)<<endl;
    cout<<left<<setw(21)<<"First no > Second no"<<right<<setw(2)<<"="<<setw(2)<<(x>y)<<endl;
    cout<<left<<setw(21)<<"First no <= Second no"<<right<<setw(2)<<"="<<setw(2)<<(x<=y)<<endl;
    cout<<left<<setw(21)<<"First no >= Second no"<<right<<setw(2)<<"="<<setw(2)<<(x>=y)<<endl;
    cout<<left<<setw(21)<<"First no == Second no"<<right<<setw(2)<<"="<<setw(2)<<(x==y)<<endl;
    cout<<left<<setw(21)<<"First no != Second no"<<right<<setw(2)<<"="<<setw(2)<<(x!=y)<<endl;
}
void logical()
{
    cout<<"Logical Operator:"<<endl;

            cout<<left<<setw(45)<<"Logical AND(&&) (x>y)&&(x<y) value "<<right<<setw(2)<<"="<<setw(2)<<((x>y)&&(x<y))<<endl;
            cout<<left<<setw(45)<<"Logical OR(||) (x>y)||(x<y) value"<<right<<setw(2)<<"="<<setw(2)<<((x>y)||(x<y))<<endl;
            cout<<left<<setw(45)<<"Logical Not(!) (x=!y) value"<<right<<setw(2)<<"="<<setw(2)<<(x=!y)<<endl;
}
void assignment()
{
    cout<<"Assignment Operator:"<<endl;
            cout<<"enter value of x: "<<" ";
            cin>>x;
            cout<<"enter value of y: "<<" ";
            cin>>y;
            cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
            cout<<"x+=y : x="<<x+y<<endl;
            cout<<"x-=y : x="<<x<<endl;
            cout<<"y*=x : y="<<y*x<<endl;
            cout<<"y/=x : y="<<((float)y/x)<<endl;
            cout<<"y%=x : y="<<y%x<<endl;
}
void insExns()
{
    cout<<"Insertion/Extraction Operator:"<<endl;
            cout<<"cout<<\"This is the insertion operator:\"\n"<<"This is the extraction operator"<<endl;
            cout<<"cin>>x, This is the insertion operator which inserts the given value into x"<<endl;
}
void incDec()
{
    int x,cho=1;
            cout<<"Increment decrement Operator Demo"<<endl;
            cout<<"Enter a number x: ";
            cin>>x;
            do{
                cout<<"1. Increment x (x++)"<<endl;
                cout<<"2. Decrement x (x--)"<<endl;
                cout<<"0. Do nothing and exit"<<endl;
                cout<<"Choose your operation: ";
                cin>>cho;
                switch(cho){
                case 1:
                    x++;
                    cout<<"x++ = "<<x<<endl;
                    break;
                case 2:
                    x--;
                    cout<<"x-- = "<<x<<endl;
                    break;
                case 0:
                    1;
                    break;
                default:
                    cout<<"Please enter a valid choice!"<<endl;
                    continue;
                }
            }while(cho!=0);
}
void ternary()
{
    int x,y;
    cout<<"Ternary Operator Demo"<<endl;
    cout<<"Enter the first value(X): ";
    cin>>x;
    cout<<"Enter the second value(Y): ";
    cin>>y;
    cout<<"(x>y)?cout<<\"x is greater\"<<endl:cout<<\"y is greater\"<<endl: ";
    (x>y)?cout<<"x is greater"<<endl:cout<<"y is greater"<<endl;

    }
void scope_res()
{
    cout<<"Scope Resolution Operator Demo"<<endl;
    cout<<"Here we call functions having the same name, print(), but from different namespaces using the scope resolution operator(::)"<<endl;
    car::print();
    bike::print();
}
void bitwise()
{
    cout<<"Bitwise Operator Demo"<<endl;
    int x,y;
    cout<<"Enter the first value(X): ";
    cin>>x;
    cout<<"Enter the second value(Y): ";
    cin>>y;
    cout<<"X&Y = "<<(x&y)<<endl;
    cout<<"X|Y = "<<(x|y)<<endl;
    cout<<"X^Y = "<<(x^y)<<endl;
    cout<<"X<<2 = "<<(x<<2)<<endl;
    cout<<"Y>>2 = "<<(y>>2)<<endl;
    cout<<"~X = "<<(~x)<<endl;
    }
int main()
{
    cout<<setprecision(4);
    do
    {
        cout<<"Enter first no:";
        cin>>x;
        cout<<"Enter second no:";
        cin>>y;
        cout<<"================================="<<endl;
        cout<<"SELECT THE OPERATOR:"<<endl;
        cout<<"1.Arithmetic Operator"<<endl;
        cout<<"2.Relational Operator"<<endl;
        cout<<"3.Logical Operator"<<endl;
        cout<<"4.Assignment Operator"<<endl;
        cout<<"5.Increment Decrement Operator"<<endl;
        cout<<"6.Bitwise Operator"<<endl;
        cout<<"7.Ternary Operator"<<endl;
        cout<<"8.Scope Resolution Operator"<<endl;
        cout<<"9.Insertion and Exertion Operator"<<endl;
        cout<<"10.exit"<<endl;
        cout<<"======================================"<<endl;
        cout<<"Enter Your Choice:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            arithmetic();
            break;
        case 2:
            relational();
            break;
        case 3:
            logical();
            break;
        case 4:
            assignment();
            break;
        case 9:
            insExns();
            break;
        case 5:
            incDec();
            break;
        case 7:
            ternary();
            break;
        case 8:
            scope_res();
            break;
        case 6:
            bitwise();
            break;
        case 0:
            cout<<"Thank You"<<endl;
            break;

        }
    }while(choice!=0);

    return 0;
}
