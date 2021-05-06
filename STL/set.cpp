#include <set>

using namespace std;

int main()
{
    /* set */
    /* 삽입과 동시에 정렬되는 컨테이너 */
    /* key 값의 중복이 허용되지 않음 */

    set<int> s, s2; // asc (default)
    set<int, greater<int>> s_desc; // desc
    set<pair<int, int>> s_pair;

    set<int> s_copy(s);
    set<int> s_part(s.begin(), s.end());

    set<int>::iterator iter, iter_s, iter_e;
    iter = s.begin(); // point first element  
    iter = s.end(); // point next to last element

    int k = 0;
    pair<set<int>::iterator, bool> pair; // iterator, 성공 여부
    pair = s.insert(k);

    // find
    iter = s.find(k); // k 를 가리키는 iterator 반환 (없으면 s.end())
    
    // delete
    s.erase(iter); // 원소 삭제
    s.erase(iter_s, iter_e); // [iter_s, iter_e) 원소 삭제
    s.clear(); // 모든 원소 삭제

    s.swap(s2);
    int size = s.size();
    bool is_empty = s.empty();
    s.upper_bound(k);
    s.lower_bound(k);


    /* multiset */
    /* key 값의 중복이 허용되는 set */

    multiset<int> mts;
    multiset<int, greater<int>> mts_desc;
    multiset<int> mts_copy(mts);
    multiset<int> mts_part(mts.begin(), mts.end());



}

/*
https://velog.io/@choiiis/C-STL-set-multiset-%ED%81%B4%EB%9E%98%EC%8A%A4-%EC%A0%95%EB%A6%AC
*/