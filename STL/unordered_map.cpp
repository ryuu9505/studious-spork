#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    // declare, initialize
    unordered_map<string, int> um;


    // assign
    um.insert({"lee", 15});
    um.insert(make_pair("kim", 3));

    // access
    cout << um["kim"] << endl; // [key]를 통해 value에 접근
    um["kim"] = 4;
    
    // 
    um.count("kim"); // 중복을 허용하지 않으므로 return 1 or 0

    // delete
    um.erase("lee");
    um.clear();

    // find
    unordered_map<string, int>::iterator iter;
    iter = um.find("kim");
    if (iter == um.end())
        cout << "not found" << endl;
    else if (iter != um.end())
        cout << "found" << iter->first << endl;

    // 
    bool isEmpty = um.empty();
    int size = um.size();

    // loop
    for(pair<string, int> e : um)
        cout << e.first << e.second << endl;
    for(auto e : um)
        cout << e.first << e.second << endl;
