/*Kunal Parikh*/
#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <string>
#include <chrono>
#define time_elapsed                                           \
    auto stop = high_resolution_clock::now();                  \
    auto duration = duration_cast<microseconds>(stop - start); \
    cout<< duration.count();
#define ll long long int
#define ld long long double
#define pb push_back
#define mod 1000000007
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
#define maxv(v) max_element(v.begin(), v.end())
#define minv(v) min_element(v.begin(), v.end())
#define debug(x) cout << (#x) << " is " << (x) << endl
#define loop(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << endl;   \
    }
#define GCD(m, n) __gcd(m, n)
#define LCM(m, n) m *(n / __gcd(m, n))
#define start_clock auto start = high_resolution_clock::now();
#define input(a, n)          \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define fast_input                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std::chrono;
using namespace std;


int dp[10001][10001];

bool findPartition(int a[], int total, int n)
{
	//bc
	if (total == 0 && n == 0)
		return true;
	if (total == 0 && n != 0)
		return true;
	if (n == 0 && total != 0)
		return true;
	else if (a[n - 1] > total)
		return findPartition(a, total, n - 1);
	else
		return findPartition(a, total - a[n - 1], n - 1) || findPartition(a, total, n - 1);
}



int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[] = {1, 5, 11, 2 };

	int n = sizeof(a) / sizeof(a[0]);
	//find total sum
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	if (sum % 2 == 0)
	{
		int total = sum / 2;
		cout << findPartition(a, total, n);
	}
	else
	{
		cout << "false";
	}
	return 0;
}


