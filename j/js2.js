const Stack = require('./javascript')
const stack = new Stack()
const text = 'Hello'

for (let i = 0; i < text.length; i++) {
    stack.push(text.charAt(i))
}

let revercedText = ''
while (!stack.isEmty()) {
    // console.log(`[POPED]`)
    // console.log(stack)
    revercedText += stack.pop()
}
// console.log(revercedText)


// javascript  Arry stcak method
const text1 = 'HELLO'
const jsStack = []
for (let i = 0; i < text.length; i++) {
    jsStack.push(text1.charAt(i))
}
// console.log(jsStack)
let result1 = ''
while (jsStack.length) result1 += jsStack.pop()
console.log(result1)