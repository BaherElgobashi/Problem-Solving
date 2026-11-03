
#include<bits/stdc++.h>

#include <algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <iomanip>
#include<map>
#include<queue>
#include<stack>
#include<deque>

#define ll long long
#define all(v) v.begin() , v.end()

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool fund(int &a , int &b) {
    return a < b;
}

void SolveUsingTwoPoiner() {
    int n = 0 , x = 0;
    cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {cin>>v[i];}
    sort(v.begin(), v.end());
    int l = 0 , r = n-1;
    while (l < r) {
        int sum = v[l]+v[r];
        if (sum < x) {
            l++;
        }
        else if (sum > x) {
            r--;
        }
        else {
            cout<<"yes"<<'\n';
            cout<<v[l]<<' '<<v[r]<<'\n';
            return;
        }

    }
    cout<<"no"<<'\n';
}

void SolvePreffixSum() {
    int n = 0 , q = 0 ; cin>>n>>q;
    vector<int> preffix(n);
    int a[n];
    preffix[0]=a[0];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        preffix[i] = preffix[i-1]+a[i];

    }

    while (q--) {
        int l = 0 , r = 0 ;
        cin>>l>>r;
        cout<<preffix[r] - preffix[l-1]<<'\n';

    }

}

void ReverseString() {
    string s; cin>>s;
    int left =0, right = s.size()-1;
    bool isPalindrome = true;
    while (left < right) {
        if (tolower(s[left]) != tolower(s[right])) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    isPalindrome ? cout<<"yes"<<'\n' : cout<<"no"<<'\n';
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacci() {
    long long int  num, first = 0, second = 1, next = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << first <<' ';
        next = first + second;
        first = second;
        second = next;
    }
}

bool hasAdjacent(vector<int>&v , int target) {
    int start = 0;
    int currentsum = 0;
    for (int end = 0 ; end < v.size() ; end++) {
        currentsum +=v[end];
        while (currentsum > target && start <= end) {
            currentsum -= v[start];
            start++;
        }
        if (currentsum == target) {
            return true;
        }
    }
    return false;
}



int main() {

    fast();
    string s = ""; cin>>s;
    bool x = true;
    for (int i = 0 ; i < s.size(); i++) {
        if (s[i] != s[s.size()-1-i]) {
            x = false;
        }
    }
    if (x) {
        cout<<"YES"<<'\n';
    }
    else {
        cout<<"NO"<<'\n';
    }


    return 0;
}
