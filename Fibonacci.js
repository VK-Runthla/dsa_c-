// like creat a series => 0,1,1,2,3,5,8,13,21,34,55,89,144,233
// f(n) = 0; f(n) = 1;
// f(n) = f(n-1)+f(n-2),for n > 1;


// function fibonacci(f){
//     let arr = [0, 1];

//     for(let i = 2; i <= f; i++){
//         arr.push(arr[i - 1]+arr[i - 2]);
//     }

//     console.log(arr);
// };
// fibonacci(12);




// Perform this with recursion

// function fibonacci(f){
//     if(f <= 1) return f;
//     return fibonacci(f - 1)+fibonacci(f - 2)
// }
// console.log(fibonacci(12));





//  /\ this code in one line

const fib = (n) => (n <= 1 ? n : fib(n-1) + fib(n-2));
console.log(fib(12));