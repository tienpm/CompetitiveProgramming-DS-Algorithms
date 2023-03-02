/*
 *	author: Tien M. Pham
 *	updated: 02.03.2023
 *	title: Template for the C++ competitive programming problems
 * */

/******** All Header Files ********/
#include <bits/stdc++.h>

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

/******* Debug Code *******/
void __print(int x) { cerr << x ; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename A>
void __print(const A &x) {
	int f = 0;
	cerr << '{';
	for (auto &i : x )
		cerr << (f++ ? ",": ""), __print(i);
	cerr << "}";
}

template<typename A, typename B>
void __print(const pair<A, B> &x) {
	cerr << "{";
	__print(x.first);
	cerr << ",";
	__print(x.second);
	cerr << '}';
}

template <typename T>
void __print(stack<T> s) {
	vector<T> debugVector = vector<T>();
	while (!s.empty()) {
		T t = s.top();
		debugVector.push_back(t);
		s.pop();
	}
	reverser(debugVector.begin(), debugVector.end());
	__print(debugVector);
}

template <typename T>
void __print(queue<T> q) {
	vector<T> debugVector = vector<T>();
	while (!q.empty()) {
		T t = q.front();
		debugVector.push_back(t);
		q.pop();
	}
	__print(debugVector);
}

template <typename T, typename U, typename V>
void __print(priority_queue<T, U, V> q) {
	vector<T> debugVector = vector<T>();
	while (!q.empty()) {
		T t = q.top();
		debugVector.push_back(t);
		q.pop();
	}
	__print(debugVector);
}

void _print() { cerr << "]\n"; }
template <typename Head, typename... Tail>
void _print(const Head &H, const Tail &...T) {
	    __print(H);
	        if (sizeof...(T))
			        cerr << ", ";
		    _print(T...);
}

#define debug(...)                               \
	cerr << "[" << #__VA_ARGS__ << "] = [";  \
	_print(__VA_ARGS__)

/***** User-defined Functions and Classes *******/

void solve() {

};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> nums;
	int x;
	while (cin >> x) {
		nums.push_back(x);
	}
	debug(nums);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	return 0;
}
