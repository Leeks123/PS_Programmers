function solution(s) {
    let strArray = s.split(' ');
    let retArray = strArray.map(item=>{
        return item.split('').map((elem,index)=>{
            if(index%2==0){
                return elem.toUpperCase();
            }else {
                return elem.toLowerCase();
            }
        }).join('');
    })
    return retArray.join(' ');
}