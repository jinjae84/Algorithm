#include <iostream>
#include <queue>
#include <vector>

#define SIZE 8

using namespace std;

class Graph
{
private:
	queue<int> queue;
	bool visited[SIZE];
	vector<int> graph[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
		graph[edge].push_back(vertex);
	}

	void Search(int start)
	{
		visited[start] = true;
		queue.push(start);

		while (queue.empty() == false)
		{
			int x = queue.front();
			queue.pop();
			cout << x << " ";

			for (int i = 0; i < graph[x].size(); i++)
			{

				int next = graph[x][i];

				if (visited[next] == false)
				{
					visited[next] = true;
					queue.push(next);
				}

			}
		}
	}
};

int main()
{
#pragma region 너비 우선 탐색
	// 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선 방문하는 방법입니다.

	// 더 이상 방문하지 않은 정점이 없을 때까지
	// 방문하지 않은 모든 정점들에 대해서도 너비 우선 탐색을 적용합니다.

	Graph graph;

	graph.InsertEdge(1, 2);
	graph.InsertEdge(1, 3);

	graph.InsertEdge(2, 4);
	graph.InsertEdge(2, 5);

	graph.InsertEdge(3, 6);
	graph.InsertEdge(3, 7);

	graph.Search(1);
	cout << endl;

#pragma endregion

	return 0;
}