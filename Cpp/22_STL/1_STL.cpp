#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50};
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.pop_back();

    cout<<"By using the for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;
    
    cout<<"By using the iterator"<<endl;
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<endl;
    }

    return 0;

}


// // LIST
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> v={10,20,30,40};
//     v.push_back(50);
//     v.push_back(60);
//     v.push_back(70);
//     v.pop_back();

//     cout<<"Using for each loop"<<endl;
//     for(int x:v)
//         cout<<x<<endl;

//     cout<<"Using Iterator"<<endl;
//     list<int>::iterator itr;
//     for(itr=v.begin();itr!=v.end();itr++)
//     {
//         cout<<*itr<<endl;
//     }
//     return 0;
// }


// //VECTOR
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={10,20,30,40};
//     v.push_back(50);
//     v.push_back(60);
//     v.push_back(70);
//     v.pop_back();

//     cout<<"Using for each loop"<<endl;
//     for(int x:v)
//         cout<<x<<endl;

//     cout<<"Using Iterator"<<endl;
//     vector<int>::iterator itr;
//     for(itr=v.begin();itr!=v.end();itr++)
//     {
//         cout<<*itr<<endl;
//     }
//     return 0;
// }

// //FORWARD_LIST
// #include<iostream>
// #include<forward_list>
// using namespace std;
// int main(){
//     forward_list<int> v={10,20,30,40};
//     v.push_front(50);
//     v.push_front(60);
//     v.push_front(70);
//     v.pop_front();

//     cout<<"Using for each loop"<<endl;
//     for(int x:v)
//         cout<<x<<endl;

//     cout<<"Using Iterator"<<endl;
//     forward_list<int>::iterator itr;
//     for(itr=v.begin();itr!=v.end();itr++)
//     {
//         cout<<*itr<<endl;
//     }
//     return 0;
// }

// //SET
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     //Avoid Duplicate
//     set<int> v={10,20,30,40};
//     v.insert(50);
//     v.insert(60);
//     v.insert(60);
//     v.insert(70);

//     cout<<"Using for each loop"<<endl;
//     for(int x:v)
//         cout<<x<<endl;

//     cout<<"Using Iterator"<<endl;
//     set<int>::iterator itr;
//     for(itr=v.begin();itr!=v.end();itr++)
//     {
//         cout<<*itr<<endl;
//     }
//     return 0;
// }