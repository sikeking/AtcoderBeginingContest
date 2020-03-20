

N,K = map(int,input().split())

S = 0
max_1 = 0;
for i in range(1,N+1):
    T = i
    c = 1
    while True:
        if(T * 2 < K):
            T *= 2
            c += 1
        else:
            break
    max_1 = max(c,max_1)
    c -= 1
    S += (max_1 - c) * 2

S /= N * (2 **max_1)
print('{:.10f}'.format(S))