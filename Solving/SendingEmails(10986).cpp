#include <vector>
#include <queue>
#include <cstdio>
 
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i, 0, j, 1)
 
#define INF 1e9
 
using namespace std;
 
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
int N, n, m, S, T, a, b, w;
vector<vii> AdjList;
vi dist;
priority_queue<ii, vector<ii>, greater<ii> > pq;
 
int main() {
    scanf("%d", &N);
    REP(i, N) {
        scanf("%d %d %d %d", &n, &m, &S, &T);
        AdjList.assign(n, vii());
        while (m--) {
            scanf("%d %d %d", &a, &b, &w);
            AdjList[a].push_back(ii(b, w));
            AdjList[b].push_back(ii(a, w));
        }
 
        dist.assign(n, INF);
        dist[S] = 0;
        pq.push(ii(0, S));
        while (!pq.empty()) {
            ii front = pq.top(); pq.pop();
            int d = front.first, u = front.second;
            if (d == dist[u]) {
                REP(j, AdjList[u].size()) {
                    ii v = AdjList[u][j];
                    if (dist[u] + v.second < dist[v.first]) {
                        dist[v.first] = dist[u] + v.second;
                        pq.push(ii(dist[v.first], v.first));
                    }
                }
            }
        }
        printf("Case #%d: ", i+1);
        if (dist[T] != INF)
            printf("%d\n",dist[T]);
        else printf("unreachable\n");
 
    }
}