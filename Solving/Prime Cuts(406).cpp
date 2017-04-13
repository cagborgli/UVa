#include<iostream>
#include <vector>
#include <bitset>

typedef long long ll;
ll Limit = 1500;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	vector<ll>Sieve(Limit, 1); vector<int>Prime;
	ll Size, i, N_Size;
	int N, C, Start, Range, R;

	Sieve[0] = 0;
	Sieve[1] = 1;

	for (ll i = 2; i <= Limit; i++) {
		if (Sieve[i]) {
			for (ll j = i*i; j <= Limit; j += i)
				Sieve[j] = 0;
			Sieve.push_back(i);
		}
	}
	for (i = 0; i <= Limit; i++)
		if (Sieve[i])
			Prime.push_back(i);

	while (cin >> N >> C)
	{
		vector<int>N_Prime, B;
		for (i = 0; Prime[i] <= N; i++)
			N_Prime.push_back(Prime[i]);

		N_Size = N_Prime.size();

		if (N_Size % 2 == 0 && 2 * C < N_Size) { Range = 2 * C; Start = (N_Size - Range) / 2; R = 1; }

		else if ((2 * C) - 1 < N_Size) { Range = (2 * C) - 1; Start = (N_Size - Range) / 2; R = 1; }

		else { Start = 0; Range = N_Size; R = 1; }

		cout << N << " " << C << ": ";
		for (i = Start; R <= Range; R++)
		{
			cout << N_Prime[i] << " ";
			i++;
		}
		cout <<" "<< endl << endl;
	}
	return 0;
}