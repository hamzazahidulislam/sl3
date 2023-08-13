/** @format */

console.clear()

const value = ''

const { Console, log } = require('console')
// console.log('console')

const fs = require('fs')
fs.readFile('XN350_20230529123843447.txt', (err, inputD) => {
  if (err) throw err
  //   console.log(inputD.toString())
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

  for (let index = 0; index < arraySplit.length; index++) {
    const element = arraySplit[index]
    console.log(element)
  }

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
})
