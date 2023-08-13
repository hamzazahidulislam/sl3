/** @format */

console.clear()

const value = ''

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
  console.log(text.replace(regex, ''))
})
