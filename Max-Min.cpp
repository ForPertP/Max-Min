#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) 
{
    std::sort(arr.begin(), arr.end());
    int n = arr.size();
    int minUnfairness = INT_MAX;
    
    for (int i = 0; i <= n-k; ++i)
    {
        if ((arr[i+k-1]-arr[i]) < minUnfairness)
        {
            minUnfairness = arr[i+k-1] - arr[i];
        }
    }
    
    return minUnfairness;
}
