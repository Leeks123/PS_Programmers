arr=[1,2,3,4,5]
def solution(arr):
    answer = 0
    for i in arr:
        answer += i
    answer = answer / len(arr)
    return answer

print(solution(arr))