#include<iostream>
#include<list>
using namespace std;
void display(list<int> l)
{
    list<int> :: iterator it;
    it=l.begin();
    while(it!=l.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
}
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(4);
    l.push_back(64);
    l.push_back(112);
    l.push_back(12);
    l.push_back(55);
    list<int>l2(4);
    list<int> :: iterator it;
    it=l2.begin();
    *it=21;
    it++;
    *it=33;
    display(l);
    l2.push_back(12);
    display(l2);

}