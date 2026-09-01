class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();
        vector<vector<int>> id(m, vector<int>(n, -1));
        int k = 0;
        int sr = 0, sc = 0;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (classroom[r][c] == 'S') {
                    sr = r; sc = c;
                } else if (classroom[r][c] == 'L') {
                    id[r][c] = k++;
                }
            }
        }
        if (k == 0) return 0;
        int totalMask = (1 << k) - 1;

        vector<vector<vector<int>>> best(
            m, vector<vector<int>>(n, vector<int>(1 << k, -1))
        );

        struct State {
            int r, c, mask, e, moves;
        };
        queue<State> q;
        best[sr][sc][0] = energy;
        q.push({sr, sc, 0, energy, 0});

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while(!q.empty()){
            auto [r, c, mask, e, moves] = q.front(); q.pop();
            if(e < 0) continue;
            if(mask == totalMask) return moves;
            for(int k = 0;k<4;k++){
                int nr = r + dx[k];
                int nc = c + dy[k];
                int ne = e - 1;
                int nmask = mask;
                if(nr<0 || nc<0 || nr>=m || nc>=n || classroom[nr][nc]=='X'|| ne <= best[nr][nc][nmask]) continue;
                if(classroom[nr][nc] == 'R') ne = energy;
                if(classroom[nr][nc] == 'L') nmask = mask | (1 << id[nr][nc]);
                best[nr][nc][nmask] = ne;
                q.push({nr, nc, nmask, ne, moves + 1});
            }
        }
        return -1;
    }
};