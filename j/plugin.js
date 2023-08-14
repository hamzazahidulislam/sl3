/** @format */

console.clear()

const value = ''

const { Console, log } = require('console')
// console.log('console')

const fs = require('fs')
fs.readFile('XN350_20230529123843447.txt', async (err, inputD) => {
  if (err) throw err
  // console.log(await inputD.toString())
  let text = inputD.toString()
  //   console.log(text.search(/WBC/))
  //   console.log(text.replace('', '').replace('', '').replace('☻', ''))

  const p = 'Dog dog'
  const regex = /|/gi
  // console.log(text.replace(regex, ''))

  const file = inputD.toString().replace(regex, '')

  // define a range beetween 40 to 56
  // const RangeRegex = /.*/
  // const range = file.search(RangeRegex)
  // console.log(file)

  const allLines = file.split(/\r\n|\n/)

  const regexForPipe = /^[\0-9\A-Z\a{2}^\|\d]*$/

  const regexCaret = /([^^]+)/

  // Reading line by line
  // console.log(allLines)
  // allLines.forEach((line) => {
  //   if (line.length >= 40 && line.length <= 63) {
  //     console.log('line gap')
  //     console.log(line)
  //   }
  // })

  const str = '6R|1|^^^^WBC^1|10.54|10*3/uL||N||F||||20230529114707'
  const converted = str.split('|')
  const arraySplit = [...converted]

  console.log(arraySplit)
  const ObjectArray = []
  for (let index = 0; index < arraySplit.length; index++) {
    const element = arraySplit[index]
    const object = { ugu: element }
    ObjectArray.push([index, element])
    // we try to build a loop of array elements that array key and value array of array
    // console.log((object['prop' + index] = element))
  }

  console.log(ObjectArray)

  function Object(
    Object1,
    Object2,
    Object3,
    Object4,
    Object5,
    Object6,
    Object7,
    Object8,
    Object9,
    Object10,
    Object11,
    Object12,
    Object13
  ) {
    this.Object1 = Object1
    this.Object2 = Object2
    this.Object3 = Object3
    this.Object4 = Object4
    this.Object5 = Object5
    this.Object6 = Object6
    this.Object7 = Object7
    this.Object8 = Object8
    this.Object9 = Object9
    this.Object10 = Object10
    this.Object11 = Object11
    this.Object12 = Object12
    this.Object13 = Object13
  }

  const personOne = new Object()
  // console.log(personOne.Object1)

  const personTwo = JSON.stringify(arraySplit)
  // console.log(personTwo)

  // crate array loop for object cration
  let obj = { first: 'John', last: 'Doe' }
  // Object.keys(obj).forEach(function (key) {
  //   console.log(key, obj[key])
  // })
  // this is array convert into object
  // const array = [
  //   ['cardType', 'iDEBIT'],
  //   ['txnAmount', '17.64'],
  //   ['txnId', '20181'],
  //   ['txnType', 'Purchase'],
  //   ['txnDate', '2015/08/13 21:50:04'],
  //   ['respCode', '0'],
  //   ['isoCode', '0'],
  //   ['authCode', ''],
  //   ['acquirerInvoice', '0'],
  //   ['message', ''],
  //   ['isComplete', 'true'],
  //   ['isTimeout', 'false']
  // ]

  // const obj2 = Object.fromEntries(array)
  // console.log(obj2)

  console.log('hi')
  const chokidar = require('chokidar')

  // One-liner for current directory
  chokidar
    .watch('./test', {
      ignoreInitial: true
    })
    .on('add', (path) => {
      console.log(path)
    })

  // let string = `test\g.ts Stats {
  //   dev: 4201496056,
  //   mode: 33206,
  //   nlink: 1,
  //   uid: 0,
  //   gid: 0,
  //   rdev: 0,
  //   blksize: 4096,
  //   ino: 18577348463041812,
  //   size: 0,
  //   blocks: 0,
  //   atimeMs: 1692006681576.5693,
  //   mtimeMs: 1692006681576.5693,
  //   ctimeMs: 1692006681576.5693,
  //   birthtimeMs: 1692006681576.5693,
  //   atime: 2023-08-14T09:51:21.577Z,
  //   mtime: 2023-08-14T09:51:21.577Z,
  //   ctime: 2023-08-14T09:51:21.577Z,
  //   birthtime: 2023-08-14T09:51:21.577Z
  // }`

  // splits every letter in string into an item in our array
  // let newArray = string.split(' ')
  // console.log(newArray)
})
