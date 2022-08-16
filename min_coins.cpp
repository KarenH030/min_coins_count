#include <iostream>
#include <vector>

int minCoins(std::vector<int> coins, int V) {

if (V == 0) return 0;

int res = V + 1;

for (int i = 0; i < coins.size(); i++) {
	if (coins[i] <= V) {
		int sub = minCoins(coins, V-coins[i]);
		if (sub != V + 1 && sub + 1 < res) {
			res = sub + 1;
		}
	}
}
return res;
}

int main() {

}
