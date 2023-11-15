#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include<vector>
#include <algorithm>
using namespace std;


int main()
{
     const int numels=4;//flexibility
     int n[]={136,122,109,146};
     int i;//loop counter variable
     //create the vector
     vector<int> partnums(n,n+numels);
     cout<<"The vector initially has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }

     cout<<endl;
     cout<<"----------"<<endl;
     //modify the element at position 4 index = 3 in the vector

     partnums[3]=144;
     cout<<"After modifying element 4 in the vector now it has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }
     cout<<endl;
     cout<<"----------"<<endl;
     //insert an element into the vector at position 2 (index=1)
     partnums.insert(partnums.begin() + 1, 142);
     cout<<"After inserting an element at index 2, the vector now it has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }
     cout<<endl;
     cout<<"----------"<<endl;
     // add a new element at the end of the vector
     partnums.push_back(157);
     cout<<"After adding an element at the end of the vector it now has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }
     cout<<endl;
     cout<<"----------"<<endl;

     //sort the vector from smallest to largest
     sort(partnums.begin(),partnums.end());
     cout<<"The vector initially has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }

     cout<<endl;
     cout<<"----------"<<endl;

     //find the max value inside the vector
     int max = *max_element(partnums.begin(), partnums.end());
     cout<<"Max value: "<<max<<endl;
     cout<<endl;
     cout<<"----------"<<endl;

     //sort in reverse order
     sort(partnums.begin(),partnums.end(), greater<int>());
     cout<<"The vector initially has a size of "<< int(partnums.size())<<" and contains the elements: "<<endl;
     for(int i=0;i<int(partnums.size());i++)
     {
          cout<<partnums[i]<<" ";
     }
     cout<<endl;
     cout<<"----------"<<endl;


return 0;
}