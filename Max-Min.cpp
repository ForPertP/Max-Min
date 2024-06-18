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
