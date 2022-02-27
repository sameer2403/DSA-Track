class Solution
{

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int rows = image.size(), cols = image[0].size(), oldColor = image[sr][sc];
        if (newColor == oldColor)
            return image;
        // list<vector<int>> togo; togo.push_back({sr,sc});
        queue<pair<int, int>> togo;
        togo.push({sr, sc});

        int dirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!togo.empty())
        {
            int r = togo.front().first, c = togo.front().second;
            // togo.pop_front();
            togo.pop();
            image[r][c] = newColor;
            for (auto &d : dirs)
            {
                int rr = r + d[0], cc = c + d[1];
                if (rr < 0 || rr >= rows || cc < 0 || cc >= cols)
                    continue; // keep togo safe
                if (image[rr][cc] != oldColor)
                    continue; // keep togo clean
                              // togo.push_back({rr,cc});
                togo.push({rr, cc});
            }
        }
        return image;
    }
};