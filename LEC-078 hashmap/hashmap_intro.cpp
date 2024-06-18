#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<string, int> m;
    
    //insert the element
    pair<string, int> p1 = make_pair("pundrik", 1);
    m.insert(p1);

    pair<string, int> p2("Vidushi", 2);
    m.insert(p2);

    m["Pradhyumn"] = 3;

    // Searching
    cout << m.at("Pradhyumn") << endl;
    cout << m["Pundrik"] << endl;

    // to check present or not
    cout << m.count("Devant") << endl;
    cout << m.count("Vidushi") << endl;

    // size
    cout << m.size() << endl;

    //erase
    cout << m.erase("Vidushi") << endl;
    cout << m.size() << endl;

    // for loop
    for(auto i:m){
        cout << m.first << " " << m.second << endl;
    }

    unordered_map<string, int>::iterator it = m.begin();
    while(it!=m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
}