#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound : " << lower_bound(v.begin(), v.end(), 6) - v.begin();
    cout << "upper bound : " << upper_bound(v.begin(), v.end(), 4) - v.begin();

    int a = 4;
    int b = 3;
    cout << "Max of 3 and 4 : " << max(a, b) << endl;
    cout << "Min of 3 and 4 : " << min(a, b) << endl;

    swap(a, b);
    cout << "Value of a and b after swap : " << a << "," << b << endl;

    string s = "abcd";
    cout << "String before reversing: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "String after reverse: " << s << endl;

    // Sorting vector
    sort(v.begin(), v.end());

    return 0;
}