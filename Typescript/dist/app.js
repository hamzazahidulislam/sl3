"use strict";
/** @format */
console.clear();
// function addachivment(data: Person, acv: string): void {
//   data.achievement.push(acv);
//   console.log(data);
// }
// function changemarriedStatus(status: boolean): void {
//   status = !status;
//   console.log(status);
// }
// function addextra(value: unknown): void {
//   person.note = value;
//   console.log(person.note);
// }
function err() {
    while (true) { }
}
function addsomthing(data) {
    data.name = '';
    return data;
}
const person = {
    name: 'hamza',
    age: 19,
    achievement: ['coding', 'dancing'],
    ismerried: false,
    note: '',
    error: err,
};
// addachivment(person, 'acting');
// changemarriedStatus(person.ismerried);
// addextra({
//   extra: 'i am a programmer',
// });
let res = addsomthing(person);
if (typeof res !== 'undefined' && res !== null) {
    res.age = 12;
}
console.log(person);
