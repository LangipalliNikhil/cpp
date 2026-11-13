#include <iostream>
using namespace std;

class LibraryBookManagement{
    public:
        int BookId;
        string Title;
        string Author;
        float Price;
        int numofcopies;

   public:
        void displayallbooks();
      //  void sreachforbookusingId();
        double tvbl();//total value of books in library
        void acceptvalues();

};

void LibraryBookManagement::acceptvalues(){
    cout<<"enter the details of books"<<endl;
    cout<<"enter the book id : ";
    cin>>BookId;
    cout<<"enter the title : ";
    cin>>Title;
    cout<<"enter the author name : ";
    cin>>Author;
    cout<<"enter the price of the book : ";
    cin>>Price;
    cout<<"enter the number of  avaliable copies ";
    cin>>numofcopies;


}
void LibraryBookManagement::displayallbooks(){
    cout<<"the book id is: "<<BookId<<endl;
    cout<<"the title of book is: "<<Title<<endl;
    cout<<"the author name is: "<<Author<<endl;
    cout<<"the price of book  is: "<<Price<<endl;
    cout<<"the number of avaliable copies are: "<<numofcopies<<endl
    ;

}

 double LibraryBookManagement::tvbl(){
    return Price*numofcopies;
 }


int main(){
    LibraryBookManagement LBM[3];
    for(int i=0;i<3;i++){
        LBM[i].acceptvalues();
    }
    for(int i=0;i<3;i++){
        LBM[i].displayallbooks();
    }
    int search;
    cout<<"enter the book id to search";
    cin>>search;
    for(int i=0;i<3;i++){
        if(LBM[i].BookId==search){
            LBM[i].displayallbooks();
            break;
        }
    }
    double total=0;
    for(int i=0;i<3;i++){
        total+=LBM[i].tvbl();
    }
    cout<<"the total value of book is "<<total<<endl;
    return 0;
}