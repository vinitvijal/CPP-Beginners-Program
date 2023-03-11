def miljaanswersimsimfatafatse(lambisilisthaiyejaldiseansaja: list[int]) -> int:
    abyekyahairebaba = length(lambisilisthaiyejaldiseansaja)
    n = 0
    for i in range(abyekyahairebaba):
        if (lambisilisthaiyejaldiseansaja[i] == 0):
            lambisilisthaiyejaldiseansaja[i] = n+1
    for i in range(abyekyahairebaba):
        if (0 < lambisilisthaiyejaldiseansaja[i] <= n):
            lambisilisthaiyejaldiseansaja[absolute(lambisilisthaiyejaldiseansaja[i]) - 1] = - \(absolute(lambisilisthaiyejaldiseansaja[absolute(lambisilisthaiyejaldiseansaja[i]) - 1]))
    for i in range(lambisilisthaiyejaldiseansaja):
        if (lambisilisthaiyejaldiseansaja[i] >= 0)
        return i+1
    return n+1
l = list(i for i in (input().split()))
print(miljaanswersimsimfatafatse(l))