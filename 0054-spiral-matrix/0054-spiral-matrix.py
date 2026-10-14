class Solution:
    def spiralOrder(self, matrix: list[list[int]]) -> list[int]:
        n = len(matrix)
        m = len(matrix[0])

        total = m*n
        ans = []
        
        c = 0
        rs = 0
        re = n-1
        cs = 0
        ce = m-1

        while(c < total):
            # for rowstart, colstart->colend
            for i in range(cs, ce+1):
                ans.append(matrix[rs][i])
                c += 1
            rs += 1

            if c >= total:
                break

            # for colend, rowstart->rowend
            for i in range(rs, re+1):
                ans.append(matrix[i][ce])
                c += 1
            ce -= 1
            
            if c >= total:
                break

            # for rowend, colend->colstart
            for i in range(ce, cs-1, -1):
                ans.append(matrix[re][i])
                c += 1
            re -= 1
            
            if c >= total:
                break

            # for colstart, rowend->rowstart
            for i in range(re, rs-1, -1):
                ans.append(matrix[i][cs])
                c += 1
            cs += 1
        
        return ans
