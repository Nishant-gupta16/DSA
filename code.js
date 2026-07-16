// ======================================================
// Question 1: Print "Nishant"

// console.log("Nishant");

// ======================================================
// Question 2: Find the sum of numbers from 1 to n using while loop.

// let n = 3;
// let sum = 0;
// let i = 1;

// while (i <= n) {
//     sum += i;
//     i++;
// }

// console.log(sum);

// ======================================================
// Question 3: Find the factorial of a number.

// let num = 5;
// let fact = 1;

// for (let i = 1; i <= num; i++) {
//     fact *= i;
// }

// console.log(fact);

// ======================================================
// Question 4: Check whether a number is Prime or Not.

// let num = 7;
// let isPrime = true;

// if (num <= 1) {
//     isPrime = false;
// }

// for (let i = 2; i * i <= num; i++) {
//     if (num % i === 0) {
//         isPrime = false;
//         break;
//     }
// }

// if (isPrime) {
//     console.log("Number is Prime");
// } else {
//     console.log("Number is Not Prime");
// }

// ======================================================
// Question 5: Take name as input and print it.

// Browser
// let name = prompt("Enter Your Name");
// console.log(name);

// Node.js
// const readline = require("readline").createInterface({
//     input: process.stdin,
//     output: process.stdout,
// });

// readline.question("Enter Your Name: ", (name) => {
//     console.log(name);
//     readline.close();
// });

// ======================================================
// Question 6: Find the sum of two numbers.

// let a = 10;
// let b = 20;

// console.log("Sum =", a + b);

// ======================================================
// Question 7: Check whether a character is lowercase or uppercase.

// let ch = "A";

// if (ch >= "a" && ch <= "z") {
//     console.log("Lowercase");
// } else {
//     console.log("Uppercase");
// }

// ======================================================
// Question 8: Print ASCII value of a character.

// let ch = "A";

// console.log(ch.charCodeAt(0));

// ======================================================
// Question 9: Print all even numbers from 1 to n and find their sum.

// let num = 20;
// let sum = 0;

// for (let i = 1; i <= num; i++) {
//     if (i % 2 === 0) {
//         console.log(i);
//         sum += i;
//     }
// }

// console.log("Sum =", sum);

// ======================================================
// Question 10: Print all odd numbers from 1 to n and find their sum.

// let num = 20;
// let sum = 0;

// for (let i = 1; i <= num; i++) {
//     if (i % 2 !== 0) {
//         console.log(i);
//         sum += i;
//     }
// }

// console.log("Sum =", sum);

// ======================================================
// Question 11: Print numbers from 1 to n using do-while loop.

// let num = 20;
// let i = 1;

// do {
//     console.log(i);
//     i++;
// } while (i <= num);

// ======================================================
// Question 12: Find the sum of numbers divisible by 3.

// let num = 30;
// let sum = 0;

// for (let i = 1; i <= num; i++) {
//     if (i % 3 === 0) {
//         sum += i;
//     }
// }

// console.log(sum);