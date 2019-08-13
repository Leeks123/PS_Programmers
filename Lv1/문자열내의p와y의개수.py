
def solution(s):
    y = 0
    p = 0
    i = 0
    while i < len(s):
        if s[i] == 'p' or s[i] == 'P':
            p += 1
        elif s[i] == 'y' or s[i] == 'Y':
            y += 1
        i += 1
    if y == p:
        return True
    else:
        return False


print(solution('pooyyp'))

#다른사람 풀이
# def numPY(s):
#     return s.lower().count('p') == s.lower().count('y')