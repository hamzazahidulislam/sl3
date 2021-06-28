// interface kepair{
//     key: number,
//     value: string
// }
// function show(){
//     let b:kepair={key:1,value:'hamza'}
// }
// interface cal{
//     sum(first:number,second:number)
// }
// let calculate:cal={
//     sum(first:number,second:number){
//         return first + second;
//     }
// }

// ------------------------
// enum colors{
//     blue=10,green,yellow
// }
// var mycolor=colors.blue;
// console.log(mycolor)
// function show<T>(args:T):T{
//     return args
// }
// var output1  = show<String>("hamza")
// var output2  = show<Number>(2)
// console.log(output1)
// console.log(output2)
// var a:number=10
// var b:number=10
// var resutl:number = a+b
// console.log(resutl)
// function sum(a:number,b:number){
//     return a+b;
// }
// console.log(sum(10,10))
function names(a: string, ...b: string[]) {
  console.log(`${a} ${b.join(" ")}`);
}
names("hamza", "zahidul", "islam");
