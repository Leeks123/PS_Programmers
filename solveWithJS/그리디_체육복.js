function solution(n, lost, reserve) {
    let lostUpdate = lost;
    lost.forEach(item => {
        if(reserve.includes(item)){
           reserve.splice(reserve.indexOf(item),1)
            lostUpdate.splice(lost.indexOf(item),1)
        }
    })
    var answer = n-lostUpdate.length;
    lostUpdate.forEach(item => {
        if(reserve.includes(item)){
           reserve.splice(reserve.indexOf(item),1)
            answer++
        }else if(reserve.includes(item-1)){
            reserve.splice(reserve.indexOf(item-1),1)
            answer++
        }else if(reserve.includes(item+1)){
            reserve.splice(reserve.indexOf(item+1),1)
            answer++
        }
        console.log(item,lostUpdate,reserve,answer)
    })
    
    return answer;
}