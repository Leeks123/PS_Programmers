function solution(n)
{
    n+="";
    let array = n.split("");
    return array.reduce((acc,cur)=>{
        return acc+(cur*1);
    },0)
}