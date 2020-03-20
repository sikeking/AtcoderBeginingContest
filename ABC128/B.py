
N = int(input())
S = {}
for i in range(N):
    i,j = input().split()
    S[i] = int(j)

sorted(S.keys())

for (k,v) in S.items():
    print(k, v)