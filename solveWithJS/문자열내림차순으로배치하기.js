function solution(s) {
    // return s.split('').sort().reverse().join('');
    let arr = s.split('');
    let upper = '';
    let lower = '';
    arr.forEach((item)=>{
        item.toUpperCase()==item ? 
            upper+=item : lower+= item;
    })
    let lowerArr = lower.split('').sort((a,b)=>{
        return a>b ? -1 : a<b? 1 : 0;
    })
    let upperArr = upper.split('').sort((a,b)=>{
        return a>b ? -1 : a<b? 1 : 0;
    })
    
    return lowerArr.join('')+upperArr.join('');
    
}