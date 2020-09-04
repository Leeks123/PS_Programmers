function solution(n) {
    let ret = 0;
    for(let i=1;i<=n;i++){
        if(n%i==0) ret+=i;
    }
    return ret;
}