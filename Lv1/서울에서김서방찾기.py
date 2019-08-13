seoul =["Jane","Kim"]

def solution(seoul):
    answer = ''
    cnt=0
    for i in seoul:
        if(i=="Kim"):
            answer="김서방은 %d에 있다." % cnt
        cnt+=1
    return answer

print(solution(seoul))

#다른 사람의 답
#def findKim(seoul):
#   return "김서방은 {}에 있다".format(seoul.index('Kim'))
