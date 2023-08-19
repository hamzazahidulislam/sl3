/** @format */

console.clear()

const value = ''

// const { Console, log } = require('console')
// const path = require('path')
import path from 'path'
import Watcher from 'watcher'
// import chokidar from './chokidar'
// console.log('console')

// const fs = require('fs')
import fs from 'fs'
fs.readFile('./COBASC311_20230510010303640.txt', async (err, inputD) => {
  if (err) throw err
  // console.log(await inputD.toString())
  let text = inputD.toString()
  // console.log(text.search(/WBC/), 'shofiul ')
  //   console.log(text.replace('', '').replace('', '').replace('☻', ''))
  // console.log(text, '20 line')
  const p = 'Dog dog'
  // we removed the unreadble charaters from this file
  const regex = /||/gi
  console.log(regex,"")
  // console.log(text.replace(regex, ''))

  const file = inputD.toString().replace(regex, '')

  // define a range beetween 40 to 56
  // const RangeRegex = /.*/
  // const range = file.search(RangeRegex)
  // console.log(file,"after remove regex")

  const allLines = file.split(/\r\n|\n/)

  const regexForPipe = /^[\0-9\A-Z\a{2}^\|\d]*$/

  const regexCaret = /([^^]+)/

  // Reading line by line
  // console.log(allLines)
  var numberPattern = /\d+/g
  var uniqueId = [] //this is hold our unique id
  console.log(allLines[0].split())
  allLines.forEach((line) => {
    // if (line.length >= 40 && line.length <= 200) {
    //   console.log('line gap')
    //   console.log(line)
    // }
    // hold
    // if (line[(6, 3)]) {
    //   uniqueId.push(line[(6, 3)])
    // }
    // console.log(line[6], 'you goted')
    // if (line.length >= 300) {
    //   // console.log('line gap')
    //   const PipeRemove = line.toString().split('|')
    //   const PipeSort = PipeRemove[(0, 3)]
    //   const RemoveFreeSpace = PipeSort.replace(/[^\w\r\n]+/).toString()
    //   const GetNumOnly = RemoveFreeSpace.replace(/^\D+\W*/g, '').toString()
    //   const RemoveLastCircumflex =
    //     GetNumOnly.replace(/\W*[ A-Za-z]+/g).toString()
    //   const RemoveLast = RemoveLastCircumflex.match(numberPattern).toString()
    //   uniqueId.push(RemoveLast)
    //   // console.log(uniqueId.push(RemoveLast))
    // }
  })

  // console.log(allLines[6].split('|',)[3], 'yes goted')

  // this line of code are use for find second uniqueId
  const uniqueId2 = allLines[0].split('|')
  // hold uniqueID
  // console.log(uniqueId2)
  const ObjectArrayMain = []
  allLines.forEach((line) => {
    if (line.length >= 40 && line.length <= 200) {
      // console.log('line gap')
      // console.log(line)

      // this code will make key and value arrays for unique keys
      const str = line
      const converted = str.split('|')
      const arraySplit = [...converted]

      const keyValue = arraySplit[2]
        .split(/[^A-Za-z]/g)
        .toString()
        .split(/\W*/)
        .toString()
        .replace(/[, ]+/g, '')
        .trim()
      // console.log(keyValue)
      for (let index = 0; index < arraySplit.length; index++) {
        const element = arraySplit[index]

        ObjectArrayMain.push({ [keyValue]: element })
        // we try to build a loop of array elements that array key and value array of array
        // console.log((object['prop' + index] = element))
      }
    }
  })
  // console.log(ObjectArrayMain)

  // this code try creat a foler if folder doesn't exist
  const DemoDbFilePath = `C:\\Users\\Hp\\Desktop\\sl3\\j`
  const resolved = path.resolve(DemoDbFilePath)
  const dir = `${resolved}` + '/completed'
  console.log(dir)

  if (!fs.existsSync(dir)) {
    fs.mkdirSync(dir, {
      recursive: true
    })
  }
  const watcher = new Watcher(
    './completed',
    {},
    (event, targetPath, targetPathNext) => {}
  )
  const folderPath = './completed'
  // this code help me to rename file now need to transfer this file
  // console.log('Creating a new file...')
  // const newFile = fs.writeFileSync(
  //   `./completed/${uniqueId[0] + `+` + uniqueId2}.txt`,
  //   text
  // )
  // axios.post('http://localhost:5000/').catch(function (error) {
  //   if (error.response) {
  //     console.log(error.response.data)
  //     console.log(error.response.status)
  //     console.log(error.response.headers)
  //   }
  // })

  // fs.readdir('./getFileList', (err, files) => {
  //   files.forEach((file) => {
  //     console.log(file)
  //   })
  // })
  // this code help me creat a new foler
  // const fullPath = path.join(folderPath, newFile)
  // fs.renameSync(fullPath, path.join(folderPath, newFile))

  // this code required when app init
  // const folderPath = './test'

  // read all files in the directory
  // let filesArr = fs.readdirSync(folderPath)
  // console.log(filesArr)
  // this is production code end
  // console.log(uniqueId[0])

  // console.log('something102asdfkj1948948'.match(numberPattern))
  // *****
  // const str = '6R|1|^^^^WBC^1|10.54|10*3/uL||N||F||||20230529114707'
  // const converted = str.split('|')
  // const arraySplit = [...converted]

  // console.log(arraySplit)
  // const ObjectArray = []
  // for (let index = 0; index < arraySplit.length; index++) {
  //   const element = arraySplit[index]
  //   const object = { ugu: element }
  //   ObjectArray.push([index, element])
  //   // we try to build a loop of array elements that array key and value array of array
  //   console.log((object['prop' + index] = element))
  // }

  // console.log(ObjectArray)
  // *****

  // this code will make key and value arrays for unique keys
  const str = '6R|1|^^^^WBC^1|10.54|10*3/uL||N||F||||20230529114707'
  const converted = str.split('|')
  const arraySplit = [...converted]

  const keyValue = arraySplit[2]
    .split(/[^A-Za-z]/g)
    .toString()
    .split(/\W*/)
    .toString()
    .replace(/[, ]+/g, '')
    .trim()
  console.log(keyValue)
  const ObjectArray = []
  for (let index = 0; index < arraySplit.length; index++) {
    const element = arraySplit[index]

    ObjectArray.push({ [keyValue]: element })
    // we try to build a loop of array elements that array key and value array of array
    // console.log((object['prop' + index] = element))
  }

  // this is for how they extract data from
  // console.log(ObjectArray)
  for (let elm of ObjectArray) {
    for (const key in elm) {
      // console.log(elm[key])
    }
    // console.log(elm)
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

  // console.log('hi')
  // const chokidar = require('chokidar')

  // One-liner for current directory
  // chokidar
  //   .watch('./test', {
  //     ignoreInitial: true
  //   })
  //   .on('add', (path) => {
  //     console.log(path)
  //   })
  const watcherConnect = new Watcher('./completed', {
    depth: 500,
    depth: 2,
    ignoreInitial: true,
    persistent: true,
    native: true
  })

  watcherConnect.on('all', (event, targetPath, targetPathNext) => {
    console.log(event, 'this is event') // => could be any target event: 'add', 'addDir', 'change', 'rename', 'renameDir', 'unlink' or 'unlinkDir'
    if (event === 'add') {
      console.log(event, 'yes i am added')
      console.log(targetPath, 'this is path') // => the file system path where the event took place, this is always provided
    }
    console.log(targetPath, 'this is path') // => the file system path where the event took place, this is always provided
    console.log(targetPathNext, 'next teget path') // => the file system path "targetPath" got renamed to, this is only provided on 'rename'/'renameDir' events
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
