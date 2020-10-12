#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

/*
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout<<*temp_ptr<<endl;

    temp_ptr = &low_temp;

    cout<<*temp_ptr<<endl;
    cout<<&low_temp<<endl;

    string name{"Shan"};
    string *string_ptr{&name};

    cout<<*string_ptr<<endl;

    name="Shantanu";

    cout<<*string_ptr<<endl;

    vector<string> stoges{"Shan","Raj","Rahul"};
    vector<string>*vector_ptr{nullptr};

    vector_ptr=&stoges;

    cout<<"first : "<<(*vector_ptr).at(0)<<endl;

    cout<<"stoges : ";
    for(auto stoge:*vector_ptr)
        cout<<stoge<<endl;
    cout<<endl;

    int *intptr=0;
    intptr=new int;
    cout<<intptr<<endl;
    cout<<*intptr<<endl;
    delete intptr;

    *intptr=100;

    cout<<*intptr<<endl;
    delete intptr;

    size_t size=0;
    double *tempptr=0;

    cout<<"how many temps : ";
    cin>>size;

    //while(true)
        tempptr=new double[size];

    cout<<tempptr<<endl;
    delete []tempptr;

    //relation between array and pointerr

    int score[]{100,98,93};

    cout<<score<<endl;
    cout<<*score<<endl;

    int *scptr{score};

    //Array subscript notation
    cout<<score[1]<<endl;
    //Array offset notation
    cout<<(score+1)<<endl;
    //Pointer subscript notation
    cout<<*(scptr+1)<<endl;
    cout<<scptr[2]<<endl;
    cout<<*scptr<<endl;

    // pointer offset notation
    cout<<scptr+1<<endl;
    cout<<scptr<<endl;


//Comparing data pointers point to
    string s1{"Shan"};
    string s2{"Shan"};

    string *p1=&s1;
    string *p2=&s2;
    string *p3=&s1;

    cout<<(p1==p2)<<endl;
    cout<<(p1==p3)<<endl;

    cout<<(*p1==*p2)<<endl;
    cout<<(*p1==*p3)<<endl;

*/
    int score[]{100,98,89,99,-1};
    int *scptr=score;

    while(*scptr!=-1){
        cout<<*scptr<<endl;
        scptr+=1;
    }
    cout<<endl;
    scptr=score;
    while(*scptr!=-1){
        cout<<*scptr++<<endl;
    }
    cout<<endl;

    char name[]{"Shan"};

    char *ptr1=0;
    char *ptr2=0;

    ptr1=&name[0];
    ptr2=&name[3];

    cout<<"In string "<<name<<" "<<*ptr2<<" is "<<(ptr2-ptr1)<<" char away from "<<*ptr1<<endl;
    cout<<*ptr1<<" "<<*ptr2<<endl;
    return 0;

}
