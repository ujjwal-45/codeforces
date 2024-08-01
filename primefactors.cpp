// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find distinct prime factor
// of a number N
void distinctPrimeFactors(int N)
{
	if (N < 2) {
		cout << -1;
		return;
	}
	if (N == 2) {
		cout << 2;
		return;
	}

	unordered_map<int, bool> visited;
    set<int> primeFactors;

    for (int i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			if (!visited[i]) {
                primeFactors.insert(i);
                visited[i] = 1;
            }
			N /= i;
		}
	}
    cout << primeFactors.size() << endl;
}

// Driver Code
int main()
{
	int N = 1;
	distinctPrimeFactors(N);
	return 0;
}
