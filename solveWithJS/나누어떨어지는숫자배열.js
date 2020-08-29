function solution(arr, divisor) {
    let array = [];
    arr.forEach(item=>{
        if(item%divisor==0) array.push(item);
    })
    array.sort((a,b)=>a-b);
    if(array.length==0){
        array.push(-1);
    }
    return array
}