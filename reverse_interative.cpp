
// Program to implement reverse of a linkedlist (interative)

/*Kunal Parikh*/
#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <string>
#include <chrono>
#define time_elapsed                                                \
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

struct Node
{
	int data;
	Node *next; //pointer to Node
	//contructor
	Node(int key)
	{
		data = key;
		next = NULL;
	}
};

Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;
}
void printLL(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}
Node *reverseLL(Node *head)
{
	Node *prev = NULL;
	Node *curr = head;
	while (curr != NULL)
	{
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Node* head = NULL;
	head = insertBegin(head, 10);
	head = insertBegin(head, 20);
	head = insertBegin(head, 30);
	head = reverseLL(head);
	printLL(head);

	return 0;
}
