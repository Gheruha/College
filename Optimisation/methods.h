#ifndef methods_h
#define methods_h
using namespace std;

void permutBacktrack();
void backtrack(vector<vector<int>> &res, vector<int> &nums, vector<int> &permutation, vector<bool> &used);
void travelingSalesmanProblem();
void backtrackTsp(vector<vector<int>> &res, vector<int> &nums, vector<int> &permutation, vector<bool> &used);
void minimum_cost(vector<vector<int>> &res, vector<int> &nums);

#endif