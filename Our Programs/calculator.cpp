# include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Value of A = ";
    cin>>a;
    cout<<"Enter the Value of B = ";
    cin>>b;
    cout<<"Press 1 for Addition\n";
    cout<<"Press 2 for Subtraction\n";
    cout<<"Press 3 for Multiplication\n";
    cout<<"Press 4 for Division\n";
    int number;
    cout<<"Enter Your Operation Number = ";
    cin>>number;
    switch(number)
    {
        case 1:
            c=a=b;
            cout<<"Answer = "<<c;
            break;
            case 2:
            c=a-b;
            cout<<"Answer = "<<c;
            break;
            case 3:
            c=a*b;
            cout<<"Answer = "<<c;
            break;
            case 4:
            c=a/b;
            cout<<"Answer = "<<c;
            break;
        default:
            cout<<"Invalid Input";
    }
    return 0;
}