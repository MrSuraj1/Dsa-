class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        vector<pair<int, int>> pa;
        unordered_map<int, int> freq;
        for (auto i : nums)
        {
            freq[i]++;
        }

        for (auto i : freq)
        {
            pa.push_back({i.first, i.second});
        }
        sort(pa.begin(), pa.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return a.second > b.second; });

        for (int i = 0; i < k; i++)
        {
            ans.push_back(pa[i].first);
        }

        return ans;

        return ans;
    }
};