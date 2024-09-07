#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubsetA(vector<vector<int>>& ans, vector<int>& original, int idx, vector<int>& temp, bool flag) {
    if (idx == original.size()) {
        ans.push_back(temp);
        return;
    }

    int ch = original[idx];

    if (original.size() == 1) {
        if (flag) {
            temp.push_back(original[idx]);
            printSubsetA(ans, original, idx + 1, temp, true);
            temp.pop_back(); // Remove the added element to handle the case where flag is false
        }

        printSubsetA(ans, original, idx + 1, temp, true); // Part of the subset
        return;
    }

    int dh = original[idx + 1];
    if (ch == dh) { // Duplicates
        if (flag) {
            temp.push_back(original[idx]);
            printSubsetA(ans, original, idx + 1, temp, true);
            temp.pop_back(); // Remove the added element to handle the case where flag is false
        }
        printSubsetA(ans, original, idx + 1, temp, false); // Part of the subset
    }
    else {
        if (flag) { // No duplicates
            temp.push_back(original[idx]);
            printSubsetA(ans, original, idx + 1, temp, true);
            temp.pop_back(); // Remove the added element to handle the case where flag is false
        }
        printSubsetA(ans, original, idx + 1, temp, true); // Part of the subset
    }
}

int main() {
    int arr[] = { 1,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n); // Use the range constructor to initialize vector v

    vector<int> t;
    vector<vector<int>> ans;
    printSubsetA(ans, v, 0, t, true);

    for (int i = 0; i < ans.size(); i++) { // i --> row
        for (int j = 0; j < ans[i].size(); j++) { //j--> column
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
