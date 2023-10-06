#include<bits/stdc++.h>
using namespace std;
class bank{
    public:
    char name[30];
    long account_number;
    long balance;
        void open_acc()
        {
            cout<<"enter the customer name:\n";
            cin>>name;
            cout<<"enter the account number:\n";
            cin>>account_number;
            cout<<"enter the balance:\n";
            cin>>balance;
        }
        void display_details()
        {
            cout<<"name of customer is:\n"<<name;
            cout<<"\naccount number is:\n"<<account_number;
            cout<<"\nbalance is:\n"<<balance;
        }
    virtual void interest_rate()=0;
};
class citibank:public bank
{
    public:
    long interest;
    void interest_rate()
    {
        interest=0.05*balance;
        cout<<"\nbalance at citibank is:\n"<<interest;
    }
};
class sbi:public bank
{
    public:
    long interest;
    void interest_rate()
    {
        interest=0.03*balance;
        cout<<"\nbalance at sbi is:\n"<<interest;
    }
};
class canara:public bank
{
    public:
    long interest;
    void interest_rate()
    {
        interest=0.08*balance;
        cout<<"\nbalance at canara bank is:\n"<<interest;
        cout<<"\n";
    }
};
int main()
{
    citibank b1;
    b1.open_acc();
    b1.display_details();
    b1.interest_rate();
    sbi b2;
    b2.open_acc();
    b2.display_details();
    b2.interest_rate();
    canara b3;
    b3.open_acc();
    b3.display_details();
    b3.interest_rate();
}
