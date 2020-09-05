function solution(phone_number) {
    let back = phone_number.substring(phone_number.length-4);
    return "*".repeat(phone_number.length-4)+back;
}

