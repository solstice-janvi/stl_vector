#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

template <class t>
void display(vector<t> &v){
    cout<<"display this vector"<<endl;
     for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    //ways to create a vector

    vector<int> vec1;// zero length integer vector
    vector<char> vec2(4); // 4 element character vector
    vec2.push_back('5');
    // display(vec2);

    vector<char> vec3(vec2); // 4 element character vector from vec2
    // display(vec3);

    vector<int> vec4(4, 13); //4 element of vector 13s
    display(vec4);
    cout<<vec4.size();
    

    int element,size= 5;
     return 0;
}