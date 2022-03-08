print("enter start and end cell of chessboard")

start=str(input())

end=input()


si=ord(start[0])-64
sj=int(start[1])

ei=ord(end[0])-64
ej=int(end[1])

dp=[[-1 for i in range(9)] for j in range(9)]

def check(si, sj):
  return (si<1 or si>8 or sj<1 or sj>8)==False

def get(i, j):
  q=[]
  q.append((i, j))
  dp[i][j]=0
  while len(q)>0:
    si, sj = q.pop(0)
    if check(si+1, sj+2) and dp[si+1][sj+2]==-1:
      dp[si+1][sj+2]=dp[si][sj]+1
      q.append((si+1, sj+2))
    if check(si+1, sj-2) and dp[si+1][sj-2]==-1:
      dp[si+1][sj-2]=dp[si][sj]+1
      q.append((si+1, sj-2))
    if check(si-1, sj+2) and dp[si-1][sj+2]==-1:
      dp[si-1][sj+2]=dp[si][sj]+1
      q.append((si-1, sj+2))
    if check(si-1, sj-2) and dp[si-1][sj-2]==-1:
      dp[si-1][sj-2]=dp[si][sj]+1
      q.append((si-1, sj-2))
    if check(si+2, sj+1) and dp[si+2][sj+1]==-1:
      dp[si+2][sj+1]=dp[si][sj]+1
      q.append((si+2, sj+1))
    if check(si+2, sj-1) and dp[si+2][sj-1]==-1:
      dp[si+2][sj-1]=dp[si][sj]+1
      q.append((si+2, sj-1))
    if check(si-2, sj-1) and dp[si-2][sj-1]==-1:
      dp[si-2][sj-1]=dp[si][sj]+1
      q.append((si-2, sj-1))
    if check(si-2, sj+1) and dp[si-2][sj+1]==-1:
      dp[si-2][sj+1]=dp[si][sj]+1
      q.append((si-2, sj+1))
get(si,sj)
print("The mininum number of steps are", dp[ei][ej])


