#include<iostream>
#include<bits/stdc++.h>

int main(){
  array<int,4> a= {1,2,3,4};
pair<int,string> pair1;
pair1 = make_pair(1,"Harsh");
cout<<pair1.first;
tuple<int,string,string> tuple1;
tuple1 = make_tuple(1,"Harsh","Maheshwari");
list<int>l1;
list<string>l2 = {"Delhi", "Mumbai", "etc.."}
cout<<l2;
list<string> :: iterator p = l2.begin();
while(p!=l2.end())
{ cout<<*p<<" ";
p++;
}
l2.remove("Delhi");
map<int,string> m1;
cout<<m1.at(0);

}
