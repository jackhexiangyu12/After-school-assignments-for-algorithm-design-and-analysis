#include<iostream>
using namespace std;
long long int n;

//将n分解为若干个素数的乘积

long long int prime(long long int n) {
	long long int cnt = 0;
	long long int i = 2;//2是最小的素数
	while (n > i)
	{
		if (n % i == 0)
		{
			//printf("%d ", i);
			cnt++;
			n /= i;
		}
		else
		{
			i++;
		}
	}
	//printf("%d", n);//最后无法分解了，则剩下的这个数就是最后一个质数因子
	cnt++;
	return cnt;
}



int main() {
	cin >> n;
	cout<<(prime(n)+1)* (prime(n) + 1);
	
}