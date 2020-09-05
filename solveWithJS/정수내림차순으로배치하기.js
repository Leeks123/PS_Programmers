function solution(n) {
    n+="";
    return Number(n.split('').sort((a,b)=>b-a).join(''));
}