/** @format */
console.clear();
// function addAge(obj: Person): Person {
//   obj.age += 1;
//   return obj;
// }

// interface Person {
//   name: string;
//   age: number;
// }
// const person: Person = {
//   name: 'hamza',
//   age: 19,
// };
// const value = addAge(person);
// value.name = 'Manal';
// console.log(value);

// -----

interface Person {
  name: string;
  age: number;
  achievement: string[];
  ismerried: boolean;
  note: unknown;
  error: () => never;
}

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
function err(): never {
  while (true) {}
}
function addsomthing(data: Person): Person | undefined | null {
  data.name = '';
  return data;
}
const person: Person = {
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
