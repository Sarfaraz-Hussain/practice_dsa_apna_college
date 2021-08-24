
def Find_It(N, X, K, S):
    S = list(S)
    blocks = [S[i:i + X] for i in range(0, N, X)]
    digits = [sorted(set(i)) for i in blocks]
    freq = [len(x) for x in digits]
    for i in range(len(freq) - 2, -1, -1):
        freq[i] = freq[i] * freq[i + 1]
    if K > freq[0]:
        return -1
    freq.append(1)
    ans = []
    K = K - 1
    for i in range(1, len(freq)):
        div = K // freq[i]
        ans.append(digits[i - 1][div])
        K = K % freq[i]
    print(''.join(ans))

N, X, K= input().split()
S=input()
Find_It(int(N), int(X), int(K),S)