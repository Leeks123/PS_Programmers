function solution(answers) {
    var answer = [];
    var score = [];
    const mathForgiver = [
                            [1,2,3,4,5],
                            [2,1,2,3,2,4,2,5],
                            [3,3,1,1,2,2,4,4,5,5]
                         ]
    mathForgiver.forEach((item,index)=>{
        score.push(scoreMathForgiver(answers,item))
    })
    let max = Math.max.apply(null, score)
    score.forEach((item,index)=>{
        if(max==item){
            answer.push(index+1)
        }
    })
    return answer;
}
const scoreMathForgiver = (answers,mathForgiver) => {
    let ret = 0;
    answers.forEach((item,index)=>{
        if(item == mathForgiver[index%mathForgiver.length])
            ret++;   
    })
    return ret;
}