/** @format */

// const arr = [10, 14, 63, 26, 9, 26, 8, 27, ]

// const {
//     emit
// } = require("nodemon")

// let smallNumer = arr[1]
// for (i = 1; i < arr.length; i++) {
//     if (arr[i] < smallNumer) {
//         smallNumer = arr[i]
//     }
// }
// console.log(smallNumer)
// const response = new Array(9)
// response.fill(false)
// for (i = 0; i < response.length; i++) {
//     const rand = Math.floor(Math.random() * 10 + 1)
//     response[i] = rand > 5 ? 'X' : 'O'
// }

// console.log(response)

// const arr = [
//     [1, 2, 3],
//     [1, 2, 3],
//     [1, 2, 3]
// ]
// for (i = 0; i < arr.length; i++) {
//     for (j = 0; j < arr[i].length; j++) {
//         console.log(arr[i][j])
//     }
// }
// const MtrixA = [
//     [1, 2, 3, ],
//     [1, 2, 3, ],
//     [1, 2, 3, ]
// ]
// const MtrixB = [
//     [1, 2, 3, ],
//     [1, 2, 3, ],
//     [1, 2, 3, ]
// ]

// const Matrix = (MatrixA, MatrixB) => {
//     const result = []
//     for (let i = 0; i < MatrixA.length; i++) {
//         const row = []
//         for (let j = 0; j < MatrixA[i].length; j++) {
//             row.push(MtrixA[i][j] + MatrixB[i][j])
//         }
//         result.push(row)
//     }
//     return result
// }
// const matrix = Matrix(MtrixA, MtrixB)
// console.log(matrix)
// const arr = [1, 2, 3]
// const arr2 = [4, 5, 6]
// arr.push(...arr2)
// console.log(arr)
// arr.unshift(10)
// Array.prototype.unshift.apply(arr, arr2)
// console.log(arr)

// const name = [{
//         id: 1,
//         'name': 'hamza'
//     },
//     {
//         id: 2,
//         'name': 'walid'
//     }
// ]
// const id = 2
// const updatedname = 'mohammad'
// for (i = 0; i < name.length; i++) {
//     if (id == name[i].id) {
//         name[i].name = updatedname
//     }
// }
// console.log(name)
// let number = [1, 2, 3, 4, 5, 6, 7, ]

// number.shift()
// number.pop()
// number.length = number.length - 1
// number.splice(2, 2)
// const deletebyid = 5
// for (i = 0; i < number.length; i++) {
//     if (number[i] == deletebyid) {
//         number.splice(i, 1)
//     }
// }
// number = number.filter(item => item != deletebyid)
// console.log(number)
// let x = [1, 2, 3, 4]
// let y = x
// // x.length = 0

// while (x.length) x.pop()
// console.log(x, y)
// const arr = [1, 2, 3]
// const arr1 = [1, 2, 3]
// const arr2 = arr.concat(arr1)
// const cloned = arr.splice()
// console.log(arr == cloned)
// const names = [
//     'hamza',
//     'asem',
//     'abdullah'
// ]
// for (let i = 0; i < names.length; i++) {
//     console.log(names)
// }
// for (let i = 0; i < names.length; i++) {
//     console.log(`${i +1} ${names[i]}`)
// }

// function reuse(arr, cb) {
//     for (let i = 0; i < arr.length; i++) {
//         cb(arr[i], i, arr)
//     }
// }

// function cb(value, index, arr) {
//     console.log(value, index, arr)
// }
// reuse(names, cb)

// function myForeach(arr, cb) {
//     for (let i = 0; i < arr.length; i++) {
//         cb(arr[i], i, arr)
//     }
// }
// const nums = [1, 2, 3, 4]
// let sum = 0

// function sumFuc(v) {
//     sum += v
// }
// myForeach(nums, sumFuc)
// myForeach(nums, function (v) {
//     sum += v
// })
// console.log(sum)

// myForeach(names, (value, index) => {
//     console.log(index, value)
// })
// names.forEach((value, index) => {
//     console.log(index, value)
// })
// const names = [
//     'hamza',
//     'asem',
//     'abdullah'
// ]

// function reuse(arr, cb) {
//     for (let i = 0; i < arr.length; i++) {
//         cb(arr[i], i, arr)
//     }
// }
// const result1 = []

// reuse(names, value => {
//     result1.push(value.length)
// })
// console.log(result1)
// const result2 = []

// reuse(names, value => {
//     result2.push(value.toUpperCase())
// })
// console.log(result2)
// const result3 = []

// reuse(names, value => {
//     result3.push(value.substr(2))
// })
// console.log(result3)

// const name = [
//     'hamza',
//     'asem',
//     'abdullah'
// ]

// function reuseAndMap(arr, cb) {
//     const result = []
//     for (let i = 0; i < arr.length; i++) {
//         result.push(cb(arr[i], i, arr))
//     }
//     return result
// }

// const length = reuseAndMap(name, value => value.length)
// const upper = reuseAndMap(name, value => value.toUpperCase())
// const scliced = reuseAndMap(name, value => value.substr(2))

// console.log(length)
// console.log(upper)
// console.log(scliced)

// const lentght1 = name.map(value => value.length)
// const upper2 = name.map(value => value.toUpperCase())
// const sliced2 = name.map(value => value.substr(2))
// console.log(lentght1)
// console.log(upper2)
// console.log(sliced2)
// const students = [{
//         id: 1,
//         'name': 'Hamza',
//         gpa: 3.99,
//         email: 'hamza@g,mail.com',
//         due: true,
//         dueAmount: 1000
//     },
//     {
//         id: 2,
//         'name': 'asem',
//         gpa: 5.9,
//         email: 'hamza@g,mail.com',
//         due: true,
//         dueAmount: 1000
//     },
//     {
//         id: 3,
//         'name': 'arif',
//         gpa: 1,
//         email: 'hamza@g,mail.com',
//         due: false,
//         dueAmount: 0
//     },
// ];
// const arrstudentMap = students.map(value => {
//     return {
//         ...value,
//         title: `Hello ${value.name} - Your Result Published`,
//         msg: `Hello ${value.name} - Your Result Published - you have got ${value.gpa} you have ${value.gpa >= 3  ? 'Passd ' :'Faild'}`
//     }
// })
// console.log(arrstudentMap)
// const lowGpa = students.filter(value => value.gpa < 3)
// console.log(lowGpa)
// const duestudent = students.filter(value => value.dueAmount > 0)
// console.log(duestudent)
// const emailTemplates = students.filter(value => value.gpa < 3).map(value => {
//     return {
//         ...value,
//         title: 'Result publioudfhxugh',
//         msg: 'riphfguoa'
//     }
// })
// console.log(emailTemplates)
// let productRevew = [{
//         name: 'Hamza',
//         response: 'positive',
//         rating: '5'
//     },
//     {
//         name: 'mohammed',
//         response: 'positive',
//         rating: '5'
//     },
//     {
//         name: 'asem',
//         response: 'nagitive',
//         rating: '4'
//     }
// ]
// const positive = productRevew.every(value => value.rating > 3)
// if(positive){
//     console.log('100% p')
// }else{
//     console.log('stgh')
// }

// let number = [1, 2, 3, 4, 5]

// function sumFunc(acumulator, currentValue, index) {
//     console.log(`Index ${index} - Acc ${acumulator} - ${currentValue}`)
//     return acumulator + currentValue
// }
// const sum = number.reduce(sumFunc)
// console.log(sum)

// const avg = number.reduce((acc, curr, index, arr) => {
//     acc += curr
//     if (index == arr.length - 1) {
//         return acc / arr.length
//     }
//     return acc
// })
// console.log(avg)
// const nestedArry = [
//     [1, 2], 3, [4, 5]
// ]
// const flatArry = nestedArry.flat()
// console.log(flatArry)

// const flatarry2 = nestedArry.reduce((acc, cur) => {
//     return acc.concat(cur)
// }, [])
// console.log(flatarry2)
// const arr = [1, 2, 3, 4]

// const map = arr.map(x => [x * 2])
// console.log(map)

// const flatMap = arr.flatMap(x => [x * 2])
// console.log(flatMap)
// const flatMa1 = arr.flatMap(x => [x, x * 2])
// console.log(flatMa1)
// const reducreFlatMap = arr.reduce((acc, curr) => {
//     return acc.concat(curr * 2)
// }, [])
// console.log(reducreFlatMap)
// const reducreFlatMap = arr.reduce((acc, curr) => {
//     return acc.concat([curr, curr * 2])
// }, [])
// console.log(reducreFlatMap)

// const votes = [
//     'java',
//     'java',
//     'python',
//     'java',
//     'javascript',
//     'python',
//     'javascript',
// ];
// const result = votes.reduce((acc, curr) => {
//     if (acc[curr]) {
//         acc[curr]++;
//     } else {
//         acc[curr] = 1;
//     }
//     return acc;
// }, {});
// // console.log(result)
// function myReduce(arr, cb, init) {
//     let acc = init,
//         start = 0
//     if (!init) {
//         acc = arr[0]
//         start = 1
//     }
//     for (let i = start; i < arr.length; i++) {
//         acc = cb(acc, acc[i], i, arr)
//     }
//     return acc;
// }
// const arr2 = [1, 2, 3, 4, 5]

// const sum = myReduce(arr2, (acc, curr) => {
//     return acc + curr
// })
// console.log(sum)
// const products = [{
//         name: 'javascript  Cookbook',
//         price: 350
//     },
//     {
//         name: 'javascript  Cookbook',
//         price: 350
//     },
//     {
//         name: 'javascript  Cookbook',
//         price: 350
//     },
//     {
//         name: 'javascript  Cookbook',
//         price: 350
//     }
// ]
// const invoice = products.reduce((acc, curr) => {
//     if (acc[curr.name]) {
//         acc[curr.name].quntity++;
//         acc[curr.name].price += curr.price
//     } else {
//         acc[curr.name] = {
//             price: curr.price,
//             quntity: 1
//         }
//     }
//     return acc
// }, {})
// console.log(invoice)

// const matrix = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]

// const flatsum = matrix.reduce((acc, curr) => {
//     return acc + curr.reduce((a, b) => a + b)
// }, 0)
// console.log(flatsum)
// const resultV = matrix.reduce((acc, curr) => {
//     console.log('a', acc, '--c', curr)
//     return acc.map((v, i) => curr[i] + v)
// })
// console.log(resultV)
// const resultH = matrix.map(row => {
//     return row.reduce((a, b) => a + b)
// })
// console.log(resultH)
// const numbers = [1, 2, 3, 4, 5]
// const squere = numbers.reduce((acc, curr) => {
//     acc.push(curr * curr)
//     return acc;
// }, [])
// console.log(squere)
// const odd = numbers.reduce((acc, curr) => {
//     if (curr % 2 == 1) {
//         acc.push(curr)
//     }
//     return acc
// }, [])
// console.log(odd)

// const bigArry = []
// for (let i = 0; i < 50000000; i++) {
//     bigArry.push(i)
// }

// // bigArry.filter((v) => v % 2 == 0).map(v => v * 2)

// console.time('Both')
// bigArry.reduce((acc, curr) => {
//     if (curr % 2 == 0) {
//         acc.push(curr * 2)
//     }
//     return acc
// }, [])
// console.timeEnd('Both')
// const add10 = (n) => n + 10
// const times3 = (n) => n * 3
// const div2 = (n) => n / 2
// const n = 5
// const x = div2(times3(add10(n)))
// console.log(x)

// const pipe = (...fns) => x => fns.reduce((v, f) => f(v), n)
// const r = pipe(add10, times3, div2)(n)
// console.log(r)

// const compose = (...fns) => {
//     return x => {
//         return fns.reduce((v, f) => f(v), x)
//     }
// }
// const r1 = compose(add10, times3, div2)(n)
// console.log(r1)
// const js = {
//     name: 'Javascript: all you need to know',
//     autthor: {
//         name: 'HM Namyem',
//         email: 'bfrb@hbrsk'
//     },
//     content: {
//         video: {
//             count: 222
//         }
//     }
// }
// const node = {
//     name: 'Node: all you need to know',
//     autthor: {
//         name: 'HM Namyem',
//         email: 'bfrb@hbrsk'
//     },
//     content: {
//         video: {
//             count: 245
//         }
//     }
// }

// const react = {
//     name: 'Javascript: all you need to know',
//     autthor: {
//         name: 'HM Namyem',
//         email: 'bfrb@hbrsk'
//     },
//     content: {
//         video: {
//             count: 222
//         },
//         article: {
//             count: 15
//         },
//         quiz: {
//             count: 10
//         }
//     }
// }
// const inspectArticle = (course, path) => {
//     return path.split('.').reduce((acc, currField) => {
//         if (acc) {
//             return acc[currField]
//         }
//         return 0
//     }, course)
// }
// const coures = [js, node, react]
// coures.forEach((coures) => {
//     console.log(
//         `${coures.name} has - ${inspectArticle(coures,'content.article.count')}`
//     )
// })
// coures.forEach((coures) => {
//     const consVideo = inspectArticle(coures, 'content.video.count')
//     const consaArticle = inspectArticle(coures, 'content.article.count')
//     const consquiz = inspectArticle(coures, 'content.quiz.count')
//     console.log(`Total Video  ${consVideo},Article=${consaArticle}quize=${consquiz}`)
// })
// const links = [{
//         name: 'facebook',
//         url: 'zdjgvjaf'
//     },
//     {
//         name: 'facebook',
//         url: 'zdjgvjaf'
//     },
//     {
//         name: 'facebook',
//         url: 'zdjgvjaf'
//     },
//     {
//         name: 'facebook',
//         url: 'zdjgvjaf'
//     },
// ]
// let template = `<ul>{{links}}</ul>`
// const linklist = links.reduce((acc, curr) => {
//     acc += `<li><a href="${curr.url}"></a>${curr.name}</li>`
//     return acc
// }, '')
// // console.log(linklist)
// template = template.replace('{{links}}', linklist)
// console.log(template)
// const word = [
//     'one',
//     'one',
//     'one',
//     'one',
//     'one',
//     'one',
//     'one'
// ]
// const group = word.reduce((acc, curr) => {
//     const len = curr.length
//     if (acc[len]) {
//         acc[len].push(curr)
//     } else {
//         acc[len] = [curr]
//     }
//     return acc
// }, {})
// console.log(group)
// const course = [{
//         id: 'OC1',
//         price: 2599
//     },
//     {
//         id: 'OC2',
//         price: 25499
//     },
// ]
// const discount = {
//     OC1: 200,
//     // OC2: 100
// }
// const updated = course.reduce((acc, curr) => {
//     if (discount[curr.id]) {
//         curr.discount = discount[curr.id]
//     } else {
//         curr.discount = 0
//     }
//     acc.push(curr)
//     return acc
// }, [])
// // console.log(updated)
// function createPromise(id) {
//     const rantime = Math.floor(Math.random() * 2000 + 100)
//     return new Promise(resolve => {
//         setTimeout(() => {
//             console.log(`Processing ${id} --Time ${rantime}`)
//             resolve(id)
//         }, rantime)
//     })
// }
// const ids = [1, 2, 3, 4, 5]
// ids.forEach(v => {
//     createPromise(v)
// })
// const result = ids.reduce((acc,curr)=>{
//     return acc.then(() =>{
//         return createPromise(curr)
//     })
// },Promise.resolve())

// result.then(()=>{
//     console.log('done')
// })

// contacts = [{
//         "id": 1,
//         "name": "Elma Herring",
//         "email": "elmaherring@unq.com",
//         "phone": "+1 (913) 497-2020"
//     },
//     {
//         "id": 2,
//         "name": "Knapp Berry",
//         "email": "knappberry@unq.com",
//         "phone": "+1 (951) 472-2967"
//     },
//     {
//         "id": 3,
//         "name": "Bell Burgess",
//         "email": "bellburgess@unq.com",
//         "phone": "+1 (887) 478-2693"
//     },
//     {
//         "id": 4,
//         "name": "Hobbs Ferrell",
//         "email": "hobbsferrell@unq.com",
//         "phone": "+1 (862) 581-3022"
//     },
//     {
//         "id": 5,
//         "name": "Marylou Medina",
//         "email": "maryloumedina@unq.com",
//         "phone": "+1 (996) 520-2967"
//     },
//     {
//         "id": 6,
//         "name": "Larson Guerra",
//         "email": "larsonguerra@unq.com",
//         "phone": "+1 (972) 566-2684"
//     },
//     {
//         "id": 7,
//         "name": "Shelby Ballard",
//         "email": "shelbyballard@unq.com",
//         "phone": "+1 (824) 467-3579"
//     },
//     {
//         "id": 8,
//         "name": "Lea Faulkner",
//         "email": "leafaulkner@unq.com",
//         "phone": "+1 (899) 528-3402"
//     },
//     {
//         "id": 9,
//         "name": "Cecelia Wolf",
//         "email": "ceceliawolf@unq.com",
//         "phone": "+1 (862) 507-3140"
//     },
//     {
//         "id": 10,
//         "name": "Melva Nixon",
//         "email": "melvanixon@unq.com",
//         "phone": "+1 (901) 444-3081"
//     },
//     {
//         "id": 11,
//         "name": "Bernard Chambers",
//         "email": "bernardchambers@unq.com",
//         "phone": "+1 (831) 539-3366"
//     },
//     {
//         "id": 12,
//         "name": "Wendi Bender",
//         "email": "wendibender@unq.com",
//         "phone": "+1 (868) 414-2720"
//     },
//     {
//         "id": 13,
//         "name": "Wall Stewart",
//         "email": "wallstewart@unq.com",
//         "phone": "+1 (814) 558-3191"
//     },
//     {
//         "id": 14,
//         "name": "Howell Gilbert",
//         "email": "howellgilbert@unq.com",
//         "phone": "+1 (926) 512-3631"
//     },
//     {
//         "id": 15,
//         "name": "Nguyen Maxwell",
//         "email": "nguyenmaxwell@unq.com",
//         "phone": "+1 (838) 469-2152"
//     },
//     {
//         "id": 16,
//         "name": "Norris Hendricks",
//         "email": "norrishendricks@unq.com",
//         "phone": "+1 (818) 563-2900"
//     },
//     {
//         "id": 17,
//         "name": "Salinas Mcleod",
//         "email": "salinasmcleod@unq.com",
//         "phone": "+1 (888) 413-3775"
//     },
//     {
//         "id": 18,
//         "name": "Michelle Barrett",
//         "email": "michellebarrett@unq.com",
//         "phone": "+1 (988) 446-2594"
//     },
//     {
//         "id": 19,
//         "name": "Burke Barlow",
//         "email": "burkebarlow@unq.com",
//         "phone": "+1 (965) 492-2552"
//     },
//     {
//         "id": 20,
//         "name": "Rosie Cummings",
//         "email": "rosiecummings@unq.com",
//         "phone": "+1 (845) 456-2237"
//     },
//     {
//         "id": 21,
//         "name": "Sanford Frye",
//         "email": "sanfordfrye@unq.com",
//         "phone": "+1 (936) 581-3494"
//     },
//     {
//         "id": 22,
//         "name": "Janna Peck",
//         "email": "jannapeck@unq.com",
//         "phone": "+1 (824) 512-2437"
//     },
//     {
//         "id": 23,
//         "name": "Lorraine Sykes",
//         "email": "lorrainesykes@unq.com",
//         "phone": "+1 (959) 422-3635"
//     },
//     {
//         "id": 24,
//         "name": "Vicki Fulton",
//         "email": "vickifulton@unq.com",
//         "phone": "+1 (916) 455-2402"
//     },
//     {
//         "id": 25,
//         "name": "Massey Moody",
//         "email": "masseymoody@unq.com",
//         "phone": "+1 (840) 453-3811"
//     },
//     {
//         "id": 26,
//         "name": "Grant Berg",
//         "email": "grantberg@unq.com",
//         "phone": "+1 (837) 554-3706"
//     },
//     {
//         "id": 27,
//         "name": "Hawkins Winters",
//         "email": "hawkinswinters@unq.com",
//         "phone": "+1 (945) 469-2432"
//     },
//     {
//         "id": 28,
//         "name": "Frazier Davidson",
//         "email": "frazierdavidson@unq.com",
//         "phone": "+1 (854) 558-2637"
//     },
//     {
//         "id": 29,
//         "name": "Francine Cervantes",
//         "email": "francinecervantes@unq.com",
//         "phone": "+1 (923) 520-2916"
//     },
//     {
//         "id": 30,
//         "name": "Francis Perez",
//         "email": "francisperez@unq.com",
//         "phone": "+1 (885) 461-3054"
//     }
// ]
// contacts.sort((a, b) => {
//     if (a.name > b.name) return 1
//     if (a.name < b.name) return -1
// })
// const group = contacts.reduce((acc, curr) => {
//     let groupName = curr.name.charAt(0).toUpperCase()
//     if (acc[groupName]) {
//         acc[groupName].push(curr)
//     } else {
//         acc[groupName] = [curr]
//     }
//     return acc
// }, {})
// const display = group => {
//     console.log('displaying information ')
//     console.log('------------------ ')
//     const keys = Object.keys(group)
//     keys.forEach(key => {
//         console.log(`Group ${keys}`)
//         console.table(group[key])
//     })
// }
// display(group)
// const arr = [14, 2, 74, 55, 9, 20, 34]
// const sortAryy = [2, 4, 7, 9, 14, 20, 34, 55]

// const bubblesort = (arry) => {
//     for (let i = 0; i < arry.length - 1; i++) {
//         for (let j = 0; j < arry.length - 1; j++) {
//             if (arry[i] > arry[j + 1]) {
//                 let temp = arry[j]
//                 arry[j] = arry[j + 1]
//                 arr[j + 1] = temp
//             }
//         }
//     }
// }
// bubblesort(arr)
// console.log(arr)
// const number = [10, 1, 3, 78, 39, 2, 11]
// number.sort((a, b) => {
//     console.log(a, b)
//     return a - b
// })
// console.log(number)
// let stirng = ['apple', 'Cat', 'Ball', 'Apple']
// stirng.sort((a, b) => {
//     if (a > b) return 1
//     if (b > a) return -1
//     return 0;
// })
// console.log(stirng)
// const tema = [{
//         id: 2,
//         name: 'hamza2'
//     },
//     {
//         id: 10,
//         name: 'hamza10'
//     },
//     {
//         id: 4,
//         name: 'hamza4'
//     },
// ]
// tema.sort((a, b) => {
//     if (a.name > b.name) return 1
//     if (b.name > a.name) return -1
//     return 0
// })
// console.log(tema)
// tema.sort((a, b) => {
//     if (a.id > b.id) return 1
//     if (b.id > a.id) return -1
//     return 0
// })
// console.log(tema)
const arr = [14, 2, 74, 55, 9, 20, 34]
// const sortAryy = [2, 4, 7, 9, 14, 20, 34, 55]

// const bubblesort = (arry) => {
//     for (let i = 0; i < arry.length - 1; i++) {
//         for (let j = 0; j < arry.length - 1; j++) {
//             if ((arry[j], arry[j + 1]) > 0) {
//                 let temp = arry[j]
//                 arry[j] = arry[j + 1]
//                 arr[j + 1] = temp
//             }
//         }
//     }
// }
// bubblesort(arr, (a, b) => a - b)
// console.log(arr)
// const liner = (arr, key) => {
//     for (let i = 0; i < arr.length; i++) {
//         if (arr[i] == key) {
//             return i
//         }
//     }
//     return -1
// }
// const sa1 = liner(arr, 34)
// console.log(sa1)
// const linerCB = (arr, cb) => {
//     for (let i = 0; i < arr.length; i++) {
//         if (cb(arr[i])) {
//             return i
//         }
//     }
//     return -1
// }
// const s3 = linerCB(tema, item => item.name == 'hamza10')
// console.log(s3)
// let array = [12, 3, 1, 32, 65, 78, 98, 90, 100];
// const binarySerach = (arr, key) => {
//     let lower = 0
//     let hight = arr.length - 1
//     while (lower <= hight) {
//         let mid = Math.floor((lower + hight) / 2)
//         if (arr[mid] == key) return mid
//         if (arr[mid] < key) lower = mid + 1
//         if (arr[mid] > key) hight = mid - 1
//     }
//     return -1
// }
// array.sort((a, b) => a - b)
// console.log(array)
// const index = binarySerach(array, 12)
// console.log(index)
// var number = 145;
// var copynumber = number;
// // var arr = []
// var i = 0;
// var sum = 0;

// function factorial(n) {
//     var a = 0,
//         multiplication = 1
//     for (a = 1; a <= n; a++) {
//         multiplication = multiplication * a
//     }
//     return multiplication
// }
// while (number > 9) {
//     arr[i] = Math.floor(number % 10)
//     i++
//     number = number / 10
// }
// arr[i] = Math.floor(number)
// for (i = 0; i < arr.length; i++) {
//     sum = sum + factorial(145)
// }

// if (sum == copynumber) {
//     console.log(copynumber + 'is a stogn number');
// } else {
//     console.log('not stron number');
// }
// var outerFunction  = function(){

//    if(true){
//       var x = 5;
//       //console.log(y); //line 1, ReferenceError: y not defined
//    }

//    var nestedFunction = function() {

//       if(true){
//          var y = 7;
//          console.log(x); //line 2, x will still be known prints 5
//       }

//       if(true){
//          console.log(y); //line 3, prints 7
//        }
//    }
//    return nestedFunction;
// }

// var myFunction = outerFunction();
// myFunction();
// var cat = {

//     name: "Gus",
//     color: "gray",
//     age: 15,

//     printInfo: function () {
//         console.log("Name:", this.name, "Color:", this.color, "Age:", this.age); //line 1, prints correctly

//         nestedFunction = function () {
//             console.log("Name:", this.name, "Color:", this.color, "Age:", this.age); //line 2, loses cat scope
//         }

//         nestedFunction();
//     }
// }
// cat.printInfo(); //prints Name: window Color: undefined Age: undefined
// var avg = function(...n){
//     let tot = 0;
//     for(let i=0;i<n.length;i+=1){
//         tot += n[i];
//     }
//     return tot /n.length;
// }
// var sipceUp = function(fn,...n){
//     return function(...m){
//         console.log(n,m)
//         return fn.apply(this,n.concat(m))
//     }
// }
// var doavg = sipceUp(avg,1,2,3)
// console.log(doavg(4,5,6))
// console.clear()
// var arre = [1, 2, 3, 4, 5]
// var sum = arre.reduce(function(prev,curr){
//     return prev + curr
// })
// console.log(sum)
// var max = arre.reduce(function(prev,curr){
//     return Math.max(prev,curr)
// },0)
// console.log(max)

// function myreduce(arr, cb, acc) {

//   for (var i = 0; i < arr.length; i++) {
//     acc = cb(acc, arr[i])
//   }
//   return acc
// }
// var sum1 = myreduce(arre, function (prev, curr) {
//   return prev + curr
// }, 0)

// var max1 = myreduce(arre, function (prev, curr) {
//   return Math.max(prev, curr)
// }, 0)
// var min = myreduce(arre, function (prev, curr) {
//   return Math.min(prev, curr)
// }, arr[0])
// console.log(sum1, max1, min)
// let products1 = [{
//     name: 'python',
//     price: 10
//   },
//   {
//     name: 'python',
//     price: 10
//   },
//   {
//     name: 'javascript',
//     price: 20
//   },
//   {
//     name: 'javascript',
//     price: 20
//   }
// ]
// const invoice2 = products1.reduce((acc, curr) => {
//   if (acc[curr.name]) {
//     acc[curr.name].quantity++
//     acc[curr.name].price += curr.price
//   } else {
//     acc[curr.name] = {
//       price: curr.price,
//       quantity: 1
//     }
//   }
//   return acc
// }, {})
// console.log(invoice2)

// function sum(n) {
//   if (n == 1) {
//     return 1
//   }
//   return (n += sum(n - 1))
// }
// console.log(sum(5))



// const voteresult = obj.reduce((acc, value) => {
//   if (acc[value]) {
//     acc[value].count++
//   } else {
//     acc[value] = {
//       count: 1
//     }
//   }
//   return acc
// }, {})

// console.log(voteresult)
// console.clear()
// const obj2 = [
//   "java",
//   "python",
//   "java",
//   "python"
// ]

// function myreduce(cb, initial, array) {
//   const acc = initial || arr[0]
//   for (let i = 0; i < array.length; i++) {
//     cb(acc, array[i])
//   }
//   return acc
// }

// function cb(acc, value) {
//   if (acc[value]) {
//     acc[value].count += 1
//     acc[value].price += 100
//   } else {
//     1
//     acc[value] = {
//       count: 1,
//       price: 100
//     }
//   }
// }
// const result = myreduce(cb, {}, obj2)
// console.log(result)
// const arr2 = [1, 2, 3, 4, 5]

// function myReduce(logic, arr, init) {
//   let acc
//   let ind = 0
//   if (init || init == 0) {
//     acc = init
//   } else {
//     acc = arr[0]
//     ind = 1
//   }
//   for (let i = ind; i < arr.length; i++) {
//     acc = logic(acc, arr[i])
//   }
//   return acc
// }

// function mylogic(acc, value) {
//   // console.log("accumulator", acc)
//   // console.log("value", value)
//   return acc + value
// }
// const result = myReduce(mylogic, arr2, 0)
// console.log(result)
console.clear()
// const arr3 = ['bhadhonvai', 'rijwanvai', 'nayeemvai']

// function myForech(arr, cb) {

//     for (let i = 0; i < arr.length; i++) {
//         cb(arr[i], i, arr)
//     }
// }
// myForech(arr3, (value, index) => {
//     console.log(index, "", value)
// })
// console.log([5,2] -2);
// function charCoutn(str) {
//     var result = {};
//     for (var i = 0; i < str.length; i++) {
//         var char = str[i].toLowerCase()
//         if (result[char] > 0) {
//             result[char]++;
//         } else {
//             result[char] = 1;
//         }
//     }
//     return result;
// }
// console.log(charCoutn("hhxduu"));
// function charCoutn1(str) {
//     var obj = {};
//     for (var char of str) {
//         var char = str.toLowerCase()
//         if (/[a-z0-9]/.test(char)) {
//             if (obj[char] > 0) {
//                 obj[char]++;
//             } else {
//                 obj[char] = 1;
//             }
//         }
//     }
//     return obj;
// }

// function charCoutn(str) {
//     var obj = {};
//     for (var char of str) {
//         if (isAlphaNumeric(char)) {
//             char = str.toLowerCase()
//             obj[char] = ++obj[char] || 1;
//         }
//     }
//     return obj;
// }

// function isAlphaNumeric(char) {
//     var code = char.charCodeAt(0)
//     if (!(code > 47 && code < 58) && //numeric (0-9)
//         !(code > 64 && code < 91) && //upper alpha (A-Z)
//         !(code > 47 && code < 58)) //lower alpha (a-z)
//     {
//         return false
//     }
//     return true

// }
// console.log(charCoutn("Hello World hi!!"));
// class X {
//     get Y() {
//         return 42;
//     }
// }
// x = new X();
// console.log(x.Y);
// var SKAlAminHossain_GF = ['bhadhonvai']
// someValues.includes('')
// someValues
// listofmeye.forEach((element, index) => {
//     if (SKAlAminHossain_GF == ture) {
//         console.log(`amar onake lagbo: ${index}`);
//     }
//     console.log(element);
// });
// for (var i = 1; i <= 64; i++) {
//     count = 0;
//     count += Math.pow(i, 2);
// }
// console.log(count);
// console.log(Math.sqrt(64));
// let dyvb = false
// if(dyvb){
//     throw new Error("hih")
// }
//prisma query
// const opArgs = {
//     where: {
//         published: true,
//     }
// }

// console.log(opArgs);
// let y = true;
// if (y) {
//     opArgs.where.OR = [{
//         title_contains: "Hello"
//     }, {
//         body_contains: "hi"
//     }]
// }
// console.log(opArgs.where);
// let  v= true
// console.log(v!=!true)
const os = require("os");
console.log(os.cpus());