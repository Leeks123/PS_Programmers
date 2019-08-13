
def solution(x):
    hashad = 0
    tmp = x
    while tmp!=0:
        hashad += tmp%10
        tmp = tmp//10
    if x % hashad == 0 :
        return True
    else:
        return False

print(solution(18))