#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

float acRent=800;
float nonacRent=600;
float familyRent=700;
int familyroomarray[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int acroomarray[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int nonacroomarray[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


class staff
{
public:
    int stfId;
    string stfName;
    string stfAdrs;
    long int stfPhone;
    float stfSly;
    staff *next;
    staff()
    {
        stfId=0;
        stfName="";
        stfSly=0;
        next=NULL;
    }

};

class customer
{
public:
    int custId;
    string custName;
    string custAdrs;
    long int custPhone;
    string gender;
    customer()
    {
        custId=0;
        custName="";
        custAdrs="";
    }
};

class rooms
{
public:
    int roomId;
    customer custo;
    string chckinDate;
    string chckoutDate;
    rooms *next;
    virtual void print()=0;
    virtual void checkout(int r)=0;
    virtual int unpaid()=0;
};

class family:public rooms
{
public:
    float advancePay;
    void print()
    {
        cout<<"Room Type:Family"<<endl;
        cout<<"Room no:"<<roomId<<endl;
        cout<<"Amount paid in advance:Rs "<<advancePay<<endl;
        cout<<"Amount yet to pay:Rs "<<familyRent-advancePay<<endl;
    }

    void checkout(int r)
    {
        //cout<<"r is "<<r<<endl;
        cout<<"Amount to be paid:"<<familyRent-advancePay<<endl;
        familyroomarray[r-301]=0;
    }
    int unpaid()
    {
        return familyRent-advancePay;
    }
};

class nonAcrooms:public rooms
{
public:
    float advancePay;
        void print()
    {
        cout<<"Room Type:NON AC room"<<endl;
        cout<<"Room no:"<<roomId<<endl;
        cout<<"Amount paid in advance:Rs "<<advancePay<<endl;
        cout<<"Amount yet to pay:Rs "<<nonacRent-advancePay<<endl;
    }

    void checkout(int r)
    {
        cout<<"Amount to be paid:"<<nonacRent-advancePay<<endl;
        nonacroomarray[r-201]=0;
    }

     int unpaid()
    {
        return nonacRent-advancePay;
    }
};

class acRooms:public rooms
{
public:
    float advancePay;
    void print()
    {
        cout<<"Room Type:AC room"<<endl;
        cout<<"Room no:"<<roomId<<endl;
        cout<<"Amount paid in advance:Rs "<<advancePay<<endl;
        cout<<"Amount yet to pay:Rs "<<acRent-advancePay<<endl;
    }

    void checkout(int r)
    {
        cout<<"Amount to be paid:"<<acRent-advancePay<<endl;
        acroomarray[r-101]=0;
    }

     int unpaid()
    {
        return acRent-advancePay;
    }
};

int findacroomNo()
{
    int w;
    for(w=0;w<20;w++)
    {
        if(acroomarray[w]==0)
        {
           acroomarray[w]=1;
           break;
        }
    }
     return w+101;
}

int countac()
{
    int w,counter=0;
    for(w=0;w<20;w++)
        if(acroomarray[w]==0)
            counter+=1;
    return counter;
}


int findnonAcroomNo()
{
    int w;
    for(w=0;w<20;w++)
    {
        if(nonacroomarray[w]==0)
        {
            nonacroomarray[w]=1;
            break;
        }
    }
    return w+201;
}

int countnonac()
{
    int w,counter=0;
    for(w=0;w<20;w++)
        if(nonacroomarray[w]==0)
            counter+=1;
    return counter;
}

int findfamilyroomNo()
{
    int w;
    for(w=0;w<20;w++)
    {
        if(familyroomarray[w]==0)
        {
            familyroomarray[w]=1;
            break;
        }
    }
    return w+301;
}

int countfamily()
{
    int w,counter=0;
    for(w=0;w<20;w++)
        if(familyroomarray[w]==0)
            counter+=1;
    return counter;
}

/*rooms *head=NULL;
rooms *tail;*/


class hotel
{
public:
    int hotelId;
    rooms *head,*tail;
    staff *shead,*stail;
    string password;
    string hotetlName;
    string hotelTheme;
    string hotelAdrs;
    hotel()
    {
        head=NULL;
        tail=NULL;
        shead=NULL;
        stail=NULL;
        password="00000";
    }


    rooms* bookRoom()
    {
    int t,e;
    customer cust;
    cout<<"Enter name"<<endl;
    cin>>cust.custName;
    cout<<"Enter ID"<<endl;
    cin>>cust.custId;
    cout<<"Enter Address"<<endl;
    cin>>cust.custAdrs;
    cout<<"Enter Phone Number"<<endl;
    cin>>cust.custPhone;
    cout<<"Enter Gender"<<endl;
    cin>>cust.gender;
    cout<<endl<<"choose your room type"<<endl;
    cout<<"Family room =Rs 700"<<endl<<"AC room =Rs 800"<<endl<<"NON AC Room =Rs 600"<<endl<<endl;
    cout<<"1.Family"<<endl<<"2.Ac Room"<<endl<<"3.NonAc Room"<<endl;
    cin>>t;
    cout<<"Enter amount given in advance"<<endl;
    cin>>e;
    cout<<endl;
    if(t==1)
    {
        family *temp=new family;
        temp->advancePay=e;
        temp->roomId=findfamilyroomNo();
        temp->custo=cust;
        head=addRoom(temp);
    }
    else if(t==2)
    {
        acRooms *temp=new acRooms;
        temp->advancePay=e;
        temp->roomId=findacroomNo();
        temp->custo=cust;
        head=addRoom(temp);
    }
    else if(t==3)
    {
        nonAcrooms *temp=new nonAcrooms;
        temp->advancePay=e;
        temp->roomId=findnonAcroomNo();
        temp->custo=cust;
        head=addRoom(temp);
    }
    return head;
    }

    rooms* addRoom(rooms *rest)
    {
    rest->next=NULL;
    if(head==NULL)
    {
        head=rest;
        tail=head;
    }
    else
    {
        tail->next=rest;
        tail=rest;
    }
    cout<<"Your Room Booking is Successful"<<endl<<endl;
    return head;
    }


    void printDetails()
    {
    rooms *prt=head;
    if(prt==NULL)
        cout<<"no rooms are booked"<<endl<<endl;
    else
    {
    while(prt!=NULL)
    {
        cout<<"customer name:"<<prt->custo.custName<<endl;
        cout<<"Customer Address:"<<prt->custo.custAdrs<<endl;
        cout<<"Customer Id:"<<prt->custo.custId<<endl;
        cout<<"Customer Phone no:"<<prt->custo.custPhone<<endl;
        cout<<"Customer Gender:"<<prt->custo.gender<<endl;
        prt->print();
        cout<<endl;
        prt=prt->next;
    }
    }
    }


    int checkoutRoom()
    {
    int flag=0,y;
    rooms *prt=head;
    rooms *pre;
    if(prt==NULL)
    {
        cout<<"no rooms are booked "<<endl<<endl;
        return 3;
    }
    else
    {
    cout<<"enter customer Id"<<endl;
    cin>>y;
    while(prt!=NULL)
    {
        if(prt->custo.custId==y)
        {
            //cout<<"customer found"<<endl;
            flag=1;
            if(prt==head)
            {
                head=prt->next;
            }
            else
               pre->next=prt->next;
            prt->checkout(prt->roomId);
            delete prt;
        }
        pre=prt;
        prt=prt->next;
    }
    }
    return flag;
    }

    void check()
    {
        int f,n,a;
        f=countfamily();
        n=countnonac();
        a=countac();
        if(f==0)
            cout<<"no family room available"<<endl;
        else
            cout<<"Family rooms:"<<f<<endl;
        if(a==0)
            cout<<"no ac room available"<<endl;
        else
            cout<<"Ac rooms:"<<a<<endl;;
        if(f==0)
            cout<<"no Non-Ac room available"<<endl;
        else
            cout<<"Non Ac rooms:"<<n<<endl<<endl;
    }


    void changePassword()
    {
        string str,str1;
        cout<<"Enter previous password"<<endl;
        cin>>str;
        if(str==password)
        {
            cout<<"Enter new password"<<endl;
            cin>>str1;
            cout<<"Renter new password"<<endl;
            cin>>str;
            if(str==str1)
            {
                password=str;
                cout<<"Password restored"<<endl<<endl;
            }
            else
                cout<<"password restore failed"<<endl<<endl;
        }
        else
        {
            cout<<"Password restore failed"<<endl<<endl;
        }
    }

    int sing_customer()
    {
    int flag=0,y;
    rooms *prt=head;
    rooms *pre;
    if(prt==NULL)
    {
        cout<<"no customers are there in hotel"<<endl<<endl;
        return 3;
    }
    else
    {
    cout<<"enter customer Id"<<endl;
    cin>>y;
    while(prt!=NULL)
    {
        if(prt->custo.custId==y)
        {
            flag=1;
            cout<<"customer name:"<<prt->custo.custName<<endl;
            cout<<"Customer Address:"<<prt->custo.custAdrs<<endl;
            cout<<"Customer Id:"<<prt->custo.custId<<endl;
            cout<<"Customer Phone no:"<<prt->custo.custPhone<<endl;
            cout<<"Customer Gender:"<<prt->custo.gender<<endl;
            prt->print();
            cout<<endl<<endl;
        }
        pre=prt;
        prt=prt->next;
    }
    }
    return flag;
    }


    void countbill()
    {
    int sum=0,y;
    rooms *prt=head;
    while(prt!=NULL)
    {
        sum+=prt->unpaid();
        prt=prt->next;
    }
    cout<<"Unpaid bill is:"<<sum<<endl<<endl;
    return ;
    }

    void addStaff()
    {
        staff *temp=new staff;
        cout<<"Enter Name"<<endl;
        cin>>temp->stfName;
        cout<<"Enter id"<<endl;
        cin>>temp->stfId;
        cout<<"Ente Address"<<endl;
        cin>>temp->stfAdrs;
        cout<<"Enter Salary"<<endl;
        cin>>temp->stfSly;
        if(shead==NULL)
        {
            shead=temp;
            stail=temp;
        }
        else{
            stail->next=temp;
            stail=temp;
        }
    }

    void removeStaff()
    {
        int n,flag=0;
        staff *temp,*pre;
        temp=shead;
        if(temp==NULL)
            cout<<"No staffs are there"<<endl<<endl;
        else
        {
            cout<<"enter staff id"<<endl;
            cin>>n;
            if(temp->stfId==n)
            {
                flag=1;
                 shead=temp->next;
            }
            else
            {
                pre=shead;
            while(temp!=NULL)
            {
               // cout<<"staff id:"<<temp->stfId;
                if(temp->stfId==n)
                {
                    flag=1;
                    pre->next=temp->next;
                    break;
                }
                pre=temp;
                temp=temp->next;

            }
            }
        if(flag==1)
            cout<<"Staff removed"<<endl<<endl;
        else
            cout<<"staff not found"<<endl<<endl;
        }

        return ;
    }

    void displayStaff()
    {
        staff *temp;
        temp=shead;
        if(temp==NULL)
            cout<<"There are No staff"<<endl<<endl;
        else
        {
        while(temp!=NULL)
        {
            cout<<"Staff Name:"<<temp->stfName<<endl;
            cout<<"Staff Id:"<<temp->stfId<<endl;
            cout<<"Staff Salary"<<temp->stfSly<<endl<<endl;
            temp=temp->next;
        }
        }
    }
};

hotel h;


int main(void)
{
    int x,flag=0;
    string pass;
    for(;;)
    {
        cout<<"choose ur option"<<endl;
        cout<<"1.Book Room"<<endl;
        cout<<"2.Checkout Room"<<endl;
        cout<<"3.More option"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>x;
        if(x>0 && x<5)
        {
        switch(x)
        {
            case 1:h.head=h.bookRoom();
                   break;
            case 2:flag=h.checkoutRoom();
                   if(flag==1)
                   {
                    flag=0;
                    cout<<"Customer checked out"<<endl<<endl;
                   }
                   else if(flag==0)
                    cout<<"Customer with entered id does not exist"<<endl<<endl;
                   break;
            case 3:cout<<"enter password"<<endl;
                    cin>>pass;
                    if(pass==h.password)
                    {
                        while(x!=9)
                        {
                        cout<<"choose ur options"<<endl;
                        cout<<"1.Check room availability"<<endl;
                        cout<<"2.View All Customers"<<endl;
                        cout<<"3.View Single Customer"<<endl;
                        cout<<"4.View Unpaid Bill"<<endl;
                        cout<<"5.Add staff"<<endl;
                        cout<<"6.Remove Staff"<<endl;
                        cout<<"7.Display Staff"<<endl;
                        cout<<"8.Change Password"<<endl;
                        cout<<"9.Return to main menu"<<endl;
                        cin>>x;
                        if(x>0 && x<10)
                        {
                        switch(x)
                        {
                            case 1:h.check();
                                   break;
                            case 2:h.printDetails();
                                   break;
                            case 3:flag=h.sing_customer();
                                    if(flag==0)
                                        cout<<"No such customer found"<<endl;
                                    flag=0;
                                   break;
                            case 4:h.countbill();
                                   break;
                            case 5:h.addStaff();
                                   break;
                            case 6:h.removeStaff();
                                   break;
                            case 8:h.changePassword();
                                   break;
                            case 7:h.displayStaff();
                                   break;
                            case 9:break;
                        }
                        }
                        else
                            cout<<"Choose ur option carefully"<<endl<<endl;
                        }
                    }
                    else{
                        cout<<"----------UNAUTHORISED ACCESS----------"<<endl<<endl;
                    }
                   break;
            case 4:return 0;
        }
        }
        else
            cout<<"choose your option carefully"<<endl<<endl;
    }
}
