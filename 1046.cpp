#include <cstdio>
#include <cstdlib>

int main()
{
	int node = 0;
	scanf("%d", &node);
	int* dis = (int*)malloc((node+1)*sizeof(int));
	dis[0] = 0;
	scanf("%d", &dis[1]);
	for (int i = 1; i < node; i++)
	{
		int distance = 0;
		scanf("%d", &distance);
		dis[i+1] = dis[i] + distance;
	}
	int n = 0, sum = dis[node];
	scanf("%d", &n);
	while (n--) {
		int node1, node2;
		scanf("%d %d", &node1, &node2);
		int right = abs(dis[node2 - 1] - dis[node1 - 1]);
		int left = sum - right;
		int min = (right < left) ? right : left;
		printf("%d\n", min);
	}
	return 0;
}