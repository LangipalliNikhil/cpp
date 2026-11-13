#include <iostream>
using namespace std;

class MovieTicket{
public:
    string moviename;
    float ticketprice;
    int avlaibleseats;
    int bookedseats=0;
public:
    void getdetails();
    void BookTickets();//Prevent booking more tickets than the available seats.
    void canclebooking();
    void displayavaliableseats();
};

void MovieTicket::getdetails(){
    cout<<"enter the movie name : ";
    cin>> moviename;
    cout<<"enter the ticket price : ";
    cin>>ticketprice;
    cout<<"enter the total number of avaliable seats : ";
    cin>>avlaibleseats;

}
void MovieTicket::BookTickets(){
    cout<<"the number of tickest you want book : "<<endl;
    cin>>bookedseats;
    if(bookedseats>avlaibleseats){
         cout<<"booking cant be done avaliable seats are less : "<<endl;
    }else{
       cout<<"the number of booked seats are : "<<bookedseats<<endl;
        avlaibleseats-=bookedseats;
        // cout<<"the remaining avaliable seats are"<<avlaibleseats;
    }
}

void MovieTicket::canclebooking(){
    int cancle=0;
    cout<<"enter the count of tickest want to cancle :  ";
    cin>>cancle;
    cancle=bookedseats-  cancle ;
    //updating avaliable seats adding cancled seats to booked seats
    avlaibleseats=avlaibleseats+cancle;

}
void MovieTicket::displayavaliableseats(){
    
    cout<<"the avaliable seat for the movie is : ";
    
    cout<<avlaibleseats;

}

int main(){

    MovieTicket mt;
    mt.getdetails();
    mt.BookTickets();
    mt.canclebooking();
    mt.displayavaliableseats();

    return 0;
}