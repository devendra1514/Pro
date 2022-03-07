class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        row = board
        column = []
        box = []
        for i in range(9):
            temp = []
            for j in range(9):
                temp.append(board[j][i])
            column.append(temp)

        for b_i in range(0, 9, 3):
            for b_j in range(0, 9, 3):
                temp = []
                for i in range(b_i, b_i + 3):
                    for j in range(b_j, b_j + 3):
                        temp.append(board[i][j])
                box.append(temp)
        for i in range(0, 9):
            for j in range(0, 9):
                if board[i][j] == '.':
                    pass
                elif row[i].count(board[i][j]) >= 2:
                    return False
                elif column[j].count(board[i][j]) >= 2:
                    return False
        else:
            for i in range(0, 9):
                for j in range(0, 9):
                    if box[i][j] == '.':
                        pass
                    elif box[i].count(box[i][j]) >= 2:
                        return False
            else:
                return True


# board = [["5", "3", ".", ".", "7", ".", ".", ".", "."],
#          ["6", ".", ".", "1", "9", "5", ".", ".", "."],
#          [".", "9", "8", ".", ".", ".", ".", "6", "."],
#          ["8", ".", ".", ".", "6", ".", ".", ".", "3"],
#          ["4", ".", ".", "8", ".", "3", ".", ".", "1"],
#          ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
#          [".", "6", ".", ".", ".", ".", "2", "8", "."],
#          [".", ".", ".", "4", "1", "9", ".", ".", "5"],
#          [".", ".", ".", ".", "8", ".", ".", "7", "9"]]

board = [["8", "3", ".", ".", "7", ".", ".", ".", "."]
    , ["6", ".", ".", "1", "9", "5", ".", ".", "."]
    , [".", "9", "8", ".", ".", ".", ".", "6", "."]
    , ["8", ".", ".", ".", "6", ".", ".", ".", "3"]
    , ["4", ".", ".", "8", ".", "3", ".", ".", "1"]
    , ["7", ".", ".", ".", "2", ".", ".", ".", "6"]
    , [".", "6", ".", ".", ".", ".", "2", "8", "."]
    , [".", ".", ".", "4", "1", "9", ".", ".", "5"]
    , [".", ".", ".", ".", "8", ".", ".", "7", "9"]]
sol = Solution()
print(sol.isValidSudoku(board))
