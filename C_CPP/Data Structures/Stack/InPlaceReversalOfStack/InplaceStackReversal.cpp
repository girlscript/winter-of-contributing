#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int top)
{
	//base case

	if (s.empty())
	{
		s.push(top);
		return;
	}

	//recursive case

	int currTop = s.top();
	s.pop();

	insertAtBottom(s, top);
	s.push(currTop);
}

void reverseStack(stack<int> &s)
{
	//base case

	if (s.empty())
	{
		return;
	}

	//recursive case

	//store the topmost element and make a call on the remaining stack

	int top = s.top();
	s.pop();

	reverseStack(s);

	insertAtBottom(s, top);
}

void printStack(stack<int> s, int n)
{
	for (int i = 0; i < n; i++)
	{
		int top = s.top();
		s.pop();

		cout << top << endl;
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int z = 0;
	while (t--)
	{
		cout << "Test case : # " << z++ << endl;

		stack<int> s;

		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			s.push(num);
		}

		cout << "The original Stack is :" << endl;
		printStack(s, n);

		reverseStack(s);

		cout << "The reversed stack is :" << endl;
		printStack(s, n);
		cout<<endl;
	}

	return 0;
}