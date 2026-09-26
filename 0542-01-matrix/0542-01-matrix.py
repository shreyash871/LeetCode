class Solution:
    def updateMatrix(self, mat: list[list[int]]) -> list[list[int]]:
        from collections import deque

        m = len(mat)
        n = len(mat[0])

        q = deque()

        # Put all 0s into the queue
        # 0 cells have distance 0
        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    q.append((i, j))
                else:
                    mat[i][j] = -1

        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        # Multi-source BFS
        while q:
            r, c = q.popleft()

            for dr, dc in directions:
                nr = r + dr
                nc = c + dc

                if 0 <= nr < m and 0 <= nc < n and mat[nr][nc] == -1:
                    mat[nr][nc] = mat[r][c] + 1
                    q.append((nr, nc))

        return mat