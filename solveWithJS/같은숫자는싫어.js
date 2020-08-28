function solution(arr){
    let ret = [];
    arr.forEach((item,index)=>{
        if(item!=arr[index+1]) ret.push(item)
    })
    return ret;
}