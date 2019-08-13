
def solution(n):
    answer = 0
    tmp = n
    while True:
        if tmp == 0:
            break
        answer += tmp % 10
        tmp = tmp // 10
    return answer


print(solution(123))
