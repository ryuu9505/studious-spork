#include <iostream>
#include <string>
#include <map>
using namespace std;

// access
void print_m(map<string, int> m)
{
	for (auto iter : m) // foreach
    {
		cout << iter.first << iter.second << endl;
	}
	cout << endl;

	/*for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << iter->second << endl;
	}
	cout << endl;*/

	/*for (pair<string, int> iter : m)
	{
		cout << iter.first << iter.second << endl;
	}
	cout << endl;*/
}

// find
void find_map(map<string, int> m, string str)
{
	map<string, int>::iterator iter = m.find(str);

	if (iter != m.end())
	{
		cout << iter->first << iter->second << endl;
	}
	else
	{
		cout << "NOT FOUND" << endl;
	}

}

int main()
{
    // declare, initialize
	std::map<string, int> m;
	


	// assign
	m.insert({ "kim", 15 });
	m.insert({ "kim", 81 }); // key가 중복이므로 무시됨
	m.insert({ "lee", 22 });
	m.insert({ "park", 8 });
	m.insert(pair<string, int>( "choi", 75 ));
	m.insert(make_pair( "jung", 41 ));

    // access
	m["lee"] = 52;

	// delete
	m.erase(++m.begin());
	m.erase("park");
	m.erase(m.find("park"));
	m.erase(m.begin(), m.end());
	m.clear();

	// reference (find)
    map<string, int>::iterator iter = m.find("kim");
    cout << m.find("kim")->second << endl;
    cout << m["kim"] << endl;
    find_map(m, "kim");

    //
    cout << m.size() << endl;
    cout << m.empty() << endl;

}

/* 
https://life-with-coding.tistory.com/305
https://kamang-it.tistory.com/entry/mapunorderedmapC%EC%97%90%EC%84%9C-map%EB%94%95%EC%85%94%EB%84%88%EB%A6%ACdictionary-%EC%97%B0%EA%B4%80%EB%B0%B0%EC%97%B4associate-array%ED%95%B4%EC%8B%9C%EB%A7%B5hash-map%EC%82%AC%EC%9A%A9%ED%95%98%EA%B8%B0map%EA%B3%BC-unorderedmap-%EA%B7%B8%EB%A6%AC%EA%B3%A0-%EC%B0%A8%EC%9D%B4%EC%A0%90
*/