#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_v(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;
}

// vector 안의 특정 값의 위치 찾기
// <algorithm> find( )
void find_vector(vector<int> v, int n)
{
    v = { 6, 4, 1, 2, 4 };
    vector<int>::iterator iter = find(v.begin(), v.end(), 4);
    while (iter != v.end())
    {    
        cout << "at index " << iter - v.begin() << endl;
        iter = find(iter + 1, v.end(), 4);
    } 
}

int main()
{
    ////////////////////////////////////////
    // initialization
    ////////////////////////////////////////

    vector<int> v;
    print_v(v);

    vector<int> v_direct = { 1, 2, 3, 4, 5, 6 };
    print_v(v_direct);

    vector<int> v_zeros(5);
    print_v(v_zeros);

    vector<int> v_arr[] = { {1, 2}, {1, 2, 3}, {1, 2, 3, 4} };
    print_v(v_arr[0]);
    print_v(v_arr[1]);
    print_v(v_arr[2]);

    vector<vector<int>> v_double = { {6, 7}, {6, 7, 8}, {6, 7, 8, 9} };
    print_v(v_double[0]);
    print_v(v_double[1]);
    print_v(v_double[2]);

    ////////////////////////////////////////
    // assignment
    ////////////////////////////////////////

    v.assign(3, 7);
    print_v(v);




}

/*
https://blockdmask.tistory.com/70

*/