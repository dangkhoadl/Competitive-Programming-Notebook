#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <cstdio>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <istream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <set>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <time.h>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <utility>
#include <climits>
#include <cassert>
#include <istream>
#include <random>
#include <iterator>
#include <memory>
#include <cctype>
using namespace std;

#define ll long long
#define ull unsigned long long

//parameters
ll T;
/*-------------------------------------------------------------------*/
ll solve() {

}

int main(int agrc, char *argv[]) {
	freopen("..\\Debug\\Input.txt", "r", stdin);
	freopen("..\\Debug\\Output.txt", "w", stdout);
	//std::ios::sync_with_stdio(false);
/*-------------------------------------------------------------------*/
	cin >> T;
	for (ull id = 1; id <= T; ++id) {
		
		//Clear parameter here

		cout << "Case #" << id << ": " << solve() << endl;
	}
	return 0;
}
