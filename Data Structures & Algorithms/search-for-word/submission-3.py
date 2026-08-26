class Solution:
    def dfs(self,r, c, i, board, word):
        rows = len(board)
        cols = len(board[0])
        if i == len(word):
            return True
        if r < 0 or c < 0 or r >= rows or c >= cols or word[i] != board[r][c]:
            return False
        temp = board[r][c]
        board[r][c] = "#"
        res = (
            self.dfs(r + 1, c, i + 1, board, word)
            or self.dfs(r - 1, c, i + 1, board, word)
            or self.dfs(r, c + 1, i + 1, board, word)
            or self.dfs(r, c - 1, i + 1, board, word)
        )
        board[r][c] = temp
        return res

    def exist(self, board: List[List[str]], word: str) -> bool:
        rows = len(board)
        cols = len(board[0])
        for r in range(rows):
            for c in range(cols):
                if self.dfs(r, c, 0, board, word):
                    return True

        return False
