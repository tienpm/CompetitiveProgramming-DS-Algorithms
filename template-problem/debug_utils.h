using namespace std;

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
