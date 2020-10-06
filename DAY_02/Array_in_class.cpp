#include<iostream>

using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    
    public:
        void initCounter(){
            counter=0;
        }
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter ID of Item "<<counter+1<<" : ";
    cin>>itemId[counter];
    cout<<"Enter Price of Item "<<counter+1<<" : ";
    cin>>itemPrice[counter];
    counter ++;
}
void Shop :: displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The Price of Item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter total no of items : ";
    cin>>n;
    Shop Store;
    Store.initCounter();
    //Store.setPrice();
    for(int i=0;i<n;i++){
        Store.setPrice();
    }
    Store.displayPrice();


}