/*
 *	author: Tien M. Pham
 *	updated: 02.03.2023
 *	title: Template for the C++ competitive programming problems
 * */

/******** All Header Files ********/
#include <bits/stdc++.h>
#include "debug_utils.h"

/**** Standard Namespace ****/
using namespace std;

/******* All Pre-Processors and Tyoedè Constants *******/
#define ALL(cont) cont.begin(), cont.end()
#define SORT(cont) sort(ALL(cont))
#define RSORT(cont) sort(ALL(cont), [](auto a, auto b) { return a > b; })
#define REV(cont) reverse(ALL(cont))
#define FOREACH (it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define el "\n"
typedef long long ll;
const int MOD{static_cast<int>(1e9 + 7)};
const int INF{static_cast<int>(1e9)};
const int NINF{static_cast<int>(-1e9)};
const double PI{acos(-1.0)};
const double EPS{1e-9};

#define debug(...)                               \
	cerr << "[" << #__VA_ARGS__ << "] = [";  \
	_print(__VA_ARGS__)

/***** User-defined Functions and Classes *******/

void solve() {
  
};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
  solve();
	
  return 0;
}
