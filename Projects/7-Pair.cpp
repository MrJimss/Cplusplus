#include <iostream>
#include <istream>
using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

template<class T, class V>
class Pair
{
private:
     T first;
     V second;
public:
     Pair():first(0),second(0){};
     Pair(T firstvalue, V secondValue);
     void setFirst(T newValue);
     void setSecond(V newValue);
     T getFirst() const;
     V getSecond() const;
};
template<class T, class V>
Pair<T,V>::Pair(T firstvalue, V secondvalue)
{
     first=firstvalue;
     second=secondvalue;
}
template<class T, class V>
void Pair<T,V>::setFirst(T newValue)
{
     first=newValue;
}
template<class T, class V>
void Pair<T,V>::setSecond(V newValue)
{
     second=newValue;
}
template<class T, class V>
T Pair<T,V>::getFirst() const
{
     return first;
}
template<class T, class V>
V Pair<T,V>::getSecond() const
{
     return second;
}

int main()
{
     int x1,x2;
     char a,b;
     cout<<"Please type 2 pair of any characters in the form (n,c)where 'n' is a number and 'c' is a character"<<endl;
     Pair <int,char> p1, p2;
     cout<<"1:"; 
     cin>>x1;
     cin>>a;
     p1.setFirst(x1);
     p1.setSecond(a);
     cout<<"2:"; 
     cin>>x2;
     cin>>b;
     p2.setFirst(x2);
     p2.setSecond(b);
     cout<<endl;
     cout<<p1.getFirst()<<" and "<< p1.getSecond()<<endl;
     cout<<p2.getFirst()<<" and "<< p2.getSecond()<<endl;

     cout<<"Thank you!"<<endl;




return 0;
}