#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void enqueue(int element) {
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = element;}}
int dequeue() {
    if(front == -1) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int element = queue[front++];
        if(front > rear) front = rear = -1;
        return element;}}
int isQueueEmpty() {
    return front == -1;
}
void bfs(int graph[][MAX], int start) {
    int visited[MAX] = {0}, v, i;
    enqueue(start - 1);
    visited[start - 1] = 1;
    while(!isQueueEmpty()) {
        v = dequeue();
        printf("%d ", v + 1);
        for(i = 0; i < MAX; i++) {
            if(graph[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;}}}
    printf("\n");
}
int main() {
    int graph[MAX][MAX] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0}
    };
    int start = 1;
    printf("BFS starting from vertex %d: ", start);
    bfs(graph, start);
    return 0;
}
