function solution(s) {
    return checkSize(s) && isNumeric(s)
}
const isNumeric = (s)=>{
    let num = ['1','2','3','4','5','6','7','8','9','0'];
    for(let i=0;i<s.length;i++){
        if(!num.includes(s[i])) return false;
    }
    return true;
}
const checkSize = (s)=>{
    return s.length==4 || s.length==6 ? true : false;
}