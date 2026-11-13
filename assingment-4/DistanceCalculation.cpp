#include <iostream>
using namespace std;

class Distance{
    private:

    int feet;
    int  inches;

    public:
    void getdetails(){
        cout<<"Emter the feet : ";
        cin>>feet;
        cout<<"Enter the inches : ";
        cin>>inches;
    }

    void add(){
        int module=inches%12;
        int footconvertion=(inches-module)/12;
        float res=(feet+footconvertion)+(module/10.0f);
        cout<<"The total in foots  is : " <<res;
    }
};


int main(){
    Distance dis;
    dis.getdetails();
    dis.add();
    return 0;
}