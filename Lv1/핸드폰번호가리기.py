
def solution(phone_number):
    answer = ''
    for i in range(len(phone_number)-4):
        answer+='*'
    answer+=phone_number[-4:]
    return answer

print(solution('01012345678'))

#      "*"*(len(s)-4) + s[-4:]