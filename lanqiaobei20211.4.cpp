#include<iostream>
using namespace std;
long long int n;

//��n�ֽ�Ϊ���ɸ������ĳ˻�

long long int prime(long long int n) {
	long long int cnt = 0;
	long long int i = 2;//2����С������
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
	//printf("%d", n);//����޷��ֽ��ˣ���ʣ�µ�������������һ����������
	cnt++;
	return cnt;
}



int main() {
	cin >> n;
	cout<<(prime(n)+1)* (prime(n) + 1);
	
}