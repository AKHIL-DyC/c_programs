#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15
void dfs(int vertex, int visited[MAX_SIZE],
int adjacencyMatrix[MAX_SIZE][MAX_SIZE], int
vertexCount) { 
printf("Vertex: %d ", vertex);
visited[vertex] = 1;
for (int i = 0; i < vertexCount; i++) {
if (adjacencyMatrix[vertex][i] == 1 && !visited[i]) {
dfs(i, visited, adjacencyMatrix, vertexCount);
}
}}
void bfs(int startVertex, int visited[MAX_SIZE],
int adjacencyMatrix[MAX_SIZE][MAX_SIZE], int
vertexCount) {
int queue[vertexCount], front = -1, rear = -1, vertex;
queue[++rear] = startVertex;
visited[startVertex] = 1;
while (front != rear) {
vertex = queue[++front];
printf("Vertex: %d ", vertex);
for (int i = 0; i < vertexCount; i++) {
if (adjacencyMatrix[vertex][i] == 1 && visited[i] == 0) {
queue[++rear] = i;
visited[i] = 1;
}
}
}
}
int main() {
int visited[MAX_SIZE] = {0};
int adjacencyMatrix[MAX_SIZE][MAX_SIZE];
int vertexCount, choice;
printf("Enter number of vertices: ");
scanf("%d", &vertexCount);
printf("Enter adjacency matrix:1 for connection and 0 for no connection");
for (int i = 0; i < vertexCount; i++) {
for (int j = 0; j < vertexCount; j++) {
scanf("%d", &adjacencyMatrix[i][j]);
}
}
do {
printf("\nMenu:\n");
printf("1. Depth First Search (DFS)\n");
printf("2. Breadth First Search (BFS)\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
for (int i = 0; i < MAX_SIZE; i++) {
visited[i] = 0;
}
switch (choice)
{
case 1:for (int i = 0; i < vertexCount; i++) {
if (visited[i] == 0) {
dfs(i, visited, adjacencyMatrix, vertexCount);
}
}
break;
case 2:for (int i = 0; i < vertexCount; i++) {
if (visited[i] == 0) {
bfs(i, visited, adjacencyMatrix, vertexCount);
}
}
break;
case 3:printf("Exiting the program.\n");
break;
default:printf("Invalid choice.Please enter a valid option.\n");
}
} while (choice != 3);
return 0;
}