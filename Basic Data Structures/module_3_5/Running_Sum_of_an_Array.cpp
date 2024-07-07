#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector <int> v, int n) {
    vector <int> runningSum(n);

    runningSum[0] = v[0];
    for(int i = 1; i < n; i++) runningSum[i] = v[i] + runningSum[i-1];

    return runningSum;
}

int main()
{
    int nums;
    cin >> nums;

    vector <int> v(nums);
    for(int i = 0; i < nums; i++) cin >> v[i];

    vector <int> v2 = solve(v, nums);

    for(int val : v2) cout << val << " ";
    cout << endl;

    return 0;
}