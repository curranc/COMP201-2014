#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	vector <int> stack;
	string token;
	int ans, left, right;
	char *end;
	
	while(cin >> token)
	{
		if (token == "+")
		{
			right = stack.back(); 
			stack.pop_back(); 
			left = stack.back(); 
			stack.pop_back();
			ans = left + right;
			stack.push_back(a); 
		}
		else if (token == "-")
		{
			right = stack.back(); 
			stack.pop_back();
			left = stack.back(); 
			stack.pop_back();
			ans = left - right;
			stack.push_back(ans); 
		}
		else if (token == "*")
		{
			right = stack.back(); 
			stack.pop_back(); 
			left = stack.back();
			stack.pop_back();
			ans = left * right;
			stack.push_back(ans); 
		}
		else if (token == "/")
		{
			right = stack.back(); 
			stack.pop_back(); 
			left = stack.back();
			stack.pop_back();
			ans = left / right;
			stack.push_back(ans);
		}
		else if (token == ".")
		{
			break;
		}
		else
		{
			stack.push_back(strtol(token.c_str(), &end, 10));
		}
	}
		for ( int i = 0; i < stack.size(); i++)
		{
			cout << stack[i];
		}
	return 0;
}