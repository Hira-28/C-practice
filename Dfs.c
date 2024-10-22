#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int element) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        stack[++top] = element;}}
int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];}}
int isStackEmpty() {
    return top == -1;}
void dfs(int graph[][MAX], int start) {
    int visited[MAX] = {0}, v, i;
    push(start - 1);
    visited[start - 1] = 1;
    while(!isStackEmpty()) {
        v = pop();
        printf("%d ", v + 1);
        for(i = MAX - 1; i >= 0; i--) {
            if(graph[v][i] && !visited[i]) {
                push(i);
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
    printf("DFS starting from vertex %d: ", start);
    dfs(graph, start);
    return 0;
}
