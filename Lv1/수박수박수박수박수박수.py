
def solution(n):
    i = 0
    answer = ''
    while i < n:
        if i % 2 == 0:
            answer += '수'
        else:
            answer += '박'
        i += 1
    return answer


print(solution(5))

# 다른사람 풀이
# def water_melon(n):
#     s = "수박" * n
#     return s[:n]
