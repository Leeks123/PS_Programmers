function solution(n) {
    let answer = '';
    let cnt = 0;
    while (cnt<n){
        if(cnt%2==0){
            answer+='수';
        }else{
            answer+='박';
        }
        cnt++;
    }
    return answer;
    // "수박".repeat(n).slice(0,n);
}