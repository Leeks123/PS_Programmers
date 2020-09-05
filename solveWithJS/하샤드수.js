function solution(x) {    
    return x%getDigitSum(x)==0?true:false;
}
const getDigitSum = (x)=>{
    x+="";
    return x.split('').reduce((acc,cur)=>{
        return acc+(cur*1);
    },0)
}