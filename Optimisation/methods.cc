#include <iostream>
#include <limits>
#include "methods.h"
using namespace std;

// ====================== Algorithms ======================
void backtrack(vector<vector<char>> &res, vector<char> &nums, vector<char> &permutation, vector<bool> &used)
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
    vector<char> nums = {'a', 'b', 'c'};
    vector<vector<char>> res = {};
    vector<char> permutation = {};
    vector<bool> used(nums.size());
    backtrack(res, nums, permutation, used);

    for (auto &vec : res)
    {
        cout << "{ ";
        for (char num : vec)
            cout << num << " ";
        cout << "}\n";
    }
}
// ====================== Algorithms ======================

// ====================== The sales man problem - BRUTE FORCE =======================
// The algorithm is bad, and it's made just for learning the principles for this problem
void minimum_cost(vector<vector<int>> &res, vector<vector<int>> &costs)
{
    int previous = 0;
    int next = 0;
    int sum = 0;
    int minSum = numeric_limits<int>::max();

    for (int i = 0; i < res.size(); i++)
    {
        sum = 0;
        sum += costs[0][res[i][0]];

        for (int j = 0; j + 1 < res[i].size(); j++)
        {
            previous = res[i][j];
            next = res[i][j + 1];
            sum += costs[previous][next];
        }
        sum += costs[res[i].back()][0];

        if (minSum > sum)
        {
            minSum = sum;
        }
    }

    cout << "Min sum: " << minSum << "\n";
}

void backtrackTsp(vector<vector<int>> &res, vector<int> &indexes, vector<int> &permutation, vector<bool> &used)
{
    if (permutation.size() == indexes.size())
    {
        res.push_back(permutation);
        return;
    }

    for (int i = 0; i < indexes.size(); i++)
    {
        if (!used[i])
        {
            // make a new choice
            permutation.push_back(indexes[i]);
            used[i] = true;
            backtrackTsp(res, indexes, permutation, used);

            // undo the choice
            used[i] = false;
            permutation.pop_back();
        }
    }
}

void travelingSalesmanProblem()
{

    vector<vector<int>> costs = {
        {0, 10, 15, 20},
        {5, 0, 9, 10},
        {6, 13, 0, 12},
        {8, 8, 9, 0}};

    vector<vector<int>> res = {};
    vector<int> permutation = {};
    vector<bool> used(costs.size());
    vector<int> indexes;

    for (int i = 1; i < costs.size(); i++)
    {
        indexes.push_back(i);
    }

    // indexes.push_back(0);
    backtrackTsp(res, indexes, permutation, used);

    for (auto &vec : res)
    {
        cout << "{ ";
        for (int num : vec)
            cout << num << " ";
        cout << "}\n";
    }

    minimum_cost(res, costs);

    cout << "Travelling Salesman Problem\n";
}
// ====================== The sales man problem - BRUTE FORCE =======================
// The algorithm is bad, and it's made just for learning the principles for this problem