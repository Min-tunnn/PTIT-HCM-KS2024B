function splitArray(arr, n) {
    if (!Array.isArray(arr) || typeof n !== "number" || n <= 0) {
        return "dữ liệu không hợp lệ";
    }

    let result = [];
    for (let i = 0; i < arr.length; i += n) {
        result.push(arr.slice(i, i + n));//slice lấy du lieu (tại vị trí, đến vị trí).
    }
    
    return result;
}

// Test cases
console.log(splitArray([1, 2, 3, 4, 5, 6, 7, 8], 3)); // [[1,2,3], [4,5,6], [7,8]]
console.log(splitArray([1, 2, 3, 4, 5, 6, 7, 8], 2)); // [[1,2], [3,4], [5,6], [7,8]]
console.log(splitArray("abc", 3)); 