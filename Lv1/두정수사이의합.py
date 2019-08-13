
def solution(a,b):
    answer=0
    for i in range(min(a,b),max(a,b)+1):
        answer+=i
    return answer
#for문을 돌릴 필요 없이 sum함수를 사용하는 것이 
print(solution(3,5))