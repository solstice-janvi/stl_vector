#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;


void display(vector<int> &v){
    cout<<"display this vector"<<endl;
     for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
    //ways to create a vector

    vector<int> vec1;// zero length integer vector
    

    int element,size;
    cout<<"enter the size of our vector"<<endl;
    cin>>size;
    for (int i =0;i< size;i++)
    {
        cout<<"enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    vec1.pop_back();
   display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    // vec1.insert(iter+1,5, 566);
    // vec1.insert(iter+1,5, 566);


    display(vec1);
     return 0;
}