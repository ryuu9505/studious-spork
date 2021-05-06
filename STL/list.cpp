#include <iostream>
#include <list>

using namespace std;

// access
void print_li(list<int> li)
{
    for(list<int>::iterator iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << " " << endl;
    }
    cout << endl;
}

bool isOver10(int x)
{
    return x > 10;
}

bool isOver10AndBelow20(int x)
{
    return x > 10 && x < 20;
}

bool desc(int a, int b) // 맞는지 확인
{
    return a > b;
}

int main()
{
    list<int> li;
    list<int> li_zeros(5); // 0 0 0 0 0
    list<int> li_ones(5, 1); // 1 1 1 1 1
    list<int> li_copy(li);
    li.assign(3, 1); // 1 1 1

    // return element
    li.front();
    li.back();
    int i = li.front();

    // return iterator
    li.begin(); 
    li.end();
    li.rbegin();
    li.rend();
    list<int>::iterator iter = li.end();

    // other member functions
    li.push_front(2);
    li.push_back(i);
    li.pop_front();
    li.pop_back();
    iter = li.insert(iter, i);
    iter = li.erase(iter);
    i = li.size();
    li.remove(i); // 인자와 같은 원소를 모두 제거
    li.remove_if(isOver10/*단항 조건자*/); // 인자(단항 조건자)에 해당하는 원소를 모두 제거
    li.reverse(); // 순서를 뒤집음
    li.sort(/*이항 조건자*/); // 모든 원소를 정렬 (default: asc)
    
    list<int> li_2;
    list<int>::iterator iter_p, iter_s, iter_e;
    li.swap(li_2);
    li.splice(iter, li_2); // li의 iter에 li_2를 전부 잘라서 붙여넣음 (li_2는 null이 됨)
    li.splice(iter, li_2, iter_p); // li의 iter에 li_2의 iter_p를 잘라서 붙여넣음
    li.splice(iter, li_2, iter_s, iter_e); // li의 iter에 li_2의 [iter_s, iter_e)을 잘라서 붙여넣음
    li.unique(); // 연달아 나오는(2 연속 이상) 원소를 하나만 남기고 삭제
    li.merge(li_2, desc/*이항 조건자*/); // li에 li와 li_2를 합병 정렬 (default: asc)
}

