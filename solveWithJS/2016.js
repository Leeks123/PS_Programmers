function solution(a, b) {
    var answer = '';
    const monthDate = [0,31,29,31,30,31,30,31,31,30,31,30,31]
    const weekday = ['THU','FRI','SAT','SUN','MON','TUE','WED'];
    let date = 0;
    for(let i=1;i<a;i++){
        date+=monthDate[i]
    }
    date+=b;
    console.log(date)
    answer = weekday[date%7]
    return answer;
}