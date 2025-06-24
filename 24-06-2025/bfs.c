#include <stdio.h>
#define MAX 4
 
void breadth_first_search(int adj[MAX][MAX], int visited[MAX], int start) {
    int queue[MAX], front = 0, rear = 0;
    int i;
 
    queue[rear++] = start;
    visited[start] = 1;
 
    printf("BFS Traversal: ");
 
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (i = 0; i < MAX; i++) {
            if (adj[current][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}
 
int main() {
    int visited[MAX] = {0};
    int adj[MAX][MAX], i, j;
 
    printf("\nEnter the adjacency matrix: ");
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            scanf("%d", &adj[i][j]);
 
    breadth_first_search(adj, visited, 0);
 
    return 0;
}
 