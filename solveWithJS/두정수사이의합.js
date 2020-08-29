function solution(a, b) {
    let bigger = a>=b?a:b;
    let smaller = a<b?a:b;
    if(a==b) return a;
    let sum = 0;
    for(let i=smaller;i<=bigger;i++){
        sum+=i;
    }
    return sum;
}