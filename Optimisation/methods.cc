#include <iostream>
#include "methods.h"
using namespace std;

void backtrack(vector<vector<int>> &res, vector<int> &nums, vector<int> &permutation, vector<bool> &used)
{
    if (permutation.size() == nums.size())
    {
        res.push_back(permutation);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {

        if (!used[i])
        {
            // make a new choice
            permutation.push_back(nums[i]);
            used[i] = true;
            backtrack(res, nums, permutation, used);

            // undo the choice
            used[i] = false;
            permutation.pop_back();
        }
    }
}
void permutBacktrack()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = {};
    vector<int> permutation = {};
    vector<bool> used(nums.size());
    backtrack(res, nums, permutation, used);

    for (auto &vec : res)
    {
        cout << "{ ";
        for (int num : vec)
            cout << num << " ";
        cout << "}\n";
    }
}

void travelingSalesmanProblem()
{

    cout << "Travelling Salesman Problem\n";
}